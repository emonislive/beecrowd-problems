/*
Name: Sayed Hasan Emon
University: Green University of Bangladesh
Subject: Computer Science & Engineering
Year: 3rd
Date of Submission: 06-07-24
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double pie = 3.14159, r, area;
    cin >> r;
    r = pow(r, 2);
    area = pie * r;
    printf("A=%.4lf\n",area);
    return 0;
}
