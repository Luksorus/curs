

#ifndef CURS_RESHENIE_DISKR_H
#define CURS_RESHENIE_DISKR_H
#include"bits/stdc++.h"

using namespace std;

class reshenie_diskr {
public:
    void reshenie_diskrs(double a,double b,double c){

        diskriminant = pow(b,2) - 4*a*c;
        cout<<"Diskriminant = b^2 - 4*a*c = "<<diskriminant<<endl;
        if(diskriminant<0) cout<<"Resheniya net, Diskriminant < 0"<<endl;
        if(diskriminant == 0) cout <<"Diskriminant = 0 , X0: (-b/(2*a)) = "<< (-b/(2*a)) << endl;
        if(diskriminant >0) cout<<"Diskriminant >0 :"<<endl
                                <<"X1: ((-b+sqrt(diskriminant))/(2*a)) ="<< ((-b+sqrt(diskriminant))/(2*a)) << endl
                                <<"X2: ((-b-sqrt(diskriminant))/(2*a)) ="<< ((-b-sqrt(diskriminant))/(2*a)) << endl;
    }
private:
    double diskriminant;
};


#endif //CURS_RESHENIE_DISKR_H
