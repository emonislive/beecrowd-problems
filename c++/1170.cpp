#include <iostream>
using namespace std;
#define endl '\n'

void solve(double number)
{
    int count = 0;
    while (true)
    {
        number /= 2;
        count++;
        if (number <= 1)
            break;
    }
    cout << count << " dias" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int testCase;
    double number;
  
    cin >> testCase;
    while (testCase--)
    {
        cin >> number;
        solve(number);
    }
    return 0;
}
