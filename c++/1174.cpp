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
    int i;
    double a[100];

    for(i=0; i<100; i++){
        cin >> a[i];
    }
    for (i = 0; i<100; i++){
        if (a[i] <= 10){
            printf("A[%d] = %.1lf\n",i,a[i]);
        }
    }

    return 0;
}
