#include <stdio.h>

int main() {
        int units;
    float bill ;
    scanf("%d",&units);
    
       if(units<0)
        {
         printf("Invalid Input!\n"); 
           return 0;
        }
    
    
       if(units<=100)
        {
          bill=units*5;
        }
        else if(units<=300)
        {
          bill= (100*5)+((units-100)*7); 
        }
        else
        {
          bill=(100*5)+(200*7)+((units-300)*10); 
        }
        if(bill<=1200)
        {
          bill= bill*0.90; 
        }   
        
        
     printf("The electricity bill is: %.2f.\n",bill);   
      
 
      return 0;         
      
   }
