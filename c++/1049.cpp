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
    string arr[3];

    for (i = 0; i < 3; i++){
        cin >> arr[i];
    }

    if (arr[0] == "vertebrado"){
        if (arr[1] == "ave"){
            if (arr[2] == "carnivoro"){
                cout << "aguia" << endl;
            }
            else if (arr[2] == "onivoro"){
                cout << "pomba" << endl;
            }
        }
        else if (arr[1] == "mamifero"){
            if (arr[2] == "onivoro"){
                cout << "homem" << endl;
            }
            else if (arr[2] == "herbivoro"){
                cout << "vaca" << endl;
            }
        }
    }
    else if (arr[0] == "invertebrado"){
        if (arr[1] == "inseto"){
            if (arr[2] == "hematofago"){
                cout << "pulga" << endl;
            }
            else if (arr[2] == "herbivoro"){
                cout << "lagarta" << endl;
            }
        }
        else if (arr[1] == "anelideo"){
            if (arr[2] == "hematofago"){
                cout << "sanguessuga" << endl;
            }
            else if (arr[2] == "onivoro"){
                cout << "minhoca" << endl;
            }
        }
    }
    return 0;
}
