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
    int a;
    do
    {
        cin >> a;
        if (a == 2002)
            cout << "Acesso Permitido" << endl;
        else
            cout << "Senha Invalida" << endl;
    }
    while (a != 2002);

    return 0;
}
