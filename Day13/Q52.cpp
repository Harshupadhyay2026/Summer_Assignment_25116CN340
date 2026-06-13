// Count Even and Odd Elements in Array
#include <iostream>
using namespace std;
void countEvenOdd(int arr[], int n)
{
int even = 0;
int odd = 0;
for(int i = 0; i < n; i++)
{
if(arr[i] % 2 == 0)
{
even++;
}
else
{
odd++;
}
}
cout << "Even Elements = " << even << endl;
cout << "Odd Elements = " << odd << endl;
}
int main()
{
int n;
cin >> n;
int arr[n];

for(int i = 0; i < n; i++)
{
cin >> arr[i];
}
countEvenOdd(arr, n);
return 0;
}