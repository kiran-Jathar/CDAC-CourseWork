#include<stdio.h>
int x;
class Employee{
    private:
    char name[20];
    int age;
    double salary;

    public:
     void acceptRecord(){
        printf("Enter Name : ");
        scanf("%s",name);
        printf("Age : ");
        scanf("%d",&age);
        printf("Salary : ");
        scanf("%lf",&salary);
     }
     void printRecord(){
        printf("\nName : %s",name);
        printf("\nAge : %d",age);
        printf("\nsalary : %.2lf",salary);
     }
};
int main(){
    Employee emp;
    emp.Employee::acceptRecord();  // message passing can we also call like this

    //emp.acceptRecord();
    emp.printRecord();
    return 0; 
}

/*

Enter Name : kiran 
Age : 22
Salary : 100000

Name : kiran
Age : 22
salary : 100000.00

*/