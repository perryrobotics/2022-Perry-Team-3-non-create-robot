#include <stdio.h>
#include <kipr/wombat.h>
#include "destroyer_library.h"



int main()
{
    int punch_cubes = 1;
    
    printf("THE DESTROYER\n");
    printf("Hello, World!\n");
	printf("i am the DESTROYER 11. \n");
	printf("(v11.6/a) Thursday, March 31 \n");
    printf("Press:\nA,A - PUNCH CUBES\nC,A - DONT PUNCH CUBES!!!\n");
        
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
    
    printf(" 'WORLD DOMINATION IS IN THE NEAR FUTURE!' - botguy \n");
    msleep(1500);
	shut_down_in(120);
	left(300,150);
	set_servo_position(ARM, ARM_DOWN);
    //set_servo_position(CLAW, CLAW_OPEN);
    msleep(750);
 
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
    msleep(DELAY);
    left(300,750); //sweep poms into position
    set_servo_position(ARM, ARM_CARRY);
    msleep(DELAY); // the ultimate destroyer strength here 
    left(300,100);// destroying the poms
    set_servo_position(CLAW, CLAW_OPEN);
    msleep(DELAY);
	set_servo_position(ARM, ARM_DOWN);
    msleep(DELAY);
//    right(400,130);
    drive_to_black(LINE, 900);
	//msleep(3000);
    line_follow(1000);

    set_servo_position(CLAW, CLAW_ALMOSTOPEN);
    msleep(DELAY);
    //left(400,100);
    set_servo_position(CLAW, CLAW_OPEN);
    msleep(DELAY);
// DROP THE POMS IN TRANSPORTER======================================
    forward(1100,4950); // FORWARD TO TRANSPORTER!!!
    right(400,100);//SLIGHT TURN
    //set_servo_position(CLAW, CLAW_CLOSED); // GRAB POMS!!!
	move_servo_slowly(CLAW, CLAW_CLOSED, 20);
    msleep(DELAY);
	backward(400,500);
    set_servo_position(ARM, ARM_PIPE);
    msleep(DELAY);
    forward(1000,2400); // OVER TRABSPORTER FOT FIRST DUMP
    set_servo_position(CLAW, CLAW_OPEN); // SCORE POMS!!!!
    msleep(DELAY);
    backward(900,1850); //go back to get out from tranbsporter
    set_servo_position(ARM, ARM_DOWN);
    msleep(DELAY);
	//forward(300,50); //go forward a bit 
	set_servo_position(CLAW, CLAW_CLOSED); //Grab Extra Poms
    msleep(DELAY);
	set_servo_position(ARM, ARM_PIPE);
    msleep(DELAY);
    forward(1000,2000); //over transporter for second dump
    set_servo_position(CLAW, CLAW_OPEN); //Dump Dum Poms #2
    //====================================================================================
    //                                   now get cubes
  
    backward(500,250);
    msleep(500);
    left(500,1275);
    set_servo_position(ARM, ARM_PIPE);
    forward(900,1375);
    set_servo_position(CLAW, CLAW_CLOSED);
    msleep(DELAY);
    back_to_black(LINE,900);
    set_servo_position(ARM, ARM_SUSAN);
    right(900,1900);
    forward(900,2150);
	move_servo_slowly(CLAW, CLAW_OPEN, 20);   
    
    /* RED CUBE DELIVERED! */
    move_servo_slowly(ARM, 0, 10);
    set_servo_position(CLAW, CLAW_CLOSED);
    //===== now to lazy susan =====
    back_to_black(LINE, 800);
    move_servo_slowly(ARM, ARM_CARRY, 20);
    msleep(500);
    right(500,50);
    forward(900, 3500);
	left(500, 300);
    right(800,2900);
    backward(1000,1600);
    drive_to_black(LINE, 900);
    set_servo_position(ARM, ARM_PIPE);
    set_servo_position(CLAW, CLAW_HALF_OPEN);
    forward(900,1700);
    set_servo_position(CLAW, CLAW_CLOSED);
    back_to_black(LINE, 1000);
    //===== WE HAVE THE GREEN CUBE====
    //===== DELIVER THE PACKAGE=======
    set_servo_position(ARM, ARM_SUSAN);
    backward(1000,2500);
    right(800,1000);
    forward(900,1900);
    left(1000,1000);
    forward(1100,3500);
    back_to_black(LINE,900);
    right(800,2200);
    forward(800,200);
    set_servo_position(CLAW, CLAW_OPEN);
    msleep(DELAY);
	//======THE ENDGAME HAS BEGUN====
    //======GET LAST CUBE============
    backward(900,400);
    right(900,1100);
    backward(900,400);
    forward(900,4500);
    //TURN TO LAST CUBE
    right(1000,1000);
	set_servo_position(ARM, ARM_PIPE);
    forward(1000, 1450);
    set_servo_position(CLAW, CLAW_CLOSED);
   	msleep(500);
	back_to_black(LINE,900);
    set_servo_position(ARM, ARM_SUSAN);
    right(1000, 1200);
    forward(1000, 3000);
    right(1000, 650);
    forward(1000, 1500); 
    set_servo_position(CLAW, CLAW_HALF_OPEN);
    msleep(1000);
    printf("SUCCESS \n");
  
    
    return 0;

}