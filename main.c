#include <stdio.h>
#include <kipr/wombat.h>
#include "destroyer_library.h"



int main()
{  
    printf("THE DESTROYER\n");
    printf("Hello, World!\n");
    printf("i am the DESTROYER 12 (final version). \n");
    printf("Saturday, April 23 \n");

//==================================================================
//						START AND SETUP PORTION//
//==================================================================
                    
    // GET INTO START POSITION
    enable_servos();
    set_servo_position(CLAW, CLAW_CLOSED+60);
    set_servo_position(ARM, ARM_BACK);
    
	printf("Press (A) to start");
    while (!a_button())
    {}

    printf(" 'WORLD DOMINATION IS IN THE NEAR FUTURE!' - botguy \n");
    msleep(1500);
    
   // wait_for_light(START_SENSOR);
    shut_down_in(120);
//==================================================================
//						BEGIN GAME HERE
//                 3-2-1-GOOOOOOOOOOOOOOOOOO!!!
//==================================================================  
    set_servo_position(CLAW, CLAW_OPEN);
	msleep(DELAY);
    set_servo_position(ARM, ARM_DOWN);
    msleep(DELAY);

   	forward(900,2000); //PUSH THE POMS AWAY
    //set_servo_position(CLAW, CLAW_CLOSED);
    move_servo_slowly(CLAW, CLAW_CLOSED, 30);
    msleep(DELAY);
    backward(900,2000);//back up
    set_servo_position(CLAW, CLAW_OPEN);
    msleep(DELAY);
    right(900,350);
    drive_to_black(LINE, 900);
    //set_servo_position(CLAW, CLAW_CLOSED);
    move_servo_slowly(CLAW, CLAW_CLOSED, 30);
    msleep(DELAY);
    set_servo_position(ARM, ARM_BACK);
    forward(900,2400);
    right(900,700);
    backward(800, 2700); // HIT PIPE BEFORE GOING DOWN THE LINE
	move_servo_slowly(ARM, ARM_DOWN, 40);
    //set_servo_position(ARM, ARM_DOWN);
    msleep(DELAY);
    set_servo_position(CLAW, CLAW_OPEN);
    msleep(DELAY);
	forward(900, 500);
    right(900,170);
    drive_to_black(LINE, 1000);
    
	//msleep(5000);
    line_follow(1000);  // LINE FOLLOW TO CENTER BLACK TAPE
	//msleep(5000);
    set_servo_position(CLAW, CLAW_ALMOSTOPEN);
    msleep(DELAY);
    set_servo_position(CLAW, CLAW_OPEN);
    msleep(DELAY);
    forward(900,500); // get past the black tape 
    
//==================================================================
//						DROP POMS
//==================================================================   
    line_follow_ticks(900, 4650);  // LINE FOLOW INTO TRANSPORTER
    move_servo_slowly(CLAW, CLAW_CLOSED, 10); // close around poms
    msleep(DELAY);
    backward(400,500);
    set_servo_position(ARM, ARM_PIPE);
    msleep(DELAY);
    forward(1000,2400); // OVER TRABSPORTER FOT FIRST DUMP
    msleep(500);
	move_servo_slowly(CLAW, CLAW_HALF_OPEN,35);
    msleep(DELAY);
    
    // GO FOR SECOND GRAB!!!
    //backward(900,1900); //go back to get out from tranbsporter
    //set_servo_position(ARM, ARM_DOWN);
    //msleep(DELAY);
    //set_servo_position(CLAW, CLAW_CLOSED); //Grab Extra Poms
    //msleep(DELAY);
    //set_servo_position(ARM, ARM_PIPE);
    //msleep(DELAY);
    //forward(1000,1900); //over transporter for second dump
	move_servo_slowly(CLAW, CLAW_HALF_OPEN,35); // open for second dump
    //====================================================================================
    //                                   now get cubes - FIRST RED CUBE
    //====================================================================================
    backward(500,250);
    left(500,1125); //turn to first red cube
    set_servo_position(ARM, ARM_PIPE+25);
    forward(900,1000);  // GO TOWARD FIRST RED cube
    set_servo_position(CLAW, CLAW_CLOSED);
    msleep(DELAY);
    back_to_black(LINE,900);
    set_servo_position(ARM, ARM_SUSAN);
    right(900,1750);
    forward(900,3070);  // go towards lazy susan with 1st red cube
    move_servo_slowly(CLAW, CLAW_OPEN, 50);   
	left(100,50);
    
    // RED CUBE DELIVERED! //
    move_servo_slowly(ARM, 0, 10);
    set_servo_position(CLAW, CLAW_CLOSED);
//===========================================================
//                 RED CUBE DELIVERED - GET FIRST GREEN CUBE!!
//===========================================================
    
    back_to_black(LINE, 800);
    right(800,2675);  // TURN TO FIRST GREEN CUBE
    set_servo_position(CLAW, CLAW_OPEN);
    msleep(DELAY);
    set_servo_position(ARM, ARM_PIPE+20);
    msleep(DELAY);
    forward(800,1250);
    set_servo_position(CLAW, CLAW_CLOSED);
    msleep(750);
    back_to_black(LINE, 900);
	move_servo_slowly(ARM, ARM_CARRY, 20);
    right(800, 1400); // turn to be over right side of trasporter
    forward(900, 500);
	move_servo_slowly(ARM, ARM_PIPE, 20);
	move_servo_slowly(CLAW, CLAW_OPEN, 50);
	move_servo_slowly(ARM, ARM_CARRY, 40);
    backward(900, 500);    
    

//=====================================================
//       Delivered FIRST GREEN - GET GREEN SECOND CUBE 
//=====================================================
    
    msleep(750);
    left(800, 900);//turn to second green cube
	move_servo_slowly(ARM, ARM_PIPE+25, 20);
    forward(800, 1900);
    set_servo_position(CLAW, CLAW_CLOSED);
	msleep(1000);
	
	backward(800,1600);
	move_servo_slowly(ARM, ARM_CARRY, 20);
    right(800, 1000);//turn to transporter
	forward(900, 1000);
	move_servo_slowly(ARM, ARM_PIPE, 20);
   	move_servo_slowly(CLAW, CLAW_OPEN, 50);
    msleep(750);
	move_servo_slowly(ARM, ARM_CARRY, 40);
	backward(900, 1000);
    
//=====================================================
//	Delivered Second GREEN Cube GET SECOND RED!!
//=====================================================
    left(900,850); // TURN TO SECOND RED CUBE
	move_servo_slowly(ARM, ARM_PIPE+25, 20);
    forward(900, 2500);
    set_servo_position(CLAW, CLAW_CLOSED);
    msleep(500);
    back_to_black(LINE, 900);
    set_servo_position(ARM, ARM_SUSAN);
    msleep(300);
    right(900,1200);  // TURN TO LAZY SUSAN
    forward(900,3700);
	move_servo_slowly(CLAW, CLAW_HALF_OPEN, 25);
//=====================================================
//	EVERYTHING DONE!! GET OUT OF THE WAY!!!
//=====================================================    
    
	back_to_black(LINE, 900); // GET OUT OF THE WAY!!!!
    backward(900,2000);

    return 0;

}
