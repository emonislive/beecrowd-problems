#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll x, ll y)
{
    ll rafael = pow(3 * x, 2) + pow(y, 2);
    ll beto = (2 * pow(x, 2)) + pow(5 * y, 2);
    ll carlos = (-100 * x) + pow(y, 3);
    ll maxVal = max(rafael, max(beto, carlos));
    
    if (maxVal == rafael)
        cout << "Rafael ganhou" << endl;
    else if (maxVal == beto)
        cout << "Beto ganhou" << endl;
    else
        cout << "Carlos ganhou" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        ll x, y;
        cin >> x >> y;
        solve(x, y);
    }
    return 0;
}
