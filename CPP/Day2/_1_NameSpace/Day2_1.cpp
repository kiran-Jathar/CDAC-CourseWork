#include<stdio.h>
int num1 = 10; // Program scope 

static int num2 = 20; //File scope 
namespace na 
{
    int num3 = 30;  // namespace scope 
} 
class Test 
{
    int num4;  //class scope 
}; 
int main()
{   
    void print( int num1 ); // function prototype scope  
    
    int num5 = 50; // function scope 
    {
        int num6 = 60;  // block scope 
    } 
    return 0;
}
