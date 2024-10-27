#include <iostream>
using namespace std;
#define endl '\n'
#define fast_input_output() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(int height, int diameter, int branches) {
    int flag = 0;
    if ((height >= 200 && height <= 300) && (diameter >= 50) && (branches >= 150))
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;
}

int main() {
    fast_input_output();
    int height, diameter, branches, testCase;
    cin >> testCase;
    while (testCase--) {
        cin >> height >> diameter >> branches;
        solve(height, diameter, branches);
    }
    return 0;
}
