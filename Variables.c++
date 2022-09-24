#include<bits/stdc++.h>
using namespace std;
int a=10;//global variable                      we access this variable without calling in a function
static int b=20;//static global variable        we can't change a value of static variable
int main()
{
    static int c=30;//static local variable     we can't change a value of static variable value in main function  
    int l=40;//local variable(we can change this value)   this is created for only this function we can't access this variable value whenever we pass this value
    a++;
    c++;
    b++;
    l++;
    cout<<a<<endl<<b<<endl<<c<<endl<<l;
}