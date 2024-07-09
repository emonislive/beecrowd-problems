/*
Name: Sayed Hasan Emon
University: Green University of Bangladesh
Subject: Computer Science & Engineering
Year: 3rd
Date of Submission: 09-07-24
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, i;
    double d;
    cin >> a;
    for (i = 0; i < a; i++)
    {
        cin >> b >> c;
        if (c == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            d = static_cast<double>(b)/c;
            printf("%.1lf\n",d);
        }
    }
    return 0;
}
