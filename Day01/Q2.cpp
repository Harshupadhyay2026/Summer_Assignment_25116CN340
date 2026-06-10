#include <iostream>
using namespace std;
int main() {
    int n,i ;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Multiplication Table of " << n<<endl;
    for (i = 1; i <= 10; i++) {
    cout << n << " x " << i << " = " << num * i << endl; }
    return 0;
}