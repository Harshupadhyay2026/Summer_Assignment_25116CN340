//To print repeated character pattern
#include <iostream>
using namespace std;
int main() {
int n=5;
for (int i = 1; i <= n; i++) {
for (int j = 0; j < i; j++) {
cout << (char)('A' + i - 1);
}
cout << "\n";
}
return 0;
}