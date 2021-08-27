#include<iostream>
#include<cstdlib>       // abs() functions are defined in cstdlib header file.
using namespace std;

int main(){
    int a,b,x,y,z;
    cout<<"Enter first number :"<<endl;
    cin>>a;
    cout<<"Enter second number :"<<endl;
    cin>>b;
    x = a +b;
    y = a - b;
    z = abs(y);       // abs - Absolute value { -2 ----> 2 }
    cout<<"Sum = "<<x<<endl;
    cout<<"Absolute Difference = "<<z<<endl;
    
    return 0;
}

/*
abs() - Integer
labs() - long int
llabs() - long long int

*/