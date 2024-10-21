#include <iostream>
#include <iomanip>
using namespace std;
#define endl '\n'

void solve(double salary)
{
    cout << fixed << setprecision(2);
    double tax = 0;
    if (salary <= 2000.00)
        cout << "Isento" << endl;
    else if (salary > 2000.00 && salary <= 3000)
    {
        tax = ((salary - 2000.00) * 0.08);
        cout << "R$ " << tax << endl;
    }
    else if (salary > 3000.00 && salary <= 4500.00)
    {
        tax = (((salary - 3000.00) * 0.18) + (1000.00 * 0.08)); // 3000 - 2000 = 1000
        cout << "R$ " << tax << endl;
    }
    else if (salary > 4500.00)
    {
        tax = (((salary - 4500.00) * 0.28) + (1500.00 * 0.18) + (1000 * 0.08)); // 4500 - 3000 = 1500, 3000 - 2000 = 1000
        cout << "R$ " << tax << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double salary;
    cin >> salary;
    solve(salary);

    return 0;
}
