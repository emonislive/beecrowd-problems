#include <iostream>
using namespace std;
#define endl '\n'

void solve() {
    int n;
    while (true) {
        int m = 0, j = 0;
        cin >> n;
        if (n == 0)
            exit(0);
        for (int i = 0; i < n; i++) {
            int in;
            cin >> in;
            if (in == 0)
                m++;
            else if (in == 1)
                j++;
        }
        cout << "Mary won " << m << " times and John won " << j << " times" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
