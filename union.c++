#include<bits/stdc++.h>
using namespace std;
union u
    {
        int a;//4
        float f;//4
        double d;//8
        void add()
        {
            cout<<f+a;
        }
    };
int main()
{
    union u u1;
    cout<<sizeof(u1)<<endl;
   cin>>u1.a>>u1.f>>u1.d;
   u1.add();     
}