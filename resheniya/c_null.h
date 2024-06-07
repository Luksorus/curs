#include<bits/stdc++.h>
#ifndef CURS_C_NULL_H
#define CURS_C_NULL_H

using namespace std;

class c_null{
public:
    double a,b;
    void kogdacnul(double a, double b){
        x2 = -b / a;
        cout <<"The left side of the equation is decomposed into the form x(ax+b)=0, i.e. the equation has two roots: 0 and -b/a."<<endl
             <<"X1:" <<x1 <<endl
             <<"X2:"<< x2 << endl;
    }
private:
    double x1 = 0;
    double x2;

};

#endif //CURS_C_NULL_H
