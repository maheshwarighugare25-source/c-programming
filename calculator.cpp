#include<iostream>
using namespace std;

class Calculator
{
private:
 int num1,num2;
 
public:
 void accept()
 {
   cout<<"Enter First Number:";
   cin>>num1;
   
   cout<<"Enter second Number:";
   cin>>num2;
 }
 
 void calculate()
{
  cout<<"\nAddition="<<num1+num2<<endl;
  cout<<"Substraction="<<num1-num2<<endl;
  cout<<"Multiplication="<<num1*num2<<endl;
  
  if(num2!=0)
  { 
    cout<<"Division="<<num1/num2<<endl;
    cout<<"Modulus="<<num1%num2<<endl;
  }
  else
  { 
    cout<<"Division and Modulus not posible(cannot divide by zero)"<<endl;
  }
 }
};

int main()
{
  Calculator c;
  
  c.accept();
  c.calculate();
  
  return 0;
}
