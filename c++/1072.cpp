#include <iostream>
using namespace std;
#define endl '\n'

void solve(int n)
{
    int x, in = 0, out = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x >= 10 && x <= 20)
            in++;
        else
            out++;
    }
    printf("%d in\n", in);
    printf("%d out\n", out);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    solve(n);
    return 0;
}
