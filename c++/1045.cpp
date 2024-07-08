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
    double a, b, c, a2, b2, c2, tot, tot2, arr[3];
    int i;
    cin >> a >> b >> c;

    arr[0] = a;
    arr[1] = b;
    arr[2] = c;

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+n, greater<double>());

    a = arr[0];
    b = arr[1];
    c = arr[2];

    a2 = pow(a, 2);
    b2 = pow(b, 2);
    c2 = pow(c, 2);

    tot = b + c;
    tot2 = b2 + c2;

    if (a > 0 && b > 0 && c > 0){
        if (a >= tot){
            cout << "NAO FORMA TRIANGULO" << endl;
        }
        else if (a2 == tot2){
            cout << "TRIANGULO RETANGULO" << endl;
        }
        else if (a2 > tot2){
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        else if (a2 < tot2){
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
    }
    if (a == b && b == c && a == c){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if (a == b || b == c || a == c ){
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
