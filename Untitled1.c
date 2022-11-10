#include <stdio.h>
main()
 {
 float velocity,acceleration,deceleration,time;
 printf("Enter the velocity:\n");
 scanf("%f",&velocity);
 printf("Enter the time:\n");
 scanf("%f",&time);
 acceleration = velocity/time;
 deceleration = -(velocity/time);
 if (acceleration>0) {
 printf("The acceleration is %f", acceleration);
 }
 else if (acceleration<0){
 printf("The deceleration is %f",deceleration);
 }
 return 0;
}



