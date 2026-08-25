#include<stdio.h>

namespace na{
    int num1=10;
    int num2=20;
} 

namespace nb{
    int num3=30;
    int num2=40;
}

int main(){
    printf("num1 : %d\n",na::num1);  // 10
    printf("num1 : %d\n",na::num2);  // 20
    printf("num1 : %d\n",nb::num3);  // 30
    printf("num1 : %d\n",nb::num2);  // 40
}

/*

Namespace creates a separate scope for names, so the same variable name can exist in different namespaces without conflict.

🎯 Remember
na::num2   // 20
nb::num2   // 40

*/