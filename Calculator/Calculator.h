
#include <bits/stdc++.h>
#ifndef CURS_CALCULATOR_H
#define CURS_CALCULATOR_H

using namespace std;



class error_cal{
public:
    string error_znak = "ERROR: check znak ";
    string del_null = "ERROR: delenie na 0";
};
class Calculator {
    error_cal er;
public:
    double a,b;
    string znak,command;

    void reshenie(double a, double b, string znak) {
        if (znak == "-"){
            otv =a-b;
            cout<<a<<znak<<b<<"="<<otv<<endl;;
        };
        if (znak == "+"){
            otv =a+b;
            cout<<a<<znak<<b<<"="<<otv<<endl;
        };
        if (znak == "*"){
            otv =a*b;
            cout<<a<<znak<<b<<"="<<otv<<endl;
        };
        if (znak == "/"){
            otv =a/b;
            cout<<a<<znak<<b<<"="<<otv<<endl;
        };
    }

    void checker(double a, double b, string znak){
        if(znak !="+" && znak != "/" && znak != "-"  && znak != "*"){cout<<er.error_znak<<endl;};
        if(b == 0 ){ cout<< er.del_null<< endl;};
        if((znak=="+" || znak == "/" || znak == "-"  || znak == "*") && b != 0) {return reshenie(a, b, znak);};
    }


private:
    double otv;
    bool flag = false;
    bool check = false;
};

#endif //CURS_CALCULATOR_H
