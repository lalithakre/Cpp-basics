#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=5,b=6,c=7;
    if(c>a&&c>b)
    {
        cout<<"c "<< c<<" is greater than a"<<a<<" and b "<<b<<endl;
    }
    else
    {
        cout<<"c "<<c<<" is lesser than a"<<a<<" and b "<<b<<endl;
    }
    if(a<b||a<c)
    {
        cout<<" a "<<a<<" is smaller than b or c"<<endl;
    }
    else{
        cout<<"a "<<a<<" is greater than b and c";
    }
}