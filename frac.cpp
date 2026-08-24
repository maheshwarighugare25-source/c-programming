#include <iostream>
using namespace std;

int main() {
int a,b,c,d,numrator,denominator;
cout<<"enter 1st fraction no:";
cin>>a;cout<<"/";cin>>b;
cout<<"enter 2nd fraction no:";
cin>>c;cout<<"/";cin>>d;
cout<<"the 1st fraction no is :"<<a<<"/"<<b;
cout<<"\nthe 2nd fraction no is :"<<c<<"/"<<d;
numrator=(a*d)+(c*b);
denominator=b*d;
cout<<"\nthe addition of fraction nos is :"<<numrator<<"/"<<denominator;
}

