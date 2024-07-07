/*
Name: Sayed Hasan Emon
University: Green University of Bangladesh
Subject: Computer Science & Engineering
Year: 3rd
Date of Submission: 06-07-24
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, c = 0;
    double a, total = 0;

    for(i = 0; i < 6; i++)
    {
        cin >> a;
        if (a > -1)
        {
            total += a;
            c++;
        }
    }
    total /= c;         // avg of the pos nums;
    cout << c << " valores positivos" << endl;
    cout << setprecision(3) << total << endl;

    return 0;
}
