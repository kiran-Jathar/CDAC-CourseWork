#include<stdio.h>
int main()
{
    int num = 10; 
    int num2 = 30; 

    int * const ptr = &num; // address const

    printf("num : %d\n",num); //10

    printf("*ptr : %d\n",*ptr); // 10 

    num = 20;  

    printf("num : %d\n",num); //20 
    printf("*ptr : %d\n",*ptr); // 20 

    //ptr = &num2; // NOT OK ( pointer is constant)
    return 0;
}

// Pointer cannot move, but the value it points to can be modified.

/*

num : 10
*ptr : 10
num : 20
*ptr : 20

*/