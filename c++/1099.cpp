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
    int a, b, c;
    int i, j, k = 0;
    int add;

    cin >> a;
    int arr[a];

    for(i = 0; i <= a-1; i++)
    {
        cin >> b >> c;

        if(b > c)                     // for ex: 13 9 ---> 12,(11),10 needs to go reverse to find the odd numbers
        {
            for(j = c+1; j < b; j++)
            {
                if(j % 2 != 0)
                {
                    add += j;
                }
            }
            arr[k] = add;
            k++;
            add = 0;
        }

        else                          // for normal condition, for ex: 9 13 ----> 10, (11), 12
        {
            for(j = b+1; j < c; j++)
            {

                if(j % 2 != 0)
                {
                    add += j;
                }
            }
            arr[k] = add;
            k++;
            add = 0;
        }
    }
    for (i = 0; i <= a-1; i++)        // print the results in array.
    {
        cout << arr[i] << endl;
    }


    return 0;
}
