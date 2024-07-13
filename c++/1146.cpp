// Submit Date: 13/07/24

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while (true){
        cin >> a;
        if (a == 0 || a < 0){   
            return 0;
        } 
        else if (a >=1){
            for (int i = 1; i <= a; i++){        
                if  (i == a)
                    cout << i;
                else
                    cout << i << " ";
            }
        cout << endl;
        } 
    }
    return 0;
}
