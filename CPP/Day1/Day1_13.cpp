#include<stdio.h>
int main(){

    const int num=10;
    const int num2=20;

    const int *ptr = &num; // value constant 

    printf("\nnum : %d",num);  // 10
    printf("\n*ptr : %d",*ptr);  // 10

    // num=20;
    // *ptr= 30;
    
    ptr=&num2;

    printf("\nnum : %d",num2);  // 20
    printf("\n*ptr :%d",*ptr);   // 20

}

// Pointer can change, pointed value cannot be changed through the pointer. 

/*

num : 10
*ptr : 10
num : 20
*ptr :20

*/