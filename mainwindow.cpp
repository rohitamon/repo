#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "ping.h"
#include <QThread>

#include <QDateTime>
#include <iterator>
#include <QCoreApplication>


#ifdef Q_WS_WIN
#include "iphlpapi.h"
#include "icmpapi.h"
#include "winsock2.h"
#endif


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("JANYU TECH -UV-Tower");
    write_log("Starting UV Disinfectant Robot");

//    m_path=QStandardPaths::writableLocation(QStandardPaths::ConfigLocation) ;
//    m_filename = "config.ini" ; m_path + "/"+ m_filename,QSettings::IniFormat
    settings = new QSettings() ;

    socket=new QTcpSocket(this);
    server=new QTcpServer;

    date=QDateTime::currentDateTime().toString("dd.MM.yyyy");

    load_settings();
    load_video();
    excel_file_name= "UV_di process Log";

    QString ipRange = "(?:[0-1]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5])";
    QRegExp ipRegex ("^" + ipRange
                     + "\\." + ipRange
                     + "\\." + ipRange
                     + "\\." + ipRange + "$");
    #ifdef Q_WS_WIN
    QRegExpValidator *ipValidator = new QRegExpValidator(ipRegex, this);
    connect(timer_ip, &QTimer::timeout, this, [this](void){detect_ip();});
    timer_ip->start(3000);
    #endif

     green="border-width: 2px;border-style: solid; border-color:rgb(1,255,1); border-radius: 4px; background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(1, 255,1, 150),stop:0.49 rgba(1,200,1,150) ,stop:0.5 rgba(1,125,1,150), stop:1 rgba(1, 155, 1,150));";
     grey="border-width: 2px;border-style: solid; border-color:rgb(90,90,90);border-radius: 4px; background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(80, 80,80, 150),stop:0.49 rgba(75,75,75,150) ,stop:0.5 rgba(60,60,60,150), stop:1 rgba(55, 55, 55,150));";
     red="border-width: 2px;border-style: solid; border-color:rgb(250,5,1); border-radius: 4px; background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 5,1, 150),stop:0.49 rgba(200,1,1,150) ,stop:0.5 rgba(125,5,1,150), stop:1 rgba(125, 5, 1,150));";
     blue="border-width: 2px;border-style: solid; border-color:rgb(0,162,239); border-radius: 4px; background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 162,237, 150),stop:0.49 rgba(0,162,237,150) ,stop:0.5 rgba(0,150,200,150), stop:1 rgba(0,150, 200,150));";
     grey_1="border-width: 2px;border-style: solid;border-radius: 12px;border-color:rgb(100,100,100);background-color:grey;";
     blue_1="border-width: 2px;border-style: solid; border-color:rgb(0,162,239); border-radius: 12px; background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 162,237, 150),stop:0.49 rgba(0,162,237,150) ,stop:0.5 rgba(0,150,200,150), stop:1 rgba(0,150, 200,150));";
     orange="border-width: 2px;border-style: solid; border-color:rgb(250,165,1); border-radius: 4px; background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 165,1, 150),stop:0.49 rgba(200,150,1,150) ,stop:0.5 rgba(185,150,1,150), stop:1 rgba(185, 150, 1,150));";

     ui->pushButton_drive->setStyleSheet(blue);
     ui->radioButton_slow->setChecked(true);
     ui->label_bat->setGeometry(4,3,35,25);ui->label_bat->setStyleSheet(orange);
     ui->exit->setStyleSheet(red);

     myping = new ping();
     connect(myping, SIGNAL(code(int)), this, SLOT(ip_detected(int)));

     connect(timer_ip, &QTimer::timeout, this, [this](void){detect_ip();});
     if(ip != "")
     timer_ip->start(3000);

     connect(timer, &QTimer::timeout, this, [this](void){connection();});

     ui->pushButton_2->setVisible(false);
     load_users();
     ui->stackedWidget->installEventFilter(this);

     myThread = new Thread();
     connect(myThread,SIGNAL(button_val(int,bool)),this,SLOT(button_val(int,bool)));
     connect(myThread,SIGNAL(axis_val(int,int)),this,SLOT(axis_val(int,int)));
     connect(myThread,SIGNAL(joystick(bool)),this,SLOT(joystick(bool)));
     connect(myThread,SIGNAL(direction(QString)),this,SLOT(direction(QString)));

     myThread->start();

     ui->settings_tab->setEnabled(false);

