#include <iostream>
using namespace std;
int find(int n)
{
    int ans = 0;
    while (n > 0 || n % 10 == 0)
    {
        if (n % 10 == 0)
        {
            ans++;
        }
        ans++;
        // ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}
int main()
{
    int n;
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