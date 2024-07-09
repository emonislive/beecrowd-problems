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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(b>c && d>a && ((c+d)>(a+b)) && c>=-1 && d>-1 && (a%2==0)){
        cout << "Valores aceitos" << endl;
    }
    else
        cout << "Valores nao aceitos" << endl;

    return 0;
}
