#include<stdio.h>

int num=10;
int main(){
    int num=20;
    printf("num : %d",num);  // 20
    printf("\nnum : %d",num);  // 20
    return 0;
}

/*
 Local variable gets priority over global variable when both have the same name in the same scope.
*/

/*

num : 20
num : 20
*/