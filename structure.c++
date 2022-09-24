#include<bits/stdc++.h>
using namespace std;
struct s
{
    int a;
    float f;
    int add()
    {
        return (a+f);
    }
};
int main()
{ 
    struct s s1;
    cout<<"Structure size:"<<sizeof(s1)<<endl;
    cin>>s1.a;
    cin>>s1.f;
    cout<<s1.add();
}