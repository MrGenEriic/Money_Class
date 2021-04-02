#include "money.h"

#include <utility>

Money input1;
Money input2;

// Global variables are big no no, if I cared I would put these into a function where the user was prompted etc

Money::Money(double x){ // Convert the double the user enters into cents

    cents = {static_cast<long>(x*100)};

}
Money::Money(string s, double x){ // Convert the double the user enters into cents

    cents = {static_cast<long>(x*100)};
    currency = move(s);

}

Money::Money() {
    cents = 0;
}

void moneyPrnt (Money& x){

    double convert = x.isCents();

    double result = convert/100;



    cout << result << ' ' << x.isCurrency();

}