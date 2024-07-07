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
    double a = 4.00, b = 4.50, c = 5.00, d = 2.00, e = 1.50;
    int i, j;
    cin >> i >> j;
    switch(i)
    {
    case 1:
        a *= j;
        printf("Total: R$ %.2lf\n", a);
        break;
    case 2:
        b *= j;
        printf("Total: R$ %.2lf\n", b);
        break;
    case 3:
        c *= j;
        printf("Total: R$ %.2lf\n", c);
        break;
    case 4:
        d *= j;
        printf("Total: R$ %.2lf\n", d);
        break;
    case 5:
        e *= j;
        printf("Total: R$ %.2lf\n", e);
        break;
    }
    return 0;
}
