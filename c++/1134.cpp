#include <iostream>

using namespace std;

#define endl '\n'
#define int long long

signed main(){
    
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    int a, alcohol = 0, gasoline = 0, diesel = 0;
    while(true){
        start:
            cin >> a;
            switch(a){
                case 1:
                    alcohol++;
                    break;
                case 2:
                    gasoline++;
                    break;
                case 3:
                    diesel++;
                    break;
                case 4:
                    goto print;
                    break;
                default:
                    goto start;
        }
    }
    print:
        cout << "MUITO OBRIGADO" << endl;
        cout << "Alcool: " << alcohol << endl;
        cout << "Gasolina: " << gasoline << endl;
        cout << "Diesel: " << diesel << endl;
        
        return 0;
}
