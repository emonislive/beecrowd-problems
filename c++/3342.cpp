#include <iostream>
using namespace std;
#define endl '\n'

void solve(int n)
{
    n = n * n;
    int black = n / 2;
    int white = n - black;
    printf("%d casas brancas e %d casas pretas\n", white, black);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    solve(n);
  
    return 0;
}
