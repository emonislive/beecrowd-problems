#include <iostream>
#include <iomanip>

using namespace std;

#define endl '\n'
#define int long long

signed main(){
    
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    int totalWeight, i, n;
    double a, b, c, avg;
    totalWeight = 2 + 3 + 5; 
    
    cin >> n;
    for (i = 0; i < n; i++){
        cin >> a >> b >> c;
        a *= 2; b *= 3; c *= 5;
        avg = (a + b + c) / totalWeight;
        cout << fixed << setprecision(1) << avg << endl;
    }
    return 0;
}
