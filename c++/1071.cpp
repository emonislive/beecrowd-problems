/* 
Submit Date: 11/07/24 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b, temp = 0, i, sum = 0;

    cin >> a >> b;

    if (a>b){       // swap nums
        temp = a;
        a = b;
        b = temp;
    }
    for (i = a+1; i<b; i++){
        if (i % 2 != 0){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}


