
#ifndef CURS_INFORMS_H
#define CURS_INFORMS_H
#include"bits/stdc++.h"

using namespace std;

class informs {
public:
    string info = "Welcome to the quadratic equation calculator. Select any of the equation types,""\n""write the coefficients, and the program will provide you with the answer to any of these equations.""\n";
    string reshenie_info = "Depending on the values that the coefficients of a quadratic equation can take, "
                           "\n""eight types of quadratic equations can be distinguished:"
                               "\n""1) 0*x^2+0*x+0=0. All three coefficients are equal to zero. The equation is true for any x."
                                   "\n""2) 0*x^2+0*x+c=0. Only the coefficient c is set. Such an equation has no roots and is incorrect."
                                       "\n""3) a*x^2+b*x+c=0. This is a classical quadratic equation having from zero to two real roots."
                                           "\n""4) a*x^2+b*x=0. The left side of the equation is decomposed into the form x(ax+b)=0, i.e. the equation has two roots: 0 and -b/a."
                                               "\n""5) a*x^2+c=0. The equation has roots +-sqrt(-(c/a)) at -(c/a)>=0."
                                                   "\n""6) a*x^2=0. The coefficients b and c are zero. The only root of the equation is 0."
                                                       "\n""7) b*x+c=0. For a=0, the equation is a first degree equation with a single root -(c/b)."
                                                           "\n""8) bx=0. By analogy with the previous type, this is a first degree equation, but the coefficient c is zero here. The only root of the equation is 0."
                                                               "\n""\n""Various methods are used to solve quadratic equations. The choice of method depends on the type of quadratic equation."
                                                                       """\n"
                                                                         "The main method of solving quadratic equations is considered to be the \"Discriminant solution\" method. A formula is used to calculate the discriminant D=b2-4ac. Depending on the value of the discriminant, the number of real roots of the equation is determined. If D>0, then the equation has two real roots. If D=0, then the equation has one real root. If D<0, then the equation has no real roots. The roots of the equation can be calculated using the formula:"
                                                                         "\n""(-b+-sqrt(D))/2*a";

    string help =
            "\n""* - reshenie - *    reshenie kvadrat"
            "\n""* - calculator - *  simple calculator"
            "\n""* - settings - *    settings"
            "\n""* - info - *        Informations"
            "\n""* - clear - *       clear terminal"
            "\n""* - exit - *        exit""\n";

    string MainMenu =
            "\n""1:reshenie"
            "\n""2:calculator"
            "\n""3:settings"
            "\n""4:info"
            "\n""5:clear"
            "\n""6:exit";

    string settings =
            "*-SETTINGS-*""\n"
            "\n""1:change fontground color"
            "\n""2:change background color"
            "\n""3:exit";

    string background =
            "* - Change background color - *"
            "\n""1)red"
            "\n""2)blue"
            "\n""3)green"
            "\n""* - Change background color - *";

    string frontgr =
            "* - Change fontground color - *"
            "\n""1)blue" "\n""2)green" "\n""3)mint" "\n""4)red" "\n""5)pink" "\n""6)yellow" "\n""7)azure" "\n""8)charcoal" "\n""9)cyan" "\n""* - Change fontground color - *";



};


#endif //CURS_INFORMS_H
