#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long


void solve() {
    vector<int> v(3);
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    ll h, z, l;
    h = v[0];
    z = v[1];
    l = v[2];
    sort(v.begin(), v.end());
    if (v[1] == h) cout << "huguinho" << endl;
    else if (v[1] == z) cout << "zezinho" << endl;
    else if (v[1] == l) cout << "luisinho" << endl;

}

int main() {
    op();
    solve();
    return 0;
}
