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
    int a, b;

    while (true)
    {
        cin >> a >> b;
        if (a > b)
        {
            cout << "Decrescente" << endl;
        }
        else if (a == b)
        {
            exit(0);
        }
        else
            cout << "Crescente" << endl;
    }
    return 0;
}
