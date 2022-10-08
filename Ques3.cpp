//Program to calculate Average and Percentage of Marks obtained by students//

#include<iostream>
using namespace std;

int main()
{
    int Average;
    float Marks1, Marks2, Marks3, Marks4, Marks5, Percentage;

    cout<<"Please enter the marks of 1st subject"<<endl;
    cin>>Marks1;
    cout<<"Please enter the marks of 2nd subject"<<endl;
    cin>>Marks2;
    cout<<"Please enter the marks of 3rd subject"<<endl;
    cin>>Marks3;
    cout<<"Please enter the marks of 4th subject"<<endl;
    cin>>Marks4;
    cout<<"Please enter the marks of 5th subject"<<endl;
    cin>>Marks5;
    Average =(Marks1+Marks2+Marks3+Marks4+Marks5)/5;
    Percentage = (Marks1+Marks2+Marks3+Marks4+Marks5)/500*100;

    cout<<"Average Marks obtained by the student is="<<Average<<endl;
    cout<<"Percentage of the marks obtained by the student is="<<Percentage<<endl;


}
