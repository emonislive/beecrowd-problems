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
    double a;
    cin >> a;

    if (a >= 0 && a <= 400.00){
        printf("Novo salario: %.2lf\n", a+(a*0.15));
        printf("Reajuste ganho: %.2lf\n", a*0.15);
        printf("Em percentual: 15 %%\n");
    }
    else if(a >= 400.01 && a <= 800.00){
        printf("Novo salario: %.2lf\n", a+(a*0.12));
        printf("Reajuste ganho: %.2lf\n", a*0.12);
        printf("Em percentual: 12 %%\n");
    }
    else if(a >= 800.01 && a <= 1200.00){
        printf("Novo salario: %.2lf\n", a+(a*0.10));
        printf("Reajuste ganho: %.2lf\n", a*0.10);
        printf("Em percentual: 10 %%\n");
    }
    else if(a >= 1200.01 && a <= 2000.00){
        printf("Novo salario: %.2lf\n", a+(a*0.07));
        printf("Reajuste ganho: %.2lf\n", a*0.07);
        printf("Em percentual: 7 %%\n");
    }
    else{
        if(a > 2000.00){
            printf("Novo salario: %.2lf\n", a+(a*0.04));
            printf("Reajuste ganho: %.2lf\n", a*0.04);
            printf("Em percentual: 4 %%\n");
        }
    }
    return 0;
}
