#include<iostream>
using namespace std;
int main()
 {
   int n,temp,rev=0;
   cout<<"enter a number:";
   cin>>n;
   temp=n;
   while (n!=0)
   {
     rev=rev*10+n % 10;
   }
   if(temp==rev)
     cout<<"palindrome number";
   else
     cout<<"not a palindrome number";
     return 0;
  }
  
