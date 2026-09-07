#include<iostream>
using namespace std;

class rectangle{
private:
    float length,breadth;
public:
    rectangle(){
       length=0;
       breadth=0;
    }
    rectangle(float l, float b){
        length=l;
        breadth=b;
    }
    rectangle(const rectangle &r) {
       length=r.length;
       breadth=r.breadth;
    }
    void displayarea(){
      float area=length*breadth;
      cout<<"length:"<<length<<endl;
      cout<<"breadth:"<<breadth<<endl;
      cout<<"area:"<<area<<endl;
      }
   };
   int main() {
   rectangle r1;
    cout<<"Default constructor:"<<endl;
   r1.displayarea();
   rectangle r2(10,5);
    cout<<"Parameterized constructor:"<<endl;
   r2.displayarea();
   rectangle r3(r2);
    cout<<"copy constructor:"<<endl;
   r3.displayarea();
   return 0;
   }
