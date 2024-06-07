#include<bits/stdc++.h>

#ifndef CURS_B_NULL_H
#define CURS_B_NULL_H

using namespace std;


class b_null{
public:
    double a,c;
    void kogdabnul(double a, double c){
        if(-(c/a) < 0){
            cout<<"The equation has roots +-sqrt(-(c/a)) at -(c/a)>=0."<<endl
                <<"Corney net"<<endl;
        }
        if(-(c/a)> 0) {
            x1 = sqrt(-(c / a));
            x2 = -sqrt(-c / a);
            cout <<"The equation has roots +-sqrt(-(c/a)) at -(c/a)>=0."<<endl
                 <<"X1:" <<x1 <<endl
                 <<"X2:"<< x2 << endl;
        }
    }
private:
    double x1,x2;
};

#endif //CURS_B_NULL_H