//     model = new QFileSystemModel;
//     model->setRootPath(QDir::currentPath());
//     tree = new QTreeView(ui->treeView);
//     tree->setModel(model);
//     tree->setRootIndex(model->index(QDir::currentPath()));

}

MainWindow::~MainWindow()
{
    delete ui;    
    myThread->exit(0);
}
/*
void MainWindow::write_xl()
{
    file=excel_file_name+ "_"+aircraft_no+"_"+ date+".xlsx";
    if(path != ""){file=path+file;}
    Document xlsx(file);

    xlsx.setColumnWidth(1,2,15); QColor red; red.setRed(255);
    Format bold_font,color;
    bold_font.setFontBold(true); //color.setPatternBackgroundColor(red);
    bold_font.setFontSize(10);

    xlsx.write("A1", "Airport:",bold_font);
    xlsx.write("B1", airport,bold_font);
    xlsx.write("D1", "Date:",bold_font);
    xlsx.write("E1", date,bold_font);

    xlsx.write("A2", "Aircraft Number:",bold_font);
    xlsx.write("B2", aircraft_no,bold_font);

    xlsx.write("A3", "Gate Number:",bold_font);
    xlsx.write("B3", gate_no,bold_font);

    xlsx.write("A4", "Operation carried by:",bold_font);
    xlsx.write("B4", person,bold_font);

    xlsx.write("A7", "Started on",bold_font);
    xlsx.write("B7", "Completed on:",bold_font);

    data=xlsx.read(row,column).toString(); while (data != "") { row++;data=xlsx.read(row,column).toString();}

    xlsx.write(row,column,started_on); column++;
    xlsx.write(row,column,completed_on);

    column=1;

    int err=xlsx.saveAs(file);
    if(err==0){
        logs_error("Error creating excel file. Please check file path!");
        write_log("Error creating excel file. Please check file path!");
    }
    qDebug()<<"Error creating file:"<<err;
}
*/
void MainWindow::on_login_clicked()
{
    QString id,pass;
    id=ui->lineEdit_user_name->text();
    pass=ui->lineEdit_password->text();

    if(user_id==id && user_pass==pass)
      {
        write_log(user_id+ "Logged In");
        ui->settings_tab->setEnabled(true);
        logged=true;
        ui->login_2->setEnabled(false);
        ui->label_login_info->setText("Logged In "+user_id);
        started_on=QDateTime::currentDateTime().toString("hh:mm");
        //write_xl();
        }
    else {QMessageBox::warning(this,"LogIn Error","Login Id or Password incorrect");}

    ui->stackedWidget->setCurrentIndex(1);

 }

void MainWindow::detect_ip()
{
    myping->start_command(ip);
//    QString result= myping->readResult();
//    logs(result);
    qDebug()<<"Ping finished"<< myping->finished();
}

void MainWindow::ip_detected(int a)
{
    qDebug()<<"Exit code detected"<<a;
    if(a==0){
        timer_ip->stop();
        if(!(socket->state() == QTcpSocket::ConnectedState))
        {logs(ip+" The host is ready for connection");
        ui->pushButton_connect_disconnect->setStyleSheet(blue);
        ui->pushButton_connect_disconnect->setText("Robot ready\n Connect");}
    }
    else {
        ui->pushButton_connect_disconnect->setStyleSheet(grey);
        ui->pushButton_connect_disconnect->setText("Robot\noff");
    }
}

