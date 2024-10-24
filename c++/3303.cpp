#include <iostream>
using namespace std;
#define endl '\n'
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(string s1) {
    int stringLength = s1.length();
    if (stringLength >= 10)
        cout << "palavrao" << endl;
    else
        cout << "palavrinha" << endl;
}

int main() {
    fastIO();
    
    string s1;
    cin >> s1;
    
    solve(s1);
    return 0;
}
