#include <stdio.h>  
int main() 
{  //main function  
    int num = 42,sub=35;           
    int *ptr = &num; 
    int *fu = &sub;
    printf("Value of num using pointer: %d\n", num);
    
    *ptr = 30;  
    printf("New value of num after dereferencing: %d\n", num); 
     printf("Value of num using pointer: %d\n", sub);
    
    *fu = 25;  
    printf("New value of num after dereferencing: %d\n", sub); 


    
}  