void MainWindow::on_pushButton_refresh_clicked()
{
//    view->stop();
//    player1->stop();player2->stop();

    //load_video();
    if(!timer_ip->isActive() && (myping->finished())) timer_ip->start(3000);
}

#ifdef Q_WS_WIN

void MainWindow::detect_ip()
{
    HANDLE hIcmpFile;                       // Handler
    unsigned long ipaddr = INADDR_NONE;     // Destination address
    DWORD dwRetVal = 0;                     // Number of replies
    char SendData[32] = "Data Buffer";      // The buffer data being sent
    LPVOID ReplyBuffer = NULL;              // buffer replies
    DWORD ReplySize = 0;                    // Buffer Size responses

    ipaddr =  inet_addr(ui->lineEdit_ip->text().toStdString().c_str());
    hIcmpFile = IcmpCreateFile();

    // Select the buffer memory responses
     ReplySize = sizeof(ICMP_ECHO_REPLY) + sizeof(SendData);
     ReplyBuffer = (VOID*) malloc(ReplySize);

     // Call the ICMP echo request function
      dwRetVal = IcmpSendEcho(hIcmpFile, ipaddr, SendData, sizeof(SendData),
      NULL, ReplyBuffer, ReplySize, 1000);

      QString strMessage = "";

      if (dwRetVal != 0) {
          // The structure of the echo response
          PICMP_ECHO_REPLY pEchoReply = (PICMP_ECHO_REPLY)ReplyBuffer;
          struct in_addr ReplyAddr;
          ReplyAddr.S_un.S_addr = pEchoReply->Address;

          strMessage += "Sent icmp message to " + ui->lineEdit_ip->text() + "\n";
          if (dwRetVal > 1) {
              strMessage += "Received " + QString::number(dwRetVal) + " icmp message responses \n";
              strMessage += "Information from the first response: ";
          }
          else {
              strMessage += "Received " + QString::number(dwRetVal) + " icmp message response \n";
              strMessage += "Information from the first response: ";
          }
              strMessage += "Received from ";
              strMessage += inet_ntoa( ReplyAddr );
              strMessage += "\n";
              strMessage += "Status = " + pEchoReply->Status;
              strMessage += "Roundtrip time = " + QString::number(pEchoReply->RoundTripTime) + " milliseconds \n";
              if(timer_ip->isActive())timer_ip->stop();
              ui->pushButton_connect_disconnect->setText("Robot Ready");
              QString green="border-width: 2px;border-style: solid; border-color:rgb(1,255,1); border-radius: 4px; background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(1, 255,1, 150),stop:0.49 rgba(1,200,1,150) ,stop:0.5 rgba(1,125,1,150), stop:1 rgba(1, 155, 1,150));";
              ui->pushButton_connect_disconnect->setStyleSheet(green);


      } else {
          strMessage += "Call to IcmpSendEcho failed.\n";
          strMessage += "IcmpSendEcho returned error: ";
          strMessage += QString::number(GetLastError());
          ui->pushButton_connect_disconnect->setText("Robot Off");
          QString red="border-width: 2px;border-style: solid; border-color:rgb(155,1,1); border-radius: 4px; background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 1,1, 250),stop:0.49 rgba(200,1,1,250) ,stop:0.5 rgba(155,1,1,250), stop:1 rgba(125, 1, 1,250));";
          ui->pushButton_connect_disconnect->setStyleSheet(red);
      }
       logs(strMessage);
       free(ReplyBuffer);

}
#endif

