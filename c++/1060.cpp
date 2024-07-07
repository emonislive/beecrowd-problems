/*
Name: Sayed Hasan Emon
University: Green University of Bangladesh
Subject: Computer Science & Engineering
Year: 3rd
Date of Submission: 07-07-24
*/
#include <iostream>

using namespace std;
#define n 6

int main()
{
    double a;
    int i, c = 0;
    for (i = 0; i < n; i++){
        cin >> a;
        if (a > -1){
            c++;
        }
    }
    cout << c << " valores positivos" << endl;

    return 0;
}
