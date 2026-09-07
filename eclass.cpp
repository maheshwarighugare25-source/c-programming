#include <iostream>
using namespace std;

class employee{
private:
   int id;
   float salary;
public:
   employee() {
      id=0;
      salary=0.0;
    }
    employee(int i,float s){
          id=i;
          salary=s;
    }
    employee(const employee &e){
       id=e.id;
       salary=e.salary;
    }
    void display(){
       cout<<"employee id:"<<id<<endl;
       cout<<"employee salary:"<<endl;
       }
   };
   int main(){
   employee e1;
   cout<<"default constructor:"<<endl;
   e1.display();
   employee e2(101,50000);
   cout<<"Paramaterized constructor:"<<endl;
   e2.display();
   employee e3(e2);
   cout<<"copy constructor:"<<endl;
   e3.display();
   return 0;
  }
