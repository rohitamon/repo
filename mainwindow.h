#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QSslSocket>
#include <QTcpServer>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtMultimedia/QMediaPlayer>

#include <QSettings>
#include <QHBoxLayout>
#include <QSettings>
#include <QStandardPaths>
#include <QCloseEvent>
#include <QTimer>
#include <QList>
#include <QCamera>
#include <QUrl>
#include "ping.h"
#include <QVariantMap>
#include <QDataStream>
#include <Qt>
#include <QKeyEvent>
#include "thread.h"
//#include <QFileSystemModel>
//#include <QTreeView>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void send(QString msg);
    void load_video();

    void load_settings();

    void detect_ip();
    void logs(QString msg);
    void logs_error(QString msg);
    void load_users();
    //bool eventFilter(QObject *object, QEvent *event);
    void closeEvent(QCloseEvent *paret);
    void keyPressEvent( QKeyEvent * event );
    void write_log(QString object);
    //void write_xl();

    QString ip,port;
    ping *myping;
private slots:
    void joystick(bool val);
    void button_val(int a, bool val);
    void axis_val(int a, int b);
    void direction(QString dir);

private slots:
    void on_pushButton_connect_disconnect_toggled(bool checked);

    void on_pushButton_drive_clicked();

    //void on_pushButton_view_clicked();

    //void on_pushButton_trip_log_clicked();

    void on_pushButton_robo_log_clicked();

    void on_settings_clicked();

    void on_login_clicked();

    void on_pushButton_ok_clicked();

    void on_pushButton_ok_2_clicked();

    //void on_pushButton_clicked();

    void onReadyRead();

    void on_up_pressed();

    void on_up_released();

    void on_down_pressed();

    void on_down_released();

    void on_left_pressed();

    void on_left_released();

    void on_right_pressed();

    void on_right_released();


    void on_radioButton_slow_clicked();
    
    void on_radioButton_medium_clicked();
    
    void on_radioButton_high_clicked();
    

    void ip_detected(int a);

    void on_pushButton_refresh_clicked();

    void on_exit_clicked();

    void on_pushButton_2_clicked();

    //void on_pushButton_add_user_clicked();

    void connection();

//    void on_pushButton_ceiling_toggled(bool checked);

//    void on_pushButton_left_toggled(bool checked);

//    void on_pushButton_right_toggled(bool checked);

//    void on_pushButton_side_toggled(bool checked);

//    void on_pushButton_floor_toggled(bool checked);

//    void on_pushButton_wing_up_pressed();

//    void on_pushButton_wing_up_released();

//    void on_pushButton_wing_down_pressed();

//    void on_pushButton_wing_down_released();


    void on_pushButton_auto_forward_pressed();

    void on_pushButton_auto_forward_released();

    void on_pushButton_stop_pressed();

    void on_pushButton_stop_released();

    void on_pushButton_auto_reverse_pressed();

    void on_pushButton_auto_reverse_released();

    //void on_airport_name_editingFinished();

    //void on_gate_no_editingFinished();

    //void on_aircraft_no_editingFinished();

    //void on_person_editingFinished();


    void on_login_2_clicked();

    void on_pushButton_ok_3_clicked();

    //void on_excel_log_file_name_editingFinished();

    //void on_file_path_editingFinished();

    void on_pushButton_on_clicked();


    void on_pushButton_off_pressed();

    void on_pushButton_off_released();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player1,*player2;
    QVideoWidget *vw1,*vw2;
    QHBoxLayout *layout1,*layout2;
    QList<QString> user,password;
    QString user_id,user_pass;
    bool logged=false;
    bool top_limit=false,bottom_limit=false;
    QTcpSocket *socket;
    QSslSocket *socket1;
    QTcpServer *server;

    QString cam1_ip,cam2_ip,url;

    QString m_path;
    QString m_filename;
    QSettings * settings, *user_set;
    QByteArray datas;
    QTimer *timer_ip = new QTimer(this);
    QTimer *timer= new QTimer(this);
    QString green,grey,red,blue,grey_1,blue_1,orange;

    QString airport,aircraft_no,gate_no,person;

    QVariantMap feed;
    QDataStream stream;
    QMap<QString, QString> map;
    QByteArray msg;

    Thread *myThread;

    QString started_on, completed_on, date;
    int row=8,column=1;
    QString data,file;
    QString excel_file_name, path;

    bool axis_0=false,axis_1=false;
//    QFileSystemModel *model;
//    QTreeView *tree;

};
#endif // MAINWINDOW_H
