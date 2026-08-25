#include<stdio.h>

namespace na{
    int num1=10;  // namespacce scope
}
int main(){
    printf("num : %d",na::num1);
    return 0;
}

// num : 10

/*

Namespace = container/group for names.
:: = access something inside that namespace.

*/

