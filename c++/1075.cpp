#include <iostream>

using namespace std;

#define endl '\n'
#define int long long

signed main(){
    
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    int a, i;
    cin >> a;

    for (i = 2; i < 10000; i++){
        if (i % a == 2){
            cout << i << endl;
        }
    }
    return 0;
}
