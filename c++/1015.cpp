/*
Name: Sayed Hasan Emon
University: Green University of Bangladesh
Subject: Computer Science & Engineering
Year: 3rd
Date of Submission: 06-07-24
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // formula = √((x2-x1)^2+(y2-y1)^2)
    double x1, x2, y1, y2;
    double x, y, x_sqr, y_sqr, dis, dis_square_root;

    cin >> x1 >> y1 >> x2 >> y2;

    x = x2 - x1;                    // (x2-x1)
    x_sqr = pow(x, 2);              // square 2

    y = y2 - y1;                    // (y2-y1)
    y_sqr = pow(y, 2);              // square 2

    dis = x_sqr + y_sqr;            // [(x2-x1)^2] + [(y2-y1)^2]
    dis_square_root = sqrt(dis);    // √[{(x2-x1)^2} + {(y2-y1)^2}]

    printf("%.4lf\n", dis_square_root);
    return 0;
}
