#include <iostream>
using namespace std;
bool find(string str, string str1)
{
    int ten = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str1[ten])
        {
            ten++;
        }
    }
    if (str1.length() == ten)
    {
        return true;
    }
    return false;
}
int main()
{
    string str, str1;
    cin >> str;
    cin >> str1;
    if (find(str, str1))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}