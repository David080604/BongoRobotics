#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    //connect 
    create3_connect();
    create3_wait();
    
    //wait for light
    //shutdown in 119

    //drive
    
    //drive forward to kick astronaut
    create3_drive_straight(0.42,0.50);
    create3_rotate_degrees(35,120);
    //drive back a bit and twist
    create3_drive_straight(0.30,0.50);
    create3_drive_straight(-0.30,0.50);
    create3_rotate_degrees(-35,120);
    create3_drive_straight(0.4,0.5);
    create3_drive_straight(-0.2,0.5);
    create3_rotate_degrees(25,120);
    create3_drive_straight(0.4,0.5);
    create3_drive_straight(-0.2,0.5);
    create3_rotate_degrees(25,120);
    create3_drive_straight(0.3,0.5);
    create3_rotate_degrees(-70,120);
    create3_drive_straight(0.4,0.5);
    create3_rotate_degrees(55,120);
    create3_drive_straight(-0.1,0.5);
    create3_rotate_degrees(-30,120);
    create3_drive_straight(0.1,0.5);
    create3_rotate_degrees(40,120);
    create3_drive_straight(0.7,0.5);
    create3_drive_straight(-0.4,0.5);
    create3_wait();
    return 0;
}