void MainWindow::load_settings()
{
    write_log("Loading settings");

    user_id=settings->value("user_id").toString();
    user_pass=settings->value("user_pass").toString();

    ui->lineEdit_user_name->setText(user_id);
    ui->user_id->setText(user_id);

   cam1_ip= settings->value("cam1").toString(); ui->lineEdit_cam1->setText(cam1_ip);
   cam2_ip= settings->value("cam2").toString(); ui->lineEdit_cam2->setText(cam2_ip);
   //url = settings->value("url").toString(); ui->lineEdit_url->setText(url);

   ip=settings->value("ip").toString(); ui->lineEdit_ip->setText(ip);
   port=settings->value("port").toString(); ui->lineEdit_port->setText(port);

   //dir=settings->value("dir").toString();ui->lineEdit_url_path->setText(dir);
   //admin_pass=settings->value("admin_pass").toString(); ui->lineEdit_login_password->setText(admin_pass);


   //airport=settings->value("airport").toString(); ui->airport_name->setText(airport);
   //gate_no=settings->value("gate_no").toString(); ui->gate_no->setText(gate_no);

}


void MainWindow::load_video()
{   write_log("Loading ip camera streams");

    player1=new QMediaPlayer;
    player2=new QMediaPlayer;

    vw1= new QVideoWidget;
    vw2= new QVideoWidget;

    layout1=new QHBoxLayout;
    layout2=new QHBoxLayout;

    layout1->addWidget(vw1);
    layout2->addWidget(vw2);

    player1->setVideoOutput(vw1);
    player2->setVideoOutput(vw2);

    ui->view_1->setLayout(layout1);
    ui->view_5->setLayout(layout2);


    player1->setMedia(QUrl(cam1_ip));
    player2->setMedia(QUrl(cam2_ip));

    vw1->show();
    vw2->show();

    player1->play();
    player2->play();

}

void MainWindow::send(QString msg)
{
    socket->write(msg.toUtf8());
}

void MainWindow::logs(QString msg)
{

    //ui->plainTextEdit->appendPlainText(msg);
    msg= ">>"+msg+QDateTime::currentDateTime().toString(">>dd.MM.yyyy hh:mm:ss");
    ui->system_log->appendPlainText(msg);

    int i= ui->system_log->document()->lineCount();
    if(i>=100){ui->system_log->clear();}
}

void MainWindow::logs_error(QString msg)
{
    msg= ">>"+msg+QDateTime::currentDateTime().toString(">>dd.MM.yyyy hh:mm:ss");
    ui->error_log->appendPlainText(msg);

    int i= ui->error_log->document()->lineCount();
    if(i>=100){ui->error_log->clear();}
}


