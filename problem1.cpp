#include <iostream>

using namespace std;

int main() {
    int intNumber = 17;
    float floatNumber = 3.14;
    double doubleNumber = 45.1234;
    bool boolean = true;
    char charName = 'A';
    cout <<"Value of Integer is "<< intNumber << ". Size is " <<  sizeof(intNumber) << endl;
    cout << "Value of Float is " << floatNumber<< ". Size is " <<sizeof(floatNumber) << endl;
    cout << "Value of Double is "<< doubleNumber<< ". Size is "<< sizeof(doubleNumber) << endl;
    cout << "Value of Char is "<< charName<<". Size is "<<sizeof(boolean) << endl;
    cout << "Value of Bool is "<< boolean<<". Size is "<<sizeof(charName) << endl;

}