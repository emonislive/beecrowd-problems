#include <iostream>
using namespace std;
#define endl '\n'

void solve(int velocity, int _time_)
{
    int twiceTheTime = _time_ * 2;
    int displacement = velocity * twiceTheTime;
    cout << displacement << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int velocity, _time_;
  
    while (cin >> velocity >> _time_)
    {
        solve(velocity, _time_);
    }

    return 0;
}
