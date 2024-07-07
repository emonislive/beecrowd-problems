/*
Name: Sayed Hasan Emon
University: Green University of Bangladesh
Subject: Computer Science & Engineering
Year: 3rd
Date of Submission: 07-07-24
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, year, month, days, temp;
    cin >> a;
    temp = a;
  
    year = temp / 365;
    temp %= 365;
    month = temp / 30;
    temp %= 30;
    days = temp;
  
    cout << year << " ano(s)" << endl;
    cout << month << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;
  
    return 0;
}
