#include <stdio.h>
int main() {   //main function
    int arr[5] = {10, 20, 30, 40, 50};
    int (*ptr)[5] = &arr;  
    printf("1th element: %d\n", (*ptr)[0]);
    printf("2th element: %d\n", (*ptr)[1]);
    printf("3th element: %d\n", (*ptr)[2]);
    printf("4th element: %d\n", (*ptr)[3]);
    printf("5th element: %d\n", (*ptr)[4]);

}