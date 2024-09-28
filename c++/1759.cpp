#include <iostream>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int main() {
    op();
    int x, a;
    cin >> x;
    for (a = 1; a < x; a++)
        cout << "Ho ";
    cout << "Ho!" << endl;
    return 0;
}
