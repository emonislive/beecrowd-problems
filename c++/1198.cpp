#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll hashmatsArmy, ll opponentsArmy)
{
    cout << abs(hashmatsArmy - opponentsArmy) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll hashmatsArmy, opponentsArmy;
    
    while (cin >> hashmatsArmy >> opponentsArmy)
    {
        solve(hashmatsArmy, opponentsArmy);
    }
    return 0;
}
