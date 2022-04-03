#include <stdio.h>
#include <kipr/wombat.h>


#define LM 3
#define RM 0
#define ET 0
#define LINE 1
#define LINE_L 5
#define BLACK_THRESH 2700 
#define BLACK_THRESH_L 3700
#define CLAW_LENGTH 1000
#define ARM 2
#define ARM_BACK 150
#define ARM_DOWN 1900
#define ARM_PIPE 1800
#define ARM_CARRY 1500
#define ARM_SUSAN 1200

#define DELAY 450

#define CLAW 0
#define CLAW_OPEN 1150
#define CLAW_HALF_OPEN 500
#define CLAW_CLOSED 0
#define CLAW_ALMOSTOPEN 750

void forward(int speed, int ticks);
void backward(int speed, int ticks);
void right(int speed, int ticks);
void left(int speed, int ticks);
void move_servo_slowly(int port, int end_pos, int speed);
void drive_to_black(int port, int speed);
void back_to_black(int port, int speed);
void line_follow(int speed);
int avg_analog(int port, int num_readings);

