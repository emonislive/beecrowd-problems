#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll number)
{
    int flag = 0;
    for (ll i = 2; i <= sqrt(number); i++) // Trial Division Method
    {
        if (number % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "Not Prime" << endl;
    else
        cout << "Prime" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int testCase;
    ll number;
  
    cin >> testCase;
    while (testCase--)
    {
        cin >> number;
        solve(number);
    }
    return 0;
}
