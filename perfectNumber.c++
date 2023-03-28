#include <iostream>
using namespace std;
long long find(long long n)
{
    long long ans = 0;
    while (n > 0)
    {
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}
int main()
{
    long long n;
    cin >> n;
    if (n < 0)
    {
        cout << find(n);
    }
    else
    {
        cout << find(n);
    }
    return 0;
}