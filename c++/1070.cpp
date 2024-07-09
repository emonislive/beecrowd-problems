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
    int a, c = 0;
    cin >> a;

    while(true){
        if(a % 2 != 0){
            cout << a << endl;
            c++;
        }
        if (c == 6){
            exit(0);
        }
        a++;
    }
    return 0;
}
