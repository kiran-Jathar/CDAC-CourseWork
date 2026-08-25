// Problem of scope resolution (::) in namespace.

#include<stdio.h>
namespace na{

    int num=10;     
}


int main(){
    using namespace na;
    printf("%d",num);    // 10
}
int main1(){
    printf("num %d",na::num);   // 10 
    printf("\nnum %d",na::num); // 10
    printf("\nnum %d",na::num); // 10
    printf("\nnum %d",na::num); // 10

    return 0;
}

/*

If we have many variables/functions from the same namespace, writing na:: every time becomes long and repetitive
Solution — using
    using namespace na;


*/