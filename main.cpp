//libraly
#include "windows.h"
#include <bits/stdc++.h>


//activity
#include"informs/informs.h"
#include"resheniya/reshenie_diskr.h"

#include"resheniya/b_null.h"
#include"resheniya/c_null.h"
#include"Calculator/Calculator.h"


using namespace std;

void clear(){
    system("cls");
}

void information(int key){
    informs i;
    if(key == 1){
        clear();
        cout<<"*-Information about programs-*""\n"<<endl;
        cout <<i.info <<endl;
    };
    if(key == 2){
        clear();
        cout<<"*-Information about reshenie uravneniya-*""\n"<<endl;
        cout <<i.reshenie_info <<endl;
    };
    if(key ==3){
        clear();
        cout<<"*-Information about command for program-*""\n"<<endl;
      cout <<i.help << endl;
    };
}




void settings(){
    bool flag = false;
    informs i;
    int n =0; int f =0;
    int command = 0 ;
    HANDLE h; h = GetStdHandle(STD_OUTPUT_HANDLE);


    cout <<i.settings<<endl;
    cout<<"Number:";
    while(flag!=true){
        while (!(cin >> command)) {cin.clear();cin.ignore(34767, '\n');cout << endl << "ERROR: please choose 1-3 ";};
        if(command == 1){
            clear();
            cout<<"*-SETTINGS-*""\n"<<endl;

            cout<<i.frontgr<<endl;
            cout<<"Number:";while (!(cin >> n)) {cin.clear();cin.ignore(34767, '\n');cout << endl << "ERROR: please choose 1-9 ";};
            if( 1<= n && n<=9){
                SetConsoleTextAttribute(h, n | FOREGROUND_INTENSITY );
                clear();
                cout<<"*-SETTINGS-*""\n"<<endl;
                cout<<"DONE"<<endl;
                flag =true;
            }
            else if(n<1 || n>9) cout<< "ERROR: unknown number,please change number of 1-9"<<endl;
        }
        else if(command == 2) {
            clear();
            cout<<"*-SETTINGS-*""\n"<<endl;
            cout << i.background << endl;
            cout<<"Number:";while (!(cin >> n)) {cin.clear();cin.ignore(34767, '\n');cout << endl << "ERROR: please choose 1-3 ";};
            if (n == 1){
                SetConsoleTextAttribute(h, BACKGROUND_RED);
                clear();
                cout<<"*-SETTINGS-*""\n"<<endl;
                cout<<"DONE"<<endl;
                flag =true;
            };
            if (n == 2){
                SetConsoleTextAttribute(h, BACKGROUND_BLUE);
                clear();
                cout<<"*-SETTINGS-*""\n"<<endl;
                cout<<"DONE"<<endl;
                flag =true;
            };
            if (n == 3){
                SetConsoleTextAttribute(h, BACKGROUND_GREEN);
                clear();
                cout<<"*-SETTINGS-*""\n"<<endl;
                cout<<"DONE"<<endl;
                flag =true;
            };
            if (n < 1 || n > 3) cout << "ERROR: Unknown number, please change number of 1-3 " << endl;
        }

        else if(command == 3) {
            clear();
            cout<<"*-SETTINGS-*""\n"<<endl;
            cout<<"DONE"<<endl;
            flag = true;
        }

    else if(command != 1 && command !=2 && command !=3) cout<<"ERROR: Unknown command, change command 1-3"<<endl;
    }
}

