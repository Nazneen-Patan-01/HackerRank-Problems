#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num;
    scanf("%d",&num);
    
    
    if (num <= 0) {
        printf("The verdict for the number %d is: INVALID\n", num);
        return 0;
    } 
    if ((num%2==0 && num>10) && (num%3==0 && num>15) && (num%7==0))
    {
      printf("The verdict for the number %d is: SUPERNATURAL\n",num);
    }
    
    else if ( ((num%2==0 && num>10) &&  (num%7==0)) || ((num%2==0 && num>10) && (num%3==0 && num>15)) || ((num%3==0 &&            num>15) && (num%7==0)) ) 
    {
        printf("The verdict for the number %d is: MIRACULOUS\n",num);
    } 
    else if ( (num%2==0 && num>10) || (num%7==0)|| (num%3==0 && num>15) )
    {
          printf("The verdict for the number %d is: MAGICAL\n",num);
    }

    else
    {
        printf("The verdict for the number %d is: NORMAL\n",num);
    }
    return 0;
}
