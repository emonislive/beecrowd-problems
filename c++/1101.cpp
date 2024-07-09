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
    int a[50], b[50], c[50], i = 0, j, tot = 0;

    for(j = 0; j < 50; j++){                                        // removing garbage values from array's
        a[j] = 0;
        b[j] = 0;
        c[j] = 0;
    }

    in:
        cin >> a[i] >> b[i];
        if ((a[i] <= 0 || b[i] <= 0) || (a[i] == 0 && b[i] == 0)){  // stop when any of these values is less or equal to zero
            goto print;
        }
        else
            i++;
            goto in;

    print:
        i = 0;
        if ((a[i] == 0 || b[i] == 0) || (a[i] < 1 && b[i] < 1))     // if first input contains 0 or -value then exit the program
            exit(0);

        int arr = sizeof(a) / sizeof(int);
        arr = arr - 1;                                              // subtract 1 from the size because last input contains 0 or -value


        for (i = 0; i < arr; i++){

            if (((a[i] > b[i]) || (a[i] == b[i])) && (a[i] > 0 && b[i] > 0)){ 
                for (j = b[i]; j <= a[i]; j++){
                    cout << j << " ";
                    c[i] += j;
                    tot = c[i];
                }
                cout << "Sum=" << tot << endl;
            }
            else if ((a[i] < b[i]) && (a[i] > 0 && b[i] > 0)){
                for (j = a[i]; j <= b[i]; j++){
                    cout << j << " ";
                    c[i] += j;
                    tot = c[i];
                }
                cout << "Sum=" << tot << endl;
            }
        }

    return 0;
}