void MainWindow::on_pushButton_connect_disconnect_toggled(bool checked)
{
    ip=ui->lineEdit_ip->text();
    port=ui->lineEdit_port->text();

    if (checked){
        socket->connectToHost(QHostAddress(ip),port.toInt());
        //socket->connectToHostEncrypted(ip,port.toInt());

         if(socket->waitForConnected(3000))
             {
             timer_ip->stop();
              QString message = "Connected to"+socket->peerAddress().toString();
              //qDebug()<<message;
              logs(message); write_log(message);

              ui->pushButton_connect_disconnect->setStyleSheet(green);
              ui->pushButton_connect_disconnect->setText("Connected\nDisconnect");
              send("S");
              ui->radioButton_slow->setChecked(true);
              send("O");
              connect(socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
              timer->start(3000);
              }
         else {
             QString message = "Could not establish a connection with "+ip;
             //qDebug()<<message;
             logs(message);  write_log(message);
               }
             }
    else  {

        socket->disconnectFromHost();socket->close();
        QString message = "Connection Disconnected";
        logs(message);  write_log(message);
        ui->pushButton_connect_disconnect->setStyleSheet(blue);
        ui->pushButton_connect_disconnect->setText("Robot\n disconnected");
        timer->stop();
        timer_ip->start(3000);
    }
}

void MainWindow::onReadyRead()
{
    datas = socket->readAll();
    QString abc = datas;
    qDebug()<<"Data received"<<datas;
    //logs("Data received"+datas);

    if(abc[0]== "F") {

        if(datas == "FRDTMG\r\n") {ui->sense_fm->setStyleSheet(red);}
        else if (datas == "FRNRMG\r\n") {ui->sense_fm->setStyleSheet(orange); }
        else if (datas == "FRCLMG\r\n") {ui->sense_fm->setStyleSheet(green); }

   }

    if(abc[0]== "B") {

        if(datas == "BKDTMG\r\n") {ui->sense_bm->setStyleSheet(red);}
        else if (datas == "BKNRMG\r\n") {ui->sense_bm->setStyleSheet(orange);}
        else if (datas == "BKCLMG\r\n") {ui->sense_bm->setStyleSheet(green);}


        if(datas == "BAT_ON\r\n") { ui->label_bat->setGeometry(4,3,55,25);ui->label_bat->setStyleSheet(green);}
        if(datas == "BATOFF\r\n") { ui->label_bat->setGeometry(4,3,20,25);ui->label_bat->setStyleSheet(red);}

        if(datas == "BTEDRC\r\n") {bottom_limit=true;}
       }

    if(datas == "TPEDRC\r\n") {top_limit=true;}
}


void MainWindow::connection()
{
    bool connected = (socket->state() == QTcpSocket::ConnectedState);
    if(!connected){
        ui->pushButton_connect_disconnect->setStyleSheet(blue);
        ui->pushButton_connect_disconnect->setText("Robot\n disconnected");
        timer_ip->start(3000);}
}

void MainWindow::on_pushButton_drive_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->pushButton_drive->setStyleSheet(blue);
    //ui->pushButton_view->setStyleSheet(grey);
    //ui->pushButton_trip_log->setStyleSheet(grey);
    ui->pushButton_robo_log->setStyleSheet(grey);
    ui->settings->setStyleSheet(grey);
}
/*
void MainWindow::on_pushButton_view_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
    //ui->pushButton_view->setStyleSheet(blue);
    ui->pushButton_drive->setStyleSheet(grey);
   // ui->pushButton_trip_log->setStyleSheet(grey);
    ui->pushButton_robo_log->setStyleSheet(grey);
    ui->settings->setStyleSheet(grey);
}

void MainWindow::on_pushButton_trip_log_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->pushButton_trip_log->setStyleSheet(blue);
    ui->pushButton_drive->setStyleSheet(grey);
    ui->pushButton_view->setStyleSheet(grey);
    ui->pushButton_robo_log->setStyleSheet(grey);
    ui->settings->setStyleSheet(grey);
}
*/
void MainWindow::on_pushButton_robo_log_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
    ui->pushButton_robo_log->setStyleSheet(blue);
    ui->pushButton_drive->setStyleSheet(grey);
    //ui->pushButton_view->setStyleSheet(grey);
   // ui->pushButton_trip_log->setStyleSheet(grey);
    ui->settings->setStyleSheet(grey);
}

void MainWindow::on_settings_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->settings->setStyleSheet(blue);
    ui->pushButton_drive->setStyleSheet(grey);
    //ui->pushButton_view->setStyleSheet(grey);
   // ui->pushButton_trip_log->setStyleSheet(grey);
    ui->pushButton_robo_log->setStyleSheet(grey);
}

void MainWindow::on_pushButton_ok_clicked()
{
    cam1_ip=ui->lineEdit_cam1->text();
    cam2_ip=ui->lineEdit_cam2->text();

    settings->setValue("cam1",cam1_ip);
    settings->setValue("cam2",cam2_ip);
}

void MainWindow::on_pushButton_ok_2_clicked()
{
    ip=ui->lineEdit_ip->text();
    port=ui->lineEdit_port->text();
    settings->setValue("ip",ip);
    settings->setValue("port",port);

}
/*
void MainWindow::on_pushButton_clicked()
{
    url = ui->lineEdit_url->text();
    settings->setValue("url",url);

    dir= ui->lineEdit_url_path->text();
    settings->setValue("dir",dir);

    admin_pass = ui->lineEdit_login_password->text();
    settings->setValue("admin_pass",admin_pass);
}
*/
///////////////////
/// \brief speed control
///
///
void MainWindow::on_radioButton_slow_clicked()
{
    send("O"); logs("Sending O");
}

