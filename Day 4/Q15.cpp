// To Check Armstrong Number
#include <iostream>
using namespace std;
int main() {
   int n;
   cin >> n;
  int temp = n, sum = 0;
   while (temp > 0) {
    int digit = temp % 10;
     sum += digit * digit * digit;
     temp /= 10;
    }
   if (sum == n)
   cout << "Armstrong Number";
    else
   cout << "Not Armstrong Number";
    return 0;
}