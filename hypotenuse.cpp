#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, c;
    cout << "Enter side a and b of a triangle" << endl;
    cin >> a >> b;

    a= pow(a, 2);
    b= pow(b, 2);
    c= sqrt(a+b);

    cout << "Hypotenuse is = " << c;
    return 0;
}