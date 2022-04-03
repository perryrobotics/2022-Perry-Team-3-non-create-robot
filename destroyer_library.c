#include <stdio.h>
#include <kipr/wombat.h>
#include "destroyer_library.h"



void forward(int speed, int ticks)
{
// clear motor position counter
  cmpc(LM);
  cmpc(RM);
  
// move at velocity
  mav(LM,speed);
  mav(RM,speed);
  
//get motor position counter
  while( gmpc(LM) < ticks )
  {
  }
//stop motors
  mav(LM,0);
  mav(RM,0);

  cmpc(LM);
  cmpc(RM);
}

void backward(int speed, int ticks)
{
  cmpc(LM);
  cmpc(RM);

  mav(LM,-speed);
  mav(RM,-speed);
  
  while( gmpc(LM) > -ticks )
  {
  }
  
  mav(LM,0);
  mav(RM,0);

  cmpc(LM);
  cmpc(RM);
}

void right(int speed, int ticks)
{
  cmpc(LM);
  cmpc(RM);

  mav(LM,speed);
  mav(RM,-speed);
  
  while( gmpc(LM) < ticks )
  {
  }
  
  mav(LM,0);
  mav(RM,0);

  cmpc(LM);
  cmpc(RM);
}

void left(int speed, int ticks)
{
  cmpc(LM);
  cmpc(RM);

  mav(LM,-speed);
  mav(RM,speed);
  
  while( gmpc(LM) > -ticks )
  {
  }
  
  mav(LM,0);
  mav(RM,0);

  cmpc(LM);
  cmpc(RM);
}


void move_servo_slowly(int port, int end_pos, int speed)
{
    
    printf("IM MOVING MY SERVOS AND STUFF!!!");
    int current_pos;
    current_pos=get_servo_position(port);
    printf("%d     %d", current_pos, end_pos);
    
    if (current_pos < end_pos)
    {
        while (current_pos < end_pos)
            {
                current_pos += 20;
            	if (current_pos > 2045)
                {
                    current_pos = 2045;
                }
                set_servo_position(port, current_pos);
                msleep(speed); //in milliseconds
            }
     }
     else if (current_pos > end_pos)
     {
		printf("Im counting backwards!!!");
        while(current_pos > end_pos)
        {
            current_pos -= 20;
            if (current_pos < 0)
            {
                current_pos=0;
                break;
            }
            set_servo_position(port, current_pos);
            msleep(speed); //in milliseconds
        }
     }
    
	//set_servo_position(port, end_pos); 
}

void drive_to_black(int port, int speed)
{
    mav(LM,speed);
    mav(RM,speed);
    while (analog(port) <BLACK_THRESH)
    {
    }
    mav(LM,0);
    mav(RM,0);
}
void back_to_black(int port, int speed)
{
    mav(LM,-speed);
    mav(RM,-speed);
    while (analog(port) <BLACK_THRESH)
    {
    }
    mav(LM,0);
    mav(RM,0);
}


void line_follow(int speed)
{

    while (avg_analog(LINE_L,5) < BLACK_THRESH_L)
    {

        if (analog(LINE) > BLACK_THRESH)
        {
			mav(LM,speed-200);
        	mav(RM,speed+300);
        }
        else
        {
			mav(LM,speed+300);
			mav(RM,speed-200);
        }
    } //END WHILE
    
    mav(LM, 0);
    mav(RM,0);

}


int avg_analog(int port, int num_readings)
{
	int total;
    int i;
    
    for(i = 0; i<num_readings;i++)
    {
        total = total+analog(port);
    }
    
    total = (int)(total/num_readings);
    return total;
}


