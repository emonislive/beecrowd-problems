#include <iostream>
using namespace std;

void solve(int size)
{
    int number;
    for (int i = 1; i <= size; i++) {
        cin >> number;
        printf("resposta %d: %d\n", i, number);
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int size;
    cin >> size;
    solve(size);
    return 0;
}