void MainWindow::on_radioButton_medium_clicked()
{
    send("I"); logs("Sending I");
}

void MainWindow::on_radioButton_high_clicked()
{
    send("A"); logs("sendind A");
}


///////////////////////
/// \brief robot driving
///

void MainWindow::on_up_pressed()
{
    if(logged)
    {
        send("F");logs("Sending F");
    }
    else{QMessageBox::warning(this,"LogIn Error","Please login");}

}

void MainWindow::on_up_released()
{      
    send("P");
    logs("Sending P");
}

void MainWindow::on_down_pressed()
{
    if(logged)
    {       
        send("B");logs("Sending B");
    }
    else{QMessageBox::warning(this,"LogIn Error","Please login");}

}

void MainWindow::on_down_released()
{
    send("P"); logs("Sending P");
}

void MainWindow::on_left_pressed()
{
    if(logged)
    {
        send("L");logs("Sending L");
    }
    else{QMessageBox::warning(this,"LogIn Error","Please login");}

}

void MainWindow::on_left_released()
{
    send("P");
    logs("Sending P");
}

void MainWindow::on_right_pressed()
{
    if(logged)
    {
        send("R");logs("Sending R");
    }
    else{QMessageBox::warning(this,"LogIn Error","Please login");}

}

void MainWindow::on_right_released()
{
    send("P"); logs("Sending P");
}


// WITH joystiCK

void MainWindow::joystick(bool val)
{
    qDebug()<<"Joystick detected"; logs("Joystick detected");
}

void MainWindow::button_val(int a, bool val)
{
    qDebug()<<"Button"<<a<<"Value"<<val;

    if(a==3){
        if(val){send("O");}
        ui->radioButton_slow->setChecked(true);

    }

    else if(a==1){
        if(val){send("I"); }

        ui->radioButton_medium->setChecked(true);

    }

    else if(a==0){
        if(val){send("A"); }
        ui->radioButton_high->setChecked(true);
    }

}

void MainWindow::axis_val(int a, int b)
{
    //qDebug()<<"Axis"<<a<<"Value"<<b;
    if(logged)
     {
            if(a==0 && axis_1==false)
            {   axis_0=true;
                if(b<=5000 && b>=-5000){send("P"); axis_0=false;}
                if(b>5000){send("R");}
                else if(b<-5000){send("L");}
            }
            else if(a==1 && axis_0==false)
            {   axis_1=true;
                if(b<=5000 && b>=-5000){send("P");axis_1=false;}
                if(b>5000){send("B");}
                else if(b<-5000){send("F");}
            }
     }

}
void MainWindow::direction(QString dir)
{
    if(dir=="up"){send("F");}
    if(dir=="down"){send("B");}
    if(dir=="left"){send("L");}
    if(dir=="right"){send("R");}
    if(dir=="rel"){send("P");}
}

//////////////////////////////////
/// \brief MainWindow::closeEvent
/// \param event
///

void MainWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton btn=QMessageBox::question(this,"Medi-Doot",tr("Are you sure you want to Quit?\n"),
                                                              QMessageBox::Cancel |QMessageBox::Ok);
        if(btn!=QMessageBox::Ok){event->ignore();}
        else {   write_log("Closing Application");
                completed_on=QDateTime::currentDateTime().toString("hh:mm");
                //write_xl();
                event->accept();
        }
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
   qDebug() << "You typed "<<(event->key());

}

void MainWindow::write_log(QString object)
{
//    object= ">>"+object+QDateTime::currentDateTime().toString(">>dd.MM.yyyy hh:mm:ss");
//    qDebug()<< "Inside the write_to_file_function";
//    QFile file1("Medi-doot_logs.txt");
//    //"/home/janyutech/QT_Projects/Varaha_GUI V1.1/logs.txt"
//    if (!file1.open(QIODevice::WriteOnly | QIODevice::Append))
//            return;
//    QTextStream out(&file1);
//    //mtext=in.readAll();
//    out<<object<<"\n"; qDebug()<<object;
//    //size_of_mtext=mtext.size();
//    file1.flush();
    //    file1.close();
}

