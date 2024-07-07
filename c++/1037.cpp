/*
Name: Sayed Hasan Emon
University: Green University of Bangladesh
Subject: Computer Science & Engineering
Year: 3rd
Date of Submission: 08-07-24
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    cin >> a;

    if (a < 0 || a > 100)
        cout << "Fora de intervalo" << endl;
    else if (a >= 0 && a <= 25.0000)
        cout << "Intervalo [0,25]" << endl;
    else if (a >= 25.00001 && a <= 50.0000000)
        cout << "Intervalo (25,50]" << endl;
    else if (a > 50.0000000 && a <= 75)
        cout << "Intervalo (50,75]" << endl;
    else
        cout << "Intervalo (75,100]" << endl;

    return 0;
}
