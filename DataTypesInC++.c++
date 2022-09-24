#include<bits/stdc++.h>
//this is comment in C++
using namespace std;
int main()
{
    char c='c';
    //this is character data type which takes 1 byte -128 to 127
    cout<<c<<endl;
    bool a=true;//1 byte
    //this ih boolean which takes only true and false
    cout<<a<<endl;
    short s=32767;
    //this is short integer data type which takes value in b/w -32768 to +32767(-2^15 to 2^15-1)
    cout<<s<<endl;
    int i=214714132;
    //this is int data type which takes value in b/w (-2^31 to 2^31-1)
    cout<<i<<endl;
    long l=413243124;
    //Similar to int data type
    cout<<l<<endl;
    float f=24234.24324;
    //4 byte floating point number
    cout<<f<<endl;
    double d=423424234.23423;
    //8 byte floating point number 
    cout<<d<<endl;
    //Other data types which takes positive values in b/w 0 to their range (above)
    //unsigned int = 0 to 2*(2^31)
    //unsigned short = 0 to 2*(2^15)
    //unsigned long = 0 to 2*(2^31)
    //unsigned char = 0 to 2*(2^7)
    return 0;
}