#include<stdio.h>

namespace na{
    int num1=10;
}

namespace nb{
    int num1=20;
}

int main(){
    using namespace na;
    printf("num1 : %d",num1);

    using namespace nb;
    //printf("num1 : %d",num1);  error
}

/*

Separate namespaces prevent conflicts, but using namespace can bring both same-named members into the same lookup scope and cause ambiguity.

Separate namespace → ✅ No conflict
using both + same name → ❌ Ambiguous
na::num1 / nb::num1 → ✅ Clear

*/