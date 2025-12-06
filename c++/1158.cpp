#include <iostream>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve()
{
    int number, size, sum = 0;
    cin >> number >> size;

    for (int i = 0; i < size; i++)
    {
        if (number % 2 == 0)
            ++number;

        sum += number;
        number += 2;
    }
    cout << sum << endl;
}
int main()
{
    fastIO();

    int tests;
    cin >> tests;
    while (tests--)
    {
        solve();
    }

    return 0;
}
