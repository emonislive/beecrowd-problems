/*
Name: Sayed Hasan Emon
University: Green University of Bangladesh
Subject: Computer Science & Engineering
Year: 3rd
Date of Submission: 07-07-24
*/
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a < b)
    {
        for (int i = a+1; i < b; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
            {
                cout << i << endl;
            }
        }
    }
    else 
    {
        for (int i = b+1; i < a; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}
