#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2][2]={{1,2},{3,4}};
    int size=sizeof(a)/sizeof(a[0][0]);
    cout<<size<<endl;
    int n=size/2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}