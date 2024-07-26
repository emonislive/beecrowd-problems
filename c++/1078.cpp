#include <iostream>

using namespace std;

#define endl '\n'
#define int long long

signed main(){
    
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    int a, i, mul;
    cin >> a;
    
    for(i = 1; i <= 10; i++){
        mul = i * a;
        cout << i << " x " << a << " = " << mul << endl;
    }
    
    return 0;
}
