/*

#include <stdio.h>
#include <kipr/wombat.h>
#include "destroyer_library.h"



int main()
{  
    printf("THE DESTROYER\n");
    printf("Hello, World!\n");
    printf("i am the DESTROYER 12 (final version). \n");
    printf("Saturday, April 16 \n");

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
//==================================================================  
    set_servo_position(CLAW, CLAW_OPEN);
	msleep(DELAY);
    set_servo_position(ARM, ARM_DOWN);
    msleep(DELAY);

   	forward(900,2000); //PUSH THE POMS AWAY
    set_servo_position(CLAW, CLAW_CLOSED);
    msleep(DELAY);
    backward(900,2000);//back up
    set_servo_position(CLAW, CLAW_OPEN);
    msleep(DELAY);
    right(900,350);
    drive_to_black(LINE, 900);
    set_servo_position(CLAW, CLAW_CLOSED);
    msleep(DELAY);
    set_servo_position(ARM, ARM_BACK);
    forward(900,2400);
    right(900,700);
    backward(800, 2300); // HIT PIPE BEFORE GOING DOWN THE LINE
    set_servo_position(ARM, ARM_DOWN);
    msleep(DELAY);
    set_servo_position(CLAW, CLAW_OPEN);
    msleep(DELAY);
	forward(900, 500);
    right(900,170);
    drive_to_black(LINE, 1000);
    

    line_follow(1000);

    set_servo_position(CLAW, CLAW_ALMOSTOPEN);
    msleep(DELAY);
    set_servo_position(CLAW, CLAW_OPEN);
    msleep(DELAY);
    
//==================================================================
//						DROP POMS
//==================================================================   
    forward(1100,4950); // FORWARD TO TRANSPORTER!!!
    right(400,100);//SLIGHT TURN
    //set_servo_position(CLAW, CLAW_CLOSED); // GRAB POMS!!!
    move_servo_slowly(CLAW, CLAW_CLOSED, 10);
    msleep(DELAY);
    backward(400,500);
    set_servo_position(ARM, ARM_PIPE);
    msleep(DELAY);
    forward(1000,2400); // OVER TRABSPORTER FOT FIRST DUMP
    set_servo_position(CLAW, CLAW_OPEN); // SCORE POMS!!!!
    msleep(DELAY);
    backward(900,1900); //go back to get out from tranbsporter
    left(500,100);
    set_servo_position(ARM, ARM_DOWN);
    msleep(DELAY);
    set_servo_position(CLAW, CLAW_CLOSED); //Grab Extra Poms
    msleep(DELAY);
    set_servo_position(ARM, ARM_PIPE);
    msleep(DELAY);
    forward(1000,2000); //over transporter for second dump
    set_servo_position(CLAW, CLAW_OPEN); //Dump Dum Poms #2
    //====================================================================================
    //                                   now get cubes
    //====================================================================================
    backward(500,250);
    left(500,1275); //turn to first red pom
    set_servo_position(ARM, ARM_PIPE+25);
    forward(900,1375);
    set_servo_position(CLAW, CLAW_CLOSED);
    msleep(DELAY);
    back_to_black(LINE,900);
    set_servo_position(ARM, ARM_SUSAN);
    right(900,1800);
    forward(900,2850);
    move_servo_slowly(CLAW, CLAW_OPEN, 50);   
	left(100,50);
    
    // RED CUBE DELIVERED! //
    move_servo_slowly(ARM, 0, 10);
    set_servo_position(CLAW, CLAW_CLOSED);
//===========================================================
//                 Lazy Susan Adjustment
//===========================================================
    
    //===== now to lazy susan =====
    back_to_black(LINE, 800);
    move_servo_slowly(ARM, ARM_CARRY-25, 5); // ADJUST TO GO UNDER LAZY SUSAN
    msleep(500);
    right(500,150);
    forward(900, 2500); 
    left(500,100);//old 200
    forward(500,1800);//PUSH UNDE#R LAZY SUSAN
    left(500,300);
  
    
  
    backward(900,900);// get off of lazy susan
    right(800,2750);// 
    backward(1000,1600);

    drive_to_black(LINE, 900);
    
    move_servo_slowly(ARM, ARM_PIPE, 30);
    //set_servo_position(ARM, ARM_PIPE);
    set_servo_position(CLAW, CLAW_HALF_OPEN);
    forward(900,1800);
    set_servo_position(CLAW, CLAW_CLOSED);
    back_to_black(LINE, 1000);
    
    //===== grabbed first green cube====
    //===== DELIVER THE PACKAGE=======
    set_servo_position(ARM, ARM_SUSAN);
    backward(1000,2500);
    right(800,1000); // turn lazy susan
    forward(800,150);
    right(400,800); //turn lazy susan
    left(400,800);
    forward(900,1500);
    left(900,900); // turn to trabnsporter
    forward(1100,3500); // push transporter
    back_to_black(LINE,900);
    right(800,2100);
    forward(800,1300); //Move towards LS to dump green cube

	set_servo_position(ARM, ARM_SUSAN+100);
    msleep(DELAY);
    //set_servo_position(CLAW, CLAW_OPEN); // DROP FIRST GREEN CUBE
    left(300, 150);//TURN!
	move_servo_slowly(CLAW, CLAW_OPEN, 20);
	msleep(DELAY);
	set_servo_position(ARM, ARM_BACK);
	right(300,150);//UNTURN!


   
    
    //====== 2 cubes delivered! (1red,1green)
    //======THE ENDGAME HAS BEGUN====
    //======GET LAST CUBE============
    backward(900,600);
    right(900,1200);
    backward(900,1000); //hit pipe!!
    forward(900,4500);
    //TURN TO LAST CUBE
    right(1000,850);  // TURN TO LAST CUBE
    set_servo_position(ARM, ARM_PIPE);
    forward(1000, 2222);  // GO TO LAST CUBE
    set_servo_position(CLAW, CLAW_CLOSED);  //  WE HAVE THE LAST CUBE
    
    msleep(DELAY);
    back_to_black(LINE,900);
    set_servo_position(ARM, ARM_SUSAN);
    right(1200, 1200);
    forward(1200, 3000);
    right(1200, 650);
    forward(1200, 1800); 
    set_servo_position(CLAW, CLAW_HALF_OPEN); // we need to delete this
    msleep(1000);

    return 0;

}

*/