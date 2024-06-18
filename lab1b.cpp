#include<iostream>
using namespace std;

int main(){
 int a[5], i, l;
 cout << "Enter elements of an array" << endl;
 for (i=0; i<5; i++){
    cin >> a[i];
 }
 l = a[0];
 for (i=0; i<5; i++){
    if (a[i]>l){
        l = a[i];
    }
 }
 cout << "The largest number in the array is " << l;
 return 0;
}