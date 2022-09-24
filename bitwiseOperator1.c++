#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=4;//100
    int b=6;//110
    int c=a&b;//100 true+true=true, true+false=false, false+false=false
    int d=a|b;//110 true+true=true, true+false=true, false+false=false
    int e=a^b;//010 true+true=false, true+false=true, false+false=false
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e;
}