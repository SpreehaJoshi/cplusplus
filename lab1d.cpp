#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
 string name[] = {"Sachin", "Saurav", "Rahul"};
 int runs[] = {12300, 10000, 8990};
 int innings[] = {200, 130, 134};
 float avg[3];
 int i;
 for (i=0; i<3; i++){
    avg[i] = runs[i] / innings[i];
 }
 cout << setw(10) << "Player's Name" << setw(7) << "Runs" << setw(10) << "Innings" << setw(15) << "Averages" << endl;
 for (i=0; i<3; i++){
    cout << setw(10) << name[i] << setw(10) << runs[i] << setw(10) << innings[i] << setw(15) << avg[i] << endl;
 }
}