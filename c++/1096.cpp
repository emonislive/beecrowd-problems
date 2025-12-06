#include <iostream>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve()
{
    for (int i = 1; i <= 9; i += 2) {
        for (int j = 7; j >= 5; j--) {
            printf("I=%d J=%d\n", i, j);
        }
    }
}
int main()
{
    fastIO();
    solve();
    return 0;
}