void MainWindow::on_exit_clicked()
{
    ui->exit->setStyleSheet(red);
    MainWindow::close();

}

void MainWindow::on_pushButton_2_clicked()
{
//    QByteArray ar;
//    QDataStream out(&ar,QIODevice::WriteOnly);
//    out<<map;
//    socket->write(ar);
//    QMap<QString, QString>::iterator i;
//    for (i=map.begin(); i != map.end(); ++i)
//        qDebug()<< i.key() << ": " << i.value() << endl;

load_users();


}
void MainWindow::load_users()
{
//    qv=user_set->value("users");
//    qWarning() << "qv" << qv;
//    imap_ptr=new QMap<QString,QVariant>(qv.toMap());
//    qWarning() << "map:" << imap_ptr;
//    qWarning() << "keys" << imap_ptr->keys();
//    qWarning() << "values" << imap_ptr->values();

//    QMap<QString, QVariant>::iterator i;
//    for (i=imap_ptr->begin(); i != imap_ptr->end(); ++i)
//     qDebug()<< i.key() << ": " << i.value().toString() << endl;

//    ql=imap_ptr->keys();
//    size=ql.size();
//    qWarning() << "list size=" << size;
}

/*
void MainWindow::on_pushButton_ceiling_toggled(bool checked)
{
    if(checked){send("C"); logs("Sending C");
        ui->pushButton_ceiling->setStyleSheet(blue_1);}
    else {send("K"); logs("Sending K");
        ui->pushButton_ceiling->setStyleSheet(grey_1);}
}

void MainWindow::on_pushButton_left_toggled(bool checked)
{
    if(checked){send("T"); logs("Sending T");
        ui->pushButton_left->setStyleSheet(blue_1);}
    else {send("H"); logs("Sending H");
        ui->pushButton_left->setStyleSheet(grey_1);}
}

void MainWindow::on_pushButton_right_toggled(bool checked)
{
    if(checked){send("G"); logs("Sending G");
        ui->pushButton_right->setStyleSheet(blue_1);}
    else {send("J"); logs("Sending J");
        ui->pushButton_right->setStyleSheet(grey_1);}
}

void MainWindow::on_pushButton_side_toggled(bool checked)
{
    if(checked){send("S"); logs("Sending S");
        ui->pushButton_side->setStyleSheet(blue_1);}
    else {send("E"); logs("Sending E");
        ui->pushButton_side->setStyleSheet(grey_1);}
}

void MainWindow::on_pushButton_floor_toggled(bool checked)
{
    if(checked){send("U"); logs("Sending U");
        ui->pushButton_floor->setStyleSheet(blue_1);}

        else {send("D"); logs("Sending D");
        ui->pushButton_floor->setStyleSheet(grey_1);}
}

void MainWindow::on_pushButton_wing_up_pressed()
{

    if(!top_limit)
     {send("M"); logs("Sending M");
     ui->pushButton_wing_up->setStyleSheet(blue_1);
     ui->pushButton_wing_down->setDisabled(false);
     bottom_limit=false;
    }
    else {
        ui->pushButton_wing_up->setDisabled(true);
    }
}

void MainWindow::on_pushButton_wing_up_released()
{
    send("Y"); logs("Sending Y");
    ui->pushButton_wing_up->setStyleSheet(grey_1);
}

void MainWindow::on_pushButton_wing_down_pressed()
{
    if(!bottom_limit)
    {send("N"); logs("Sending N");
    ui->pushButton_wing_down->setStyleSheet(blue_1);
    ui->pushButton_wing_up->setDisabled(false);
    top_limit=false;
    }
    else {
        ui->pushButton_wing_down->setDisabled(true);
    }
}

void MainWindow::on_pushButton_wing_down_released()
{
    send("Y"); logs("Sending Y");
    ui->pushButton_wing_down->setStyleSheet(grey_1);

}
*/

