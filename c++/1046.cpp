// Submit Date: 13/07/24

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    if (a < b)
        cout << "O JOGO DUROU " << b-a << " HORA(S)" << endl;
        
    if (a > b || a == b){
        a = 24 - a;
        cout << "O JOGO DUROU "  << a+b << " HORA(S)" << endl;
    }
    return 0;
}
