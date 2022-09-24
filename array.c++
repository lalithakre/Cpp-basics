//Array indexing start from zero (0 - n-1)
#include<bits/stdc++.h>
using namespace std;
int main()
{//Array is a collection of similar data type, which is derived data type
    int a[100],n;
    // Syntax -> data-type nameArray[size]
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
}
/* Declaration type->
int a[]={1,2,3,4,5};
cout<<a[0];
cout<<a[1];
cout<<a[2];
cout<<a[3];
cout<<a[4];
int a[5]={};
automatically initialized by 0,0,0,0,0
*/