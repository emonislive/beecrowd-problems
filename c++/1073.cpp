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
    long long int a;
    cin >> a;
    if (a > 5 && a < 2000)
    {
        for (int i=2; i<=a; i++)
        {
            if(i%2 == 0)
                cout << i << "^2 = " << i*i << endl;
        }
    }
    else
        exit(0);
  
    return 0;
}
