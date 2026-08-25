#include<stdio.h>

int main(){
    int num=10;
    int *ptr=&num;

    printf("num  : %d",num);  //10
    printf("\n*ptr : %d",*ptr);  //10

    num=20;

    printf("\nnum : %d",num);  // 20
    printf("\n*ptr : %d",*ptr);   // 30

    *ptr=30;
    printf("\nnum : %d",num);   // 30
    printf("\n*ptr : %d",*ptr);  // 30
    return 0;
}

/*

num  : 10
*ptr : 10

num : 20
*ptr : 20

num : 30
*ptr : 30

*/
