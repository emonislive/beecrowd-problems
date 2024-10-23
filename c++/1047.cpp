#include <iostream>
using namespace std;
#define endl '\n'

void solve(int startHour, int startMin, int endHour, int endMin)
{
    int totalDurationHour, totalDurationMin;
    if (startHour == endHour && startMin == endMin) {
        totalDurationHour = 24;
        totalDurationMin = 0;
    }
    else {
        if (endMin >= startMin) 
            totalDurationMin = endMin - startMin;
        else {
            totalDurationMin = (60 - startMin) + endMin;
            endHour--;
        }
        if (endHour >= startHour)
            totalDurationHour = endHour - startHour;
        else
            totalDurationHour = (24 - startHour) + endHour;
    }
    cout << "O JOGO DUROU " << totalDurationHour << " HORA(S) E " << totalDurationMin << " MINUTO(S)" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int startHour, startMin, endHour, endMin;
    cin >> startHour >> startMin >> endHour >> endMin;
    solve(startHour, startMin, endHour, endMin);

    return 0;
}
