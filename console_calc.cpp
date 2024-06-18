#include<iostream>
using namespace std;
int main(){
    char op;
    double a, b, result;
    
    cout << "**** CALCULATOR ****" << endl;
    
    cout << "Enter + - * or /" << endl;
    cin >> op;
    
    cout << "Enter n1" << endl;
    cin >> a;

    cout << "Enter n2" << endl;
    cin >> b;

    switch(op){
        case '+':
         result = a + b;
         break;
        case '-':
         result = a - b;
         break;
        case '*':
         result = a * b;
         break;
        case '/':
         result = a / b;
         break;
        default:
         cout << "Enter valid choice";
    }
    cout << "Result = " << result << endl;
    cout << "********";
    return 0;
}