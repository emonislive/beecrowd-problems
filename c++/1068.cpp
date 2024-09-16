#include <iostream>
using namespace std;
#define endl '\n'

void solve(string s)
{
    int c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            c++;
        else if (s[i] == ')')
            c--;

        if (c < 0)
        {
            cout << "incorrect" << endl;
            return;
        }
    }
    if (c == 0)
        cout << "correct" << endl;
    else
        cout << "incorrect" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    while (cin >> s)
    {
        solve(s);
    }
    return 0;
}
