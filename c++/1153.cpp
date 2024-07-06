/*
Name: Sayed Hasan Emon
University: Green University of Bangladesh
Subject: Computer Science & Engineering
Year: 3rd
Date of Submission: 06-07-24
*/
#include <iostream>
using namespace std;
int main()
{
    int a, i, fact = 1;

    cin >> a;

    for (i = 1; i<=a; i++){
        fact *= i;
    }
    cout << fact << endl;
    return 0;
}
