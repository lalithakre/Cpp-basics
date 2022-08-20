#include <bits/stdc++.h>
using namespace std;
void add(int a,int b)
{
    cout<<a+b;
} 
void sub(int a,int b)
{
    cout<<a-b;
} 
void mul(int a,int b)
{
    cout<<a*b;
} 
void divi(int a,int b)
{
    cout<<a/b;
} 
void rem(int a,int b)
{
    cout<<a%b;
} 
int main()
{
    int a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
    while (1)
    {
        cout << "\n1 to addition:";
        cout << "\n2 to substraction:";
        cout << "\n3 to multiplication:";
        cout << "\n4 to division:";
        cout << "\n5 to get remainder:\n";
        int n;
        cout << "Enter your choice operation:" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            add(a,b);
            break;
        case 2:sub(a,b);
            break;
        case 3:mul(a,b);
            break;
        case 4:divi(a,b);
            break;
        case 5:rem(a,b);
            break;
        default:
            cout << "Your input is invalid pls reinput your choice";
             break;
        }
    }
}
