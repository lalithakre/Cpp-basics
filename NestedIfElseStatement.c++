#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"ENter a, b and c:";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(b>c)
        {
            cout<<"a is Greater than all";
        }
        else
        {
            cout<<"b is smaller than c and a";
        }
    }
    else
    {
        if(b<c)
        {
            cout<<"c is greater than all";
        }
        else
        {
            cout<<"b is bigger than c and a";
        }

    }
}