#include <stdio.h>
struct Employee // global declaration
{   
    private: 
    char name[20];
    int age;
    double salary;

    public: 
    void acceptRecord(/*struct Employee *ptr*/)
    {
        printf("Name : ");
        scanf("%s", name);
        printf("Age : ");
        scanf("%d", &age);
        printf("Salary : ");
        scanf("%lf", &salary); 
        salary=12.23;
    }
    
    void printRecord(/*struct Employee *ptr*/)
    {
        printf("Name : %s\n", name);
        printf("Age : %d\n", age);
        printf("Salary : %.2lf\n", salary);
    }
};

int main()
{
    struct Employee emp;

    emp.acceptRecord(); //emp.acceptRecord(&emp);

    //emp.salary = 0.0;  //  error
    emp.printRecord(); //emp.printRecord(&emp);
    return 0;
}

/*

Name : kiran
Age : 23
Salary : 3232
Name : kiran
Age : 23
Salary : 3232.00

*/