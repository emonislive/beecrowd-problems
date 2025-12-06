#include <iostream>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve() {
    int firstNumber = 7, lastNumber = 5;
    for (int i = 1; i <= 9; i += 2) {
        for (int j = firstNumber; j >= lastNumber; j--) {
            printf("I=%d J=%d\n", i, j);
        }
        lastNumber = firstNumber;
        firstNumber += 2;
    }
}
int main() {
    fastIO();
    solve();
    return 0;
}
