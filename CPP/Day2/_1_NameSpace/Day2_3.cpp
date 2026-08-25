#include<stdio.h>
int num1=10;
int main(){
    int num1=20;
    printf("num1 : %d\n",num1);  // 20    local
    printf("num2 : %d\n",::num1);  // 10    it access global variable

    return 0;
}


/*

Local variable hides global variable; :: accesses the global variable.

*/