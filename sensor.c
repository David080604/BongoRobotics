#include <kipr/wombat.h>
#include <stdint.h>

int main()
{
    
	create3_connect();
    
    
   //printf("%d\n", create3_odometry_get().pose.position.y);
    //create3_pose_get();

    
    Create3Twist v = create3_odometry_get().velocity;
    printf("%f\n", v.linear_x);
     printf("%f\n", v.angular_z);
    // printf("%f\n", v.z);
    //create3_drive_straight(0.2,0.1);
    create3_wait();
   // Create3Vector3 v2 = create3_odometry_get().pose.position;
     //printf("%f\n", v2.x);
     //printf("%f\n", v2.y);
     //printf("%f\n", v2.z);
    
    return 0;
}