void reshatel(){
    reshenie_diskr di;
    b_null bNull;
    c_null cNull;
    informs informs;
    double a,b,c;
    string i;
    bool flag = false;

    while(flag !=true) {
        cout<<"*-RESHENIE-*""\n"<<endl;
        cout<< "a*x^2+b*x+c=0"<<endl;
        cout<<"Choose real cof (1-8)"<<endl
            <<"1: a = n, b = n, c = n"<<endl
            <<"2: a = n, b = n, c = 0"<<endl
            <<"3: a = n, b = 0, c = n"<<endl
            <<"4: a = n, b = 0, c = 0"<<endl
            <<"5: a = 0, b = n, c = n"<<endl
            <<"6: a = 0, b = n, c = 0"<<endl
            <<"7: a = 0, b = 0, c = 0"<<endl
            <<"8: a = 0, b = 0, c = n"<<endl;
        cout<<"Number:";while (!(cin >> i)) {cin.clear();cin.ignore(34767, '\n');cout << endl << "ERROR: please choose number(1-8) ";};
        if (i == "1") {
            string command;
            int z;
            clear();
            cout << "*-RESHENIE-*""\n" << endl;
            cout << "a*x^2+b*x+c=0" << endl;
            cout << "cof a: ";
            while (!(cin >> a)) {
                cin.clear();
                cin.ignore(34767, '\n');
                cout << endl << "ERROR: please again cof a: ";
            };
            cout << "cof b: ";
            while (!(cin >> b)) {
                cin.clear();
                cin.ignore(34767, '\n');
                cout << endl << "ERROR: please again cof b: ";
            };
            cout << "cof c: ";
            while (!(cin >> c)) {
                cin.clear();
                cin.ignore(34767, '\n');
                cout << endl << "ERROR: please again cof c: ";
            };
            if (a != 0 && b != 0 && c != 0) {
                clear();
                cout << "*-RESHENIE-*""\n" << endl;
                cout << "Otvet: " << endl;
                di.reshenie_diskrs(a, b, c);
                cout << "reshenie -> MAIN MENU" << endl;
                flag = true;
            };
            if(a ==0 || b ==0 || c ==0) cout<<"ERROR: One/two/three cof = 0"<<endl;
        };
        if (i == "2") {
            clear();
            cout<<"*-RESHENIE-*""\n"<<endl;
            cout<< "a*x^2+b*x=0"<<endl;
            cout << "cof a: ";
            while (!(cin >> a)) {
                cin.clear();
                cin.ignore(34767, '\n');
                cout << endl << "ERROR: Please, write again cof a: ";
            };
            cout << "cof b: ";
            while (!(cin >> b)) {
                cin.clear();
                cin.ignore(34767, '\n');
                cout << endl << "ERROR: Please, write again cof b: ";
            };
            if(a!=0 && b!=0){
                cNull.kogdacnul(a, b);
                cout << "reshenie -> MAIN MENU"  << endl;
                flag =true;
            }
            if(a ==0 || b ==0) cout << "ERROR: One/two cof =0" << endl;
        };
        if (i == "3") {
            clear();
            cout<<"*-RESHENIE-*""\n"<<endl;
            cout<< "a*x^2+c=0"<<endl;
            cout << "cof a: ";
            while (!(cin >> a)) {
                cin.clear();
                cin.ignore(34767, '\n');
                cout << endl << "ERROR: Please, write again cof a: ";
            };
            cout << "cof c: ";
            while (!(cin >> c)) {
                cin.clear();
                cin.ignore(34767, '\n');
                cout << endl << "ERROR: Please, write again cof c: ";
            };
            if(a!=0 && c!=0){
                bNull.kogdabnul(a, c);
                cout << "reshenie -> MAIN MENU" << endl;
                flag =true;
            }
            if(a ==0 || c ==0) cout << "ERROR: One/two cof =0" << endl;
        };
        if (i == "4") {
            clear();
            cout<<"*-RESHENIE-*""\n"<<endl;
            cout<< "a*x^2=0"<<endl;
            cout << "cof a: ";
            while (!(cin >> a)) {
                cin.clear();
                cin.ignore(34767, '\n');
                cout << endl << "ERROR: Please, write again cof a: ";
            };
            if(a!=0){
                cout<<"The coefficients b and c are zero. The only root of the equation is 0."<<endl
                    << "X0: 0" << endl;
                flag =true;
                cout << "reshenie -> MAIN MENU"  << endl;
            }
            if(a ==0 )cout << "ERROR: Cof = 0 " << endl;
        };
        if (i == "5") {
            clear();
            cout<<"*-RESHENIE-*""\n"<<endl;
            cout<< "b*x+c=0"<<endl;
            cout << "cof b: ";
            while (!(cin >> b)) {
                cin.clear();
                cin.ignore(34767, '\n');
                cout << endl << "ERROR: Please, write again cof b: ";
            };
            cout << "cof c: ";
            while (!(cin >> c)) {
                cin.clear();
                cin.ignore(34767, '\n');
                cout << endl << "ERROR: Please, write again cof c: ";
            };
            if(b!=0 && c!=0){
                cout<<"For a=0, the equation is a first degree equation with a single root -(c/b)."<<endl
                    << "X0: " << double(-c / b) << endl;
                flag =true;
                cout << "reshenie -> MAIN MENU" << endl;
            }
            if(b ==0 || c ==0) cout << "ERROR: One/two cof =0" << endl;

        };
        if (i == "6") {
            clear();
            cout<<"*-RESHENIE-*""\n"<<endl;
            cout<< "b*x=0"<<endl;
            cout << "cof b: ";
            while (!(cin >> b)) {
                cin.clear();
                cin.ignore(34767, '\n');
                cout << endl << "ERROR; Please, write again cof b: ";
            };
            if(b!=0){
                cout<<"This is a first degree equation, but the coefficient is zero here. The only root of the equation is 0."<<endl
                    << "X0: 0" << endl;
                flag =true;
                cout << "reshenie -> MAIN MENU" << endl;
            }
            if( b ==0 )cout << "ERROR: Cof =0" << endl;
        };
        if( i == "7"){
            clear();
            cout<<"*-RESHENIE-*""\n"<<endl;
            cout<< "0*x^2+0*x+0=0"<<endl;
            cout<<"All three coefficients are equal to zero. The equation is true for any x."<<endl
                << "X - luboe chislo"<<endl;
            flag =true;
            cout << "reshenie -> MAIN MENU" << endl;
        };
        if( i == "8"){
            clear();
            cout<<"*-RESHENIE-*""\n"<<endl;
            cout<< "0*x^2+0*x+c=0"<<endl;
            cout << "cof c: ";
            while (!(cin >> c)) {
                cin.clear();
                cin.ignore(34767, '\n');
                cout << endl << "ERROR; Please, write again cof c: ";
            };
            if(c!=0){
                cout<<"Only the coefficient c is set. Such an equation has no roots and is incorrect."<<endl
                    << "INCORRECT"<<endl;
                flag =true;
                cout << "reshenie -> MAIN MENU" << endl;
            }
            if( c ==0)cout << "ERROR: Cof =0" << endl;

        };


        if (i != "1" && i != "2" && i != "3" && i != "4" && i != "5" && i != "6" && i!="7" && i!="8") cout << "ERROR: Please, choose (1-8) " << endl;
    };
}
void checker(){
    informs i;
    Calculator cal;
    int inp;
    string command;
    bool flag = false;
    while(flag!=true) {
        cout <<"*-MAIN MENU-*" <<endl
             <<i.MainMenu << endl;
        cout<<"Number: "; while (!(cin >> inp)) {cin.clear();cin.ignore(34767, '\n');cout << endl << "ERROR: Please, choose number: ";};
        if (inp == 1) {
            clear();
            reshatel();
        };
        if (inp == 2) {
            clear();
            cout<<"*-SIMPLE CALCULATOR-*""\n"<<endl;
            double a = 0;double b = 0;
            string znak;
            cout << "First number:";while (!(cin >> a)) {cin.clear();cin.ignore(34767, '\n');cout << endl << "ERROR: Please, write again first number: ";};
            cout << "Znak:";cin >> znak;
            cout << "Second number:";while (!(cin >> b)) {cin.clear();cin.ignore(34767, '\n');cout << endl << "ERROR: Please, write again second number: ";};
            cal.checker(a, b, znak);
        };
        if (inp == 5){
            clear();
        };
        if (inp == 3) {
            clear();
            settings();
        };
        if (inp == 4){
            int key = 0;
            clear();
                cout << "*-INFORMATION-*""\n" << endl
                     << "1:Information about programs" << endl
                     << "2:Information about reshenie uravneniya" << endl
                     << "3:Information about command for program" << endl;
                cout<<"Number:";
                while (!(cin >> key)) {cin.clear();cin.ignore(34767, '\n');cout << endl << "ERROR: Please, choose 1-3 ";};
                if(key == 1 || key == 2 || key == 3) {
                    information(key);
                }
                if(key!=1 && key!=2 && key!=3)cout <<"ERROR: Please, choose 1-3"<<endl;
        };
        if (inp == 6) {
            cout << "goodbye!";
            flag = true;
        };
        if ( inp<1 || inp>6) {
            cout << "Error: Unknown command" << endl;
        };
    }

}

int main() {
    checker();
}



