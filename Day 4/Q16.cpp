// Q16: Print Armstrong Numbers in a Range
#include <iostream>
using namespace std;
int main() 
   {
   int n;
   cin >> n;
   for (int num = 1; num <= n; num++) {
      int temp = num, sum = 0;
     while (temp > 0) {
      int digit = temp % 10;
      sum += digit * digit * digit;
      temp /= 10;
     }
   if (sum == num)
      cout << num << " ";
    }
    return 0;
}