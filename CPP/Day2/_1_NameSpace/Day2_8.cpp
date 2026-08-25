// nested namespace

#include<stdio.h>
namespace na{
    int num1=10;

    namespace nb{
        int num2=20;
    }
}

int main(){
    
    printf("num1 = %d",na::num1);  // 10
    printf("\nnum2 = %d",na::nb::num2);  // 20

    return 0;

}

/*

Nested namespace = namespace inside another namespace.

Normal namespace:
na::num1

Nested namespace:
na::nb::num2

*/