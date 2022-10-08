//Program to calculate Area and Perimeter of Rectangle and Area and Circumference of Circle//

#include<iostream>
using namespace std;

int main()
{
    float length, breadth, radius,Perimeter, Area_Rectangle, Area_Circle, Circumference;

    cout<<"Please enter the length of the rectangle"<<endl;
    cin>>length;
    cout<<"Please enter the breadth of the rectangle"<<endl;
    cin>>breadth;
    cout<<"Please enter radius of the circle"<<endl;
    cin>>radius;

    Perimeter= 2*(length+breadth);
    Area_Rectangle= length*breadth;
    Circumference= (2*22*radius)/7;
    Area_Circle = (22* radius *radius)/7;

    cout<<"Area of the rectangle ="<<Area_Rectangle<<endl;
    cout<<"Perimeter of the rectangle ="<<Perimeter<<endl;
    cout<<"Area of the circle="<<Area_Circle<<endl;
    cout<<"Circumference ="<<Circumference<<endl;


    
    return 0;
}
