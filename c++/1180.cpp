#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'
#define MAX 1e9
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(int arraySize) {
    vector<int> array(arraySize);
    int minValue = MAX, arrayPosition = 0;
    for (int i = 0; i < arraySize; i++) {
        cin >> array[i];
        if (array[i] < minValue) {
            minValue = array[i];
            arrayPosition = i;
        }
    }
    cout << "Menor valor: " << minValue << endl;
    cout << "Posicao: " << arrayPosition << endl;
}

int main() {
    fastIO();
    int arraySize;
    cin >> arraySize;
    solve(arraySize);
    return 0;
}
