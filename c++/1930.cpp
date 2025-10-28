#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int a, b, c, d, maxNum;

    cin >> a >> b >> c >> d;
    maxNum = (a + b + c + d) - 3;

    cout << maxNum << endl;
    return 0;
}
