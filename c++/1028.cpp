#include <iostream>
using namespace std;
#define endl '\n'

void solve(int a, int b)
{
    while (b > 0)
    {
        int mod = a % b;
        a = b;
        b = mod;
    }
    cout << a << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase, a, b;
    cin >> testCase;
    while (testCase--)
    {
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}
