#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<len<<endl;
    int *p;
    p=a;
    for(int i=0;i<len;i++)
    {
        cout<<*p<<endl;
        p++;
    }
}