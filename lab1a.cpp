#include<iostream>
using namespace std;

int main(){
    int f=1, n, i;
    cout << "Enter a number " << endl;
    cin >> n;
    for (i=1; i<=n; i++){
        f = f*i;
    }
    cout << "The factorial of " << n << " is " << f;
    return 0;
}