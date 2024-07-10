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
    long int a, b, temp = 0, i, sum = 0;
    cin >> a >> b;

    if (a > b){
        temp = a;
        a = b;
        b = temp;
    }
    for(i = a; i <= b; i++){

        if (i % 13 != 0){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}

