/*
Name: Sayed Hasan Emon
University: Green University of Bangladesh
Subject: Computer Science & Engineering
Year: 3rd
Date of Submission: 07-07-24
*/
#include <iostream>

using namespace std;

int main()
{
    int a, a_100, a_50, a_20, a_10, a_5, a_2, a_1, temp;

    cin >> a;
    if (a > 0 && a < 1000000)
    {
        temp = a;

        a_100 = temp / 100;
        temp %= 100;

        a_50 = temp / 50;
        temp %= 50;

        a_20 = temp / 20;
        temp %= 20;

        a_10 = temp / 10;
        temp %= 10;

        a_5 = temp / 5;
        temp %= 5;

        a_2 = temp / 2;
        temp %= 2;

        a_1 = temp / 1;

        cout << a << endl;
        cout << a_100 << " nota(s) de R$ 100,00" << endl;
        cout << a_50 << " nota(s) de R$ 50,00" << endl;
        cout << a_20 << " nota(s) de R$ 20,00" << endl;
        cout << a_10 << " nota(s) de R$ 10,00" << endl;
        cout << a_5 << " nota(s) de R$ 5,00" << endl;
        cout << a_2 << " nota(s) de R$ 2,00" << endl;
        cout << a_1 << " nota(s) de R$ 1,00" << endl;
    }
    return 0;
}