void MainWindow::on_pushButton_auto_forward_pressed()
{
    send("Q"); logs("Sending Q");
    ui->pushButton_auto_forward->setStyleSheet(blue);
}

void MainWindow::on_pushButton_auto_forward_released()
{
    //send("Q"); logs("Sending Q");
    ui->pushButton_auto_forward->setStyleSheet(grey);
}

void MainWindow::on_pushButton_stop_pressed()
{
    send("W"); logs("Sending W");
    ui->pushButton_stop->setStyleSheet(blue);
}

void MainWindow::on_pushButton_stop_released()
{
    //send("W"); logs("Sending W");
    ui->pushButton_stop->setStyleSheet(grey);
}

void MainWindow::on_pushButton_auto_reverse_pressed()
{
    send("V"); logs("Sending V");
    ui->pushButton_auto_reverse->setStyleSheet(blue);
}

void MainWindow::on_pushButton_auto_reverse_released()
{
    ui->pushButton_auto_reverse->setStyleSheet(grey);
}
/*
void MainWindow::on_airport_name_editingFinished()
{
    qDebug()<<ui->airport_name->text();
    airport=ui->airport_name->text();
    settings->setValue("airport",airport);

}

void MainWindow::on_gate_no_editingFinished()
{
    qDebug()<<ui->gate_no->text();
    gate_no=ui->gate_no->text();
    settings->setValue("gate_no",gate_no);

}

void MainWindow::on_aircraft_no_editingFinished()
{
    qDebug()<<ui->aircraft_no->text();
    aircraft_no=ui->aircraft_no->text();
    //write_xl();
}

void MainWindow::on_person_editingFinished()
{
    qDebug()<<ui->person->text();
    person=ui->person->text();
    //write_xl();
 }
*/

void MainWindow::on_login_2_clicked()
{
    QString id,pass;
    id=ui->user_id->text();
    pass=ui->user_pass->text();

   if(user_id==id && user_pass==pass)
       {
       write_log(user_id+ "Logged In");
       logged=true;
       ui->login_2->setEnabled(false);
       ui->label_login_info->setText("Logged In "+user_id);
        ui->settings_tab->setEnabled(true);
        started_on=QDateTime::currentDateTime().toString("hh:mm");
        //write_xl();
        QMessageBox::information(this,"User & Password","Logged in "+user_id+ "!");
   }
   else {
       QMessageBox::warning(this,"User & Password","Password or ID incorrect !");
   }

}

void MainWindow::on_pushButton_ok_3_clicked()
{
    QString id,pass;
    id=ui->user_id_2->text(); if (id=="")id=user_id;
    pass=ui->user_pass_2->text();
    if(pass=="")
        QMessageBox::warning(this,"User & Password","Password should be atleast 5 characters and should not be blank");

    if(logged && pass!="" )
    {
        user_id=id;user_pass=pass;
        settings->setValue("user_id",id);
        settings->setValue("user_pass",pass);
        QMessageBox::information(this,"User & Password","User Id and/or Password changed successfully");
    }
}
/*
void MainWindow::on_excel_log_file_name_editingFinished()
{
    excel_file_name = ui->excel_log_file_name->text();
}

void MainWindow::on_file_path_editingFinished()
{
    path= ui->file_path->text();
}
*/

void MainWindow::on_pushButton_on_clicked()
{
    send("M"); logs("Sending M");
    ui->pushButton_on->setStyleSheet(blue_1);
}


void MainWindow::on_pushButton_off_pressed()
{
    send("Q"); logs("Sending Q");
    ui->pushButton_off->setStyleSheet(blue_1);
    ui->pushButton_on->setStyleSheet(grey_1);
}

void MainWindow::on_pushButton_off_released()
{
    ui->pushButton_off->setStyleSheet(grey_1);
}
