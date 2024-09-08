#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve()
{
    ll n, a = 1, b = 2, c = 3;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << a << " " << b << " " << c << " " << "PUM" << endl;
        a += 4; b += 4; c += 4;
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
    return 0;
}
