#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=5;
    for(int i=0;i<a;i++)
    {
        if(i==2)
        {
            continue;//skip current iteration
        }
        else if(i==4)
        {
            break;//break the current flow of loop
        }
        else
        {
            cout<<i<<endl;
        }
    }
}