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
    int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] <= 0)
            arr[i] = 1;
    }
    int i = 0;
    for (auto num : arr)
    {
        cout << "X[" << i << "] = " << num << endl;
        i++;
    }
}
int main()
{
    fastIO();
    solve();
}
