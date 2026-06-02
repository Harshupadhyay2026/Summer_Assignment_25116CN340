#include <iostream>
using namespace std;
int main() {
   int n;
   long fact = 1,i;
   cout << "Enter a number: ";
   cin >> n;
   if (n==0)
   fact = 1;
   else { 
   for( i = 1; i <= n; i++) 
    {
    fact = fact * i;
    } }
    cout << "Factorial of number = " << fact;
    return 0;
}