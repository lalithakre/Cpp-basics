#include <iostream>
using namespace std;
long long size(long long n)
{
    long long ans = 0;
    while (n > 0)
    {
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}
long long find(long long num, long long tem)
{
    long long res = 0;
    while (num > 0)
    {
        long t = num % 10;
        long g = 1;
        for (int i = 0; i < tem; i++)
        {
            g = g * t;
        }
        res = res + g;
    }
    return res;
}
int main()
{
    long long n;
    cin >> n;
    long long tem = size(n);
    if (n == find(n, tem))
    {
        cout << "Number is Armstrong";
    }
    else
    {
        cout << "Number is not Armstrong";
    }
    return 0;
}