#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int angle;
    scanf("%d",&angle);
    
    

     if (angle <90 || angle ==0) 
    {
        printf("Acute Angle");
    }
    else if(angle==90)
    {
       printf("Right Angle");   
    }
    else if (angle >90 && angle < 180) 
    {
        printf("Obtuse Angle");
    }
    else if(angle==180)
    {
        printf("Straight Angle");
    }
    else if(angle > 180 && angle < 360)
    {
        printf("Reflex Angle");
    }
    else if (angle==360)
    {
        printf("Full Rotation");
    }
    else{
       if(angle % 360 ==0){
           printf("Full Rotation");
       }
        else if(angle%360 < 90){
             printf("Acute Angle");
        }
        
         else if(angle% 360 == 90){
             printf("Right Angle");
        }
            else if(angle% 360> 90 && angle%360 < 180){
             printf("Obtuse Angle");
        }
        else if(angle % 360 ==180)
    {
        printf("Straight Angle");
    }
        
     else if(angle % 360 > 180 && angle % 360 < 360){
         
        printf("Reflex Angle");
    }
            else if (angle % 360 ==180)
    {
        printf("Full Rotation");
    }       

                

            
      }
    
   
    return 0;
}
