/*
Name: Sayed Hasan Emon
University: Green University of Bangladesh
Subject: Computer Science & Engineering
Year: 3rd
Date of Submission: 11-07-24
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,q, r;
    cin >> a >> b;
  
    r = a % b;
    if (r < 0) r = r + abs(b); // if r = - value then , r + |b|
  
    q = (a - r) / b;
    cout << q << " " << r << endl;
  
    return 0;
}
