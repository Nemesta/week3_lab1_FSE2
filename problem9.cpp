#include <iostream>

using namespace std;

int main() {
    cout << "Please enter a starting and ending velocity in meters/second, and time in seconds: ";
    float v1;
    float v2;
    float t;
    cin>>v1>>v2>>t;
    float a = (v2-v1)/t;
    cout << a << endl;
}