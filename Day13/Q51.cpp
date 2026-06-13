// Find Largest and Smallest Element in Array
#include <iostream>
using namespace std;
int findLargest(int arr[], int n)
{
int largest = arr[0];
for(int i = 1; i < n; i++)
{
if(arr[i] > largest)
{
largest = arr[i];
}
}
return largest;
}
int findSmallest(int arr[], int n)
{
int smallest = arr[0];
for(int i = 1; i < n; i++)
{
if(arr[i] < smallest)
{
smallest = arr[i];
}
}

return smallest;
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
cout << "Largest = " << findLargest(arr, n) << endl;
cout << "Smallest = " << findSmallest(arr, n);
return 0;
}