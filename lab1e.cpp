#include<iostream>
#include<iomanip>
using namespace std;

int main(){
 float n;
 cout << "Enter a number" << endl;
 cin >> n;
 cout << setprecision(4) << n << endl;
 cout << setprecision(4) << fixed << n;
 return 0;
}