#include <iostream>
using namespace std;
long long fact(long long n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    long long n;
    cin >> n;
    if (n < 0)
    {
        cout << "Factorial not found";
    }
    else
    {
        cout << fact(n);
    }
    return 0;
}