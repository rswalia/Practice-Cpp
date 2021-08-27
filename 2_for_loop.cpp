#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter first number\n";
    cin>>a;
    cout<<"Enter second number\n";
    cin>>b;
    // switch (a)
    // {
    // case 1:
    //     cout<<"one"<<endl;
    //     break;
    // case 2:
    //     cout<<"two"<<endl;
    //     break;
    // case 3:
    //     cout<<"three"<<endl;
    //     break;
    // case 4:
    //     cout<<"four"<<endl;
    //     break;
    // case 5:
    //    cout<<"five"<<endl;
    //     break;
    // case 6:
    //     cout<<"six"<<endl;
    //     break;
    // case 7:
    //     cout<<"seven"<<endl;
    //     break;
    // case 8:
    //     cout<<"eight"<<endl;
    //     break;
    // case 9:
    //    cout<<"nine"<<endl;
    //     break;
    
    // default:
    //     cout<<"Greater than 9"<<endl;
    //     break;
    // }

    // switch (b)
    // {
    // case 1:
    //     cout<<"one"<<endl;
    //     break;
    // case 2:
    //     cout<<"two"<<endl;
    //     break;
    // case 3:
    //     cout<<"three"<<endl;
    //     break;
    // case 4:
    //     cout<<"four"<<endl;
    //     break;
    // case 5:
    //    cout<<"five"<<endl;
    //     break;
    // case 6:
    //     cout<<"six"<<endl;
    //     break;
    // case 7:
    //     cout<<"seven"<<endl;
    //     break;
    // case 8:
    //     cout<<"eight"<<endl;
    //     break;
    // case 9:
    //    cout<<"nine"<<endl;
    //     break;
    
    // default:
    //     cout<<"Greater than 9"<<endl;
    //     break;
    // }
    //Try with for loop -
    for (int i=1; i<10; i++)
    {
    switch (i)
    {
    case 1:
        cout<<"one"<<endl;
        break;
    case 2:
        cout<<"two"<<endl;
        break;
    case 3:
        cout<<"three"<<endl;
        break;
    case 4:
        cout<<"four"<<endl;
        break;
    case 5:
       cout<<"five"<<endl;
        break;
    case 6:
        cout<<"six"<<endl;
        break;
    case 7:
        cout<<"seven"<<endl;
        break;
    case 8:
        cout<<"eight"<<endl;
        break;
    case 9:
       cout<<"nine"<<endl;
        break;
    
    default:
        cout<<"Greater than 9"<<endl;
        break;
    }
    }

    return 0; 
}