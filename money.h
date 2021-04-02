#pragma once
#include "C:/Development/Libraries/std_lib_facilities.h"



class Money{
public:

    explicit Money(double x); // explicit here is meaning, if somebody tried to cout << Money it wouldn't implicitly print it out as a long or something since no overloaded operartor for >> yet
    explicit Money(string s, double x);
    Money();
    [[nodiscard]] long int isCents() const {return cents;}
    [[nodiscard]] string isCurrency() const {return currency;}

    friend Money operator+(Money &x1, Money &x2){
        Money result;
        result.cents = (x1.cents + x2.cents);
        return result;
}

friend void operator>>(istream& is, Money& a){
        string cur;
        double x = 0;

        is >> cur >> x;

        a = Money(cur, x);


    }


private:
    long int cents;
    string currency;


};

void moneyPrnt(Money& x);


extern Money input1;
extern Money input2;