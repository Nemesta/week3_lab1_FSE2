#include <iostream>

using namespace std;

int main() {
    int a = 13;
    char b = 'R';
    float floatNumber = float(a)/3;
    int decimalNumber = int(b);
    float floatNumber2 = (a+b)/5;
    char MyChar = char(int(b)+(a/10-1));
    cout << floatNumber<<" " << decimalNumber<<" "<< floatNumber2<<" "<< MyChar<< endl;


}