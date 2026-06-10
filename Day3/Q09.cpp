// To find numbet is prime or not
#include <iostream>
using namespace std;
  int main() {
   int n;
   int Prime = 1;
   cout << "Enter a number: ";
   cin >> n;
   if (n <= 1)
   Prime = 0 ;
   for (int i = 2; i <= n / 2; i++)
   {
   if (n % i == 0)
   {
    Prime = 0;
    break;
    }
    }
   if (Prime==1)
    cout << n << " is a Prime Number";
    else
    cout << n << " is Not a Prime Number";
    return 0;
}