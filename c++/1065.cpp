#include <iostream>

using namespace std;

#define endl '\n'
#define int long long
 
signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int a, i, count = 0;
    for (i = 0; i < 5; i++){
        cin >> a;
        if (a % 2 == 0) count++;
    }
    cout << count << " valores pares" << endl;
    return 0;
}
