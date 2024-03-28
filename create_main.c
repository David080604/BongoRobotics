#include <kipr/wombat.h>


int rockSequence(){
    //drive forward to kick astronaut
    create3_drive_straight(0.42,0.50);
    create3_rotate_degrees(35,120);
    
    //drive back a bit and twist
    create3_drive_straight(0.30,0.50);
    create3_drive_straight(-0.30,0.50);
    create3_rotate_degrees(-35,120);
    create3_drive_straight(0.4,0.5);
    
	//kick other astro and kick first stone
    create3_drive_straight(-0.2,0.5);
    create3_rotate_degrees(25,120);
    
    // drive and kick stone one and two, collect first 3 stones
    create3_drive_straight(0.4,0.5);
    create3_drive_straight(-0.2,0.5);
    create3_rotate_degrees(25,120);
    create3_drive_straight(0.3,0.5);
    create3_rotate_degrees(-70,120);
    create3_drive_straight(0.4,0.5);
    
    // pick up three stones
    create3_rotate_degrees(60,120);
    create3_drive_straight(-0.1,0.5);
    create3_rotate_degrees(-35,120);
    create3_drive_straight(0.20,0.5);
    
    // pick up four stones
    create3_rotate_degrees(45,120);
    create3_drive_straight(0.65,0.5);
    create3_drive_straight(-0.4,0.5);
    
    create3_wait();
    return 0;

}

int pomSequence(){
    create3_rotate_degrees(95,120);
    create3_drive_straight(0.4,0.1);
    create3_rotate_degrees(-60,120);
    create3_wait();
	return 0;
}

int noodleSequence(){
	create3_drive_straight(-0.3,0.1);
    create3_rotate_degrees(90,120);
    create3_drive_straight(0.28,0.1);
    create3_rotate_degrees(90,120);
     while(create3_sensor_bump(2) != 1){
        
        create3_drive_straight(0.01,0.1);
       	
        printf("%d\n",create3_sensor_bump(1));
        
       
       
        create3_wait();
        
    }
   
    create3_wait();
    return 0;
}


int main()
{
    printf("Hello World\n");
    //connect 
    create3_connect();
    create3_wait();
    
    //wait for light
    //shutdown in 119

    //drive
   	rockSequence();
    
    //pomSequence
   	pomSequence();
    
    //noodleSequence
    noodleSequence();
    
    
   
    
  
    return 0;
}

