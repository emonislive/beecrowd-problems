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
    int a, b, i;

    cin >> b;
    int arr[b];

    for (i = 0; i < b; i++)
    {
        arr[i] = -99;
    }

    for (i = 0; i < b; i++)
    {
        cin >> a;
        if (a < 0)
        {
            if (a % 2 == 0)
                arr[i] = -1;
            else
                arr[i] = -2;
        }
        else if (a == 0)
        {
            arr[i] = -3;
        }
        else
        {
            if (a % 2 == 0)
                arr[i] = 0;
            else
                arr[i] = 1;
        }
    }

    for (i = 0; i < b; i++)
    {
        switch (arr[i])
        {
        case -3:
            cout << "NULL" << endl;
            break;
        case -2:
            cout << "ODD NEGATIVE" << endl;
            break;
        case -1:
            cout << "EVEN NEGATIVE" << endl;
            break;
        case 0:
            cout << "EVEN POSITIVE" << endl;
            break;
        case 1:
            cout << "ODD POSITIVE" << endl;
            break;
        }
    }
    return 0;
}
