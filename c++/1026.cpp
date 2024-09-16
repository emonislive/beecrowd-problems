#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll a, ll b) {
    ll ans = a xor b;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll a, b;
    // Input ends at EOF (End of File)
    while (cin >> a >> b) {
        solve(a, b);
    }
    return 0;
}
