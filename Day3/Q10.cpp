// Prime Numbers in a Range
#include <iostream>
using namespace std;
int main() {
   int start, end;
   cout << "Enter start and end: ";
   cin >> start >> end;
   cout << "Prime numbers are: ";
   for (int i = start; i <= end; i++) {
   if (i <= 1)
   continue;
   int Prime = 1 ;
   for (int j = 2; j <= i / 2; j++) 
   {
    if (i % j == 0) {
    Prime = 0;
     break;
    }
    }
  if (prime ==1)
  { 
    cout << i << " ";
   }
   return 0;
}