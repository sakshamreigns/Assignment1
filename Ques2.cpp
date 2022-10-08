//Program to convert distance from km to metres and inches//

#include<iostream>
using namespace std;

int main()
{
    int Distance, Distance_in_m,Distance_in_feet;

    cout<<"Please enter distance between two cities in kms"<<endl;
    cin>>Distance;

    Distance_in_m = Distance*1000;
    Distance_in_feet = Distance*3280.84;

    cout<<"Distance between 2 cities in metres="<<Distance_in_m<<endl;
    cout<<"Distance between 2 cities in feet="<<Distance_in_feet<<endl;
    return 0;

}
