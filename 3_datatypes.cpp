/*** fixed<<setprecision(3) - upto 3 decimal places ***/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a;
    long b;
    char c;
    float d;
    double e;
    cout<<"Enter value in int :";
    cin>>a;
    cout<<"Enter value in long :";
    cin>>b;
    cout<<"Enter value in char :";
    cin>>c;
    cout<<"Enter value in float :";
    cin>>d;
    cout<<"Enter value in double :";
    cin>>e;

    // cin>>a>>b>>c>>d>>e;
/*  cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e; */
    cout<<a<<endl <<b<<endl <<c<<endl; //<<fixed<<setprecision(3)<<d<<endl <<fixed<<setprecision(9)<<e<<endl;
    cout<<fixed<<setprecision(3)<<d<<endl;
    cout<<fixed<<setprecision(9)<<e<<endl;
  
    return 0;
}