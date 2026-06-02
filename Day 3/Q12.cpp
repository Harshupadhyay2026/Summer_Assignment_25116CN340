// Topic: LCM of Two Numbers
#include <iostream>
using namespace std;
int main() {
    int a, b, max;
    cout << "Enter two numbers: ";
    cin >> a >> b;
   if (a > b){
    max = a ;
    }
   else{ 
    max = b ;
   }
    while (true) 
    {
     if (max % a == 0 && max % b == 0)
     {
     cout << "LCM = " << max;
     break;
     }
     max++;
    }
    return 0;
}