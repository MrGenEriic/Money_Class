#include "money.h"



int main() {

cout << "Please enter two values to add together: ";

char p;

cin >> input1;
cin >> p;
cin >> input2;


    if (p == '+'){
        Money result = input1 + input2;
        moneyPrnt(result);
    }
    else {
        cout << "You didn't enter a +";
    }





    return 0;
}
