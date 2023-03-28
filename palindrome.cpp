#include <iostream>
using namespace std;
string find(string n)
{
    string ans = "";
    for (int i = n.length(); i > -1; i--)
    {
        ans = ans + n[i];
    }
    return ans;
}
int main()
{
    string n;
    cin >> n;
    if (n == find(n))
    {
        cout << "Number is Palindrome";
    }
    else
    {
        cout << "Number is not Palindrome";
    }
    return 0;
}