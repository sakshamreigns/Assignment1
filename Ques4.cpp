//Program to convert temperature from Farenhite to Celsius//

#include<iostream>
using namespace std;

int main()

{
    float Temp_Faren, Temp_Cel;

    cout<<"Please enter the temperature in Farenhite"<<endl;
    cin>>Temp_Faren;

    Temp_Cel=(Temp_Faren-32)*5/9;

    cout<<"The temperature in Celsius is="<<Temp_Cel<<endl;

    return 0;
}
