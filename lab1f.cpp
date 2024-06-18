#include<iostream>
using namespace std;
int x = 5;
int main(){
 int x = 11;
 cout << "Local = " << x << endl;
 cout << "Global = " << ::x << endl;
 ::x = x+1;
 cout << "Modified Global = " << ::x;
 return 0;
}