#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    string num[] = {"zero", "one", "two","three","four","five","six","seven","eight","nine"};
     for (int i = a; i <= b; i++)
     {
         if (i<=9)
         {
             cout<<num[i]<<endl;
         }
         else if (i>9 and i%2==0)
         {
             cout<<"even"<<endl;
         }
         else{
             cout<<"odd"<<endl;
         }  
         
     }
     
    
    return 0;
}