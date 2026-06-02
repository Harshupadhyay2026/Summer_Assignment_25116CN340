//Check whether number is Palindrome

 #include <iostream>
 int main()
 {
 int n,temp,rev=0,rem;
 cout<<"enter the number";
 cin >> n;
 temp = n;
 while (n != 0) 
 {
 rem=n%10;
 rev=rev*10+rem;
 n=n/10;
 }
 if(temp ==rev)
 cout << "It is a Palindrome Number";
 else
 cout << "Not a Palindrome Number";
 return 0;
}