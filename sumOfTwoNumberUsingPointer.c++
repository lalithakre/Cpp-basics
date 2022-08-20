#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=4;
    int b=5;
    int *p,*p1;
    p=&a;
    p1=&b;
    cout<<(*p)+(*p1);
}
/*
p = new int 
p1= new int
Get input in both *p,*p1
cout<<*p+*p1
*/