#include <kipr/botball.h>

int main()
{
    enable_servos();
    cmpc(0);
    set_servo_position(0,280);
    set_servo_position(2,1600);
    msleep(1000);
    set_servo_position(0,1360);
    msleep(1000);
    set_servo_position(2,1200);
    msleep(1000);
    set_servo_position(0,1300);
    while (1)
    {
        if (gmpc(0)<6688)
        {
            motor(0,75);
            motor(2,60);
        }
        else
        {
            break;
        }
    }
    set_servo_position(2,1500);
    
    return 0;
}
