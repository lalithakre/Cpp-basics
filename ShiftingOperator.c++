#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=1;
    a=a<<1;
    //left shifting
    //binary of 1 is = 01
    //shifting of left = 10
    int b=2;
    b=b>>1;
    //Right shifting
    //binary of 2 is = 10
    //shifting of right = 01
    cout<<b<<endl;
    cout<<a<<endl;
    int d=a<<3;//00010=10000 three times left shift
    cout<<d;

}