// To Find Largest Prime Factor
#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int largest = -1;
for (int i = 2; i <= n; i++) {
while (n % i == 0) {
bool prime = true;
for (int j = 2; j * j <= i; j++) {
if (i % j == 0) {
prime = false;
break;
}
}
if (prime) {
largest = i;
}
n /= i;
}
}
cout << largest;
return 0;
}