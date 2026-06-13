// Find Sum and Average of Array
#include <iostream>
using namespace std;
int findSum(int arr[], int n)
{
int sum = 0;
for(int i = 0; i < n; i++)
{
sum += arr[i];
}
return sum;
}
double findAverage(int arr[], int n)
{
return (double)findSum(arr, n) / n;
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
cout << "Sum = " << findSum(arr, n) << endl;
cout << "Average = " << findAverage(arr, n);
return 0;
}