#include<stdio.h> 
namespace na 
{
    int num1 = 10; 
    void print( )
    {
        printf("num1 : %d\n",num1); // same scope 
    }
    struct Point
    {
        int xPos; 
        int yPos; 
        void print( void )
        {
            printf("xPos : %d\n",xPos); 
            printf("yPos : %d\n",yPos);             
        }
    }; 
    namespace nb
    {
        int num3 = 30; 
    }
}
int main()
{
    using namespace na; 
    print( ); 
    Point pt1 = {10,20}; 
    pt1.print( ); 
    using namespace nb;
    printf("num3 : %d",num3);  
    return 0;
}