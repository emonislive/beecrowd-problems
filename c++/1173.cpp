/*
Name: Sayed Hasan Emon
University: Green University of Bangladesh
Subject: Computer Science & Engineering
Year: 3rd
Date of Submission: 07-07-24
*/
#include <iostream>

using namespace std;
#define n 10

int main()
{
    int a, i, arr[n];
    cin >> a;
    arr[0] = a;
    for (i = 1; i < n; i++){
        a *= 2;
        arr[i] = a;
    }
    for (i = 0; i < n; i++){
        cout << "N[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
