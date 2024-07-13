// Submit Date: 13/07/24

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, i, j, k=0;
    cin >> a;

    for (i = 0; i <= 333; i++){
        for (j = 0; j < a; j++){
            if (k > 999) return 0;
            cout << "N[" << k << "] = " << j << endl;
            k++;
        }
    }
    return 0;
}
