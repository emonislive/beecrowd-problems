/*
Name: Sayed Hasan Emon
University: Green University of Bangladesh
Subject: Computer Science & Engineering
Year: 3rd
Date of Submission: 06-07-24
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    double b, c, tot;
    cin >> a >> b >> c;
    tot = c * 0.15;
    tot += b;
    printf("TOTAL = R$ %.2lf\n", tot);
    return 0;
}
