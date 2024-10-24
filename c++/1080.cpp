#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    vector<int> array(100);
    int maxValue = 0, arrayPosition = 0;
    for (int i = 0; i < 100; i++) {
        cin >> array[i];
        if (array[i] > maxValue) {
            maxValue = array[i];
            arrayPosition = i;
        }
    }
    cout << maxValue << endl;
    cout << arrayPosition + 1 << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
