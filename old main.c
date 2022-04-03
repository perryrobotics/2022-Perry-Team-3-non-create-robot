/*

#include <stdio.h>
#include <kipr/wombat.h>
#include "destroyer_library.h"



int main()
{
    int punch_cubes = 1;
    
    printf("THE DESTROYER\n");
    printf("Hello, World!\n");
	printf("i am the DESTROYER 11. \n");
	printf("(v11.1) Saturday, March 6, 2022 \n");
    printf("Press:\nA - PUNCH CUBES\nC - DONT PUNCH CUBES!!!\n");
        
	while (a_button() == 0 && c_button() == 0)
    {
    }
    
    if (c_button() ==1)
    {
        punch_cubes = 0;
    }
    
    if(punch_cubes == 1)
    {
        printf("IM PUNCHING CUBES!!!\n");
    }
    else
    {
        printf("NOT PUNCHING CUBES!!!\n");
    }
    msleep(3000);
    
    
    // GET INTO START POSITION
    enable_servos();
    set_servo_position(CLAW, CLAW_CLOSED+60);
	set_servo_position(ARM, ARM_BACK);

    while (!a_button())
    {}
    
    printf("WORLD DOMINATION IS IN THE NEAR FUTURE! \n");
    msleep(1500);
	left(300,150);
	set_servo_position(ARM, ARM_DOWN);
    //set_servo_position(CLAW, CLAW_OPEN);
    msleep(2000);
 
    right(250,750); //PUSH THE POMS AWAY
    left(350,450); //COME BACK TO START
    set_servo_position(ARM, ARM_PIPE);
    //right(900,200);
    
    if (punch_cubes == 0)
    {
        set_servo_position(ARM, ARM_BACK);
    }
    
    forward(1500,4500); // GO PUSH FIRST CUBE
    backward(900,1500);
    right(900,200);
    forward(900,1250); // The second cube now falls off the pipe
	backward(900,900);
    right(900,140);// um, sure?! just the usual...
    forward(1500,2000);// going for the THIRD CUBE!
    backward(900,2000);
    right(900,550);
    set_servo_position(ARM, ARM_BACK);
    backward(300,1400);//align on pipe
    forward(1000,750);
    right(1000,1150);
    backward(1000,1200);
    set_servo_position(ARM, ARM_DOWN);
    msleep(1000);
    left(300,750); //sweep poms into position
    set_servo_position(ARM, ARM_CARRY);
    msleep(1000); // the ultimate destroyer strength here 
    left(300,100);// destroying the poms
    set_servo_position(CLAW, CLAW_OPEN);
    msleep(1000);
	set_servo_position(ARM, ARM_DOWN);
    msleep(1000);
//    right(400,130);
    drive_to_black(LINE, 900);
	//msleep(3000);
    line_follow(700);
    //drive_to_black(LINE_L,300);
	//msleep(3000);
	
    //forward(1100,5000);//rage comes upon this bot
    //forward(1100,5000);//more rage continued

    
    set_servo_position(CLAW, CLAW_ALMOSTOPEN);
    msleep(1000);
    //left(400,100);
    set_servo_position(CLAW, CLAW_OPEN);
    msleep(1000);
    forward(1100,4950); // FORWARD TO TRANSPORTER!!!
    right(400,100);//SLIGHT TURN
    //set_servo_position(CLAW, CLAW_CLOSED); // GRAB POMS!!!
	move_servo_slowly(CLAW, CLAW_CLOSED, 30);
    msleep(1000);
	backward(400,500);
    set_servo_position(ARM, ARM_PIPE);
    msleep(1500);
    forward(400,2400); // OVER TRABSPORTER FOT FIRST DUMP
    set_servo_position(CLAW, CLAW_OPEN); // SCORE POMS!!!!
    msleep(500);
    backward(400,1700); //go back to get out from tranbsporter
    set_servo_position(ARM, ARM_DOWN);
    msleep(500);
	//forward(300,50); //go forward a bit 
	set_servo_position(CLAW, CLAW_CLOSED); //Grab Extra Poms
    msleep(1000);
	set_servo_position(ARM, ARM_CARRY);
    msleep(1000);
    forward(400,1900); //over transporter for second dump
    set_servo_position(CLAW, CLAW_OPEN); //Dump Dum Poms
    //====================================================================================
    //                                   now get cubes
    backward(500,250);
    msleep(500);
    left(500,1275);
    set_servo_position(ARM, ARM_PIPE);
    forward(900,1375);
    set_servo_position(CLAW, CLAW_CLOSED);
    msleep(1500);
    back_to_black(LINE,900);
    set_servo_position(ARM, ARM_SUSAN);
    right(900,1900);
    forward(900,2150);
	move_servo_slowly(CLAW, CLAW_OPEN, 60);
    
    // GET TO OTHER SIDE
    backward(900,200);
	right(900,450);
    forward(1300,5000);
	backward(900, 500);
    right(900, 1150); // TURN TO FACE OTHER SIDE OF BOARD
	drive_to_black(LINE, 900);
    
    left(900, 100); //turn to ring stand
    move_servo_slowly(ARM, 1800,50);
    forward(900, 2000);
    
    //close around rings
    move_servo_slowly(CLAW, 250, 50);
    move_servo_slowly(ARM, ARM_SUSAN, 50);
    printf("SUCCESS \n");
    
    return 0;

}

*/