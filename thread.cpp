#include "thread.h"
#include <QtCore>
#include <QDebug>
#include "SDL2/SDL.h"

#define SDL_main_h_


Thread::Thread(QObject *parent):QThread(parent)
{

}

void Thread::run()
{
    SDL_Joystick *joy;

    SDL_InitSubSystem(SDL_INIT_JOYSTICK);

    if (SDL_NumJoysticks() > 0)
    {
        joy = SDL_JoystickOpen(0);
        if (joy)
        {
            qDebug()<< ("Opened Joystick \n")<<SDL_NumJoysticks();
            qDebug()<<("Name			: \n")<<SDL_JoystickNameForIndex(0);
            qDebug()<<("Number of Axes		: \n")<<SDL_JoystickNumAxes(joy);
            qDebug()<<("Number of Buttons	: \n")<<SDL_JoystickNumButtons(joy);
        }
        else
        {
            qDebug()<<("Couldn't open Joystick 0\n");
        }

        int quit = 0;
        SDL_Event event;

        while(!quit && SDL_WaitEvent(&event))
        {
            switch(event.type)
            {
                case SDL_JOYAXISMOTION:
                {
                    signed int sample = event.jaxis.value;
                    unsigned char axis = event.jaxis.axis;
                    //qDebug()<<("SDL_JOYAXISMOTION: joystick:")<< event.jaxis.which <<("axis:")<<axis <<("value:")<< sample;

                    //emit axis_val(axis,sample);

                }
                    break;

                case SDL_JOYBUTTONDOWN:
                   //qDebug()<< ("SDL_JOYBUTTONDOWN: joystick:")<<event.jbutton.which<< ("button:")<<event.jbutton.button<< ("state:")<<event.jbutton.state;

                   emit button_val(event.jbutton.button,event.jbutton.state);
                    break;

                case SDL_JOYBUTTONUP:
                    //qDebug()<<("SDL_JOYBUTTONUP: joystick:")<< event.jbutton.which<< ("button:")<<event.jbutton.button<< ("state:")<<event.jbutton.state;
                    emit button_val(event.jbutton.button,event.jbutton.state);
                    break;

                 case SDL_JOYHATMOTION:
                 qDebug()<<("SDL_JOYHATMOTION: joystick:")<< event.jhat.which<< ("value:")<<event.jhat.value<< ("type:")<<event.jhat.type;
                     if(event.jhat.value & SDL_HAT_UP)
                     {direction("up");}

                     if(event.jhat.value & SDL_HAT_LEFT)
                     {direction("left");}

                     if(event.jhat.value & SDL_HAT_RIGHT)
                     {direction("right");}

                     if(event.jhat.value & SDL_HAT_DOWN)
                     {direction("down");}

                     if(!event.jhat.value)
                     {direction("rel");}

                     break;

                case SDL_QUIT:
                    quit = 1;
                    qDebug()<<("Recieved interrupt, exiting\n");
                    break;

                default:
                    qDebug()<<stderr<< ("Error: Unhandled event type: %d\n")<< event.type;
                    break;
            }

        }
        SDL_JoystickClose(joy);
    }

}
