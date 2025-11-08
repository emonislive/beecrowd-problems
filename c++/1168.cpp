#include <iostream>
#include <unordered_map>
using namespace std;
#define endl '\n'
#define lu long unsigned

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    unordered_map<char, int> LED = {
        {'0', 6},
        {'1', 2},
        {'2', 5},
        {'3', 5},
        {'4', 4},
        {'5', 5},
        {'6', 6},
        {'7', 3},
        {'8', 7},
        {'9', 6},

    };

    lu totalNeed = 0;
    string number;
    cin >> number;

    for (lu i = 0; i < number.size(); i++)
        totalNeed += LED[number[i]];

    cout << totalNeed << " leds" << endl;
}

int main()
{
    fastIO();
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
}

// 1 5 3 2 7
