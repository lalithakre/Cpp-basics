#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    try
    {
       if(b==0)
       throw b;
       c=a/b;
       cout<<"Result: "<<c<<endl;
    }
    catch(int x)
    {
        cout<<"Cann't divide by "<<x<<endl;
    }
    cout<<"Excution ended:";
    return 0;
}