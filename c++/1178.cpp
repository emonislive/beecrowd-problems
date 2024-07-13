// Submit Date: 13/07/24

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long double a, arr[100];
    int i;
    cin >> a;
    arr[0] = a;
    cout << "N[" << 0 << "] = " << fixed << setprecision(4) << arr[0] << endl;
    for (i = 1; i < 100; i++){
        a = a / 2;
        arr[i] = a;
        cout << "N[" << i << "] = " << fixed << setprecision(4) << arr[i] << endl;
    }
    return 0;
}
