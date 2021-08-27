#include<bits/stdc++.h>
using namespace std;

int max_of_four(int a,int b,int c,int d){
    int f1,f2,d1;
    if(a>b){
        f1=a;
    }else{
        f1=b;
    }
    if (c>d)
    {
        f2=c;
    }else{
        f2=d;
    }
    if (f1>f2)
    {
        d1 = f1;
    }
    else{
        d1 = f2;
    } 
    return d1;
}

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a,b,c,d);
    cout<<ans;

    return 0;
}