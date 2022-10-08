#include<iostream>
using namespace std;

int main()
{
    int Salary,Gross_Salary;
    cout<<"Please enter the salary of Ramesh"<<endl;
    cin>>Salary;

    Gross_Salary=Salary + 0.4*Salary + 0.2*Salary;

    cout<<"The gross salary of Ramesh="<<Gross_Salary<<endl;

    return 0;

}