#include <iostream>
using namespace std;

class c {
public:
    int myNum;
    int myNum1;

    void getptr(int myNum, int myNum1)
    {
        int* ptr;
        int var = myNum;
        int foo = myNum1;
        ptr = &var;
        cout<<"ptr var: "<< var<<endl;
        cout<<"ptr foo: "<< foo<<endl;
        cout<<"ptr ptr: "<< ptr<<endl;
    }

};

int main() {
  c* myObj = new c();

  cout<<"Enter the numbers:";
  cin>>myObj->myNum;
  cout <<"Number1:"<< &myObj->myNum1 << "\n";

  cout<<"Enter the number 2:";
  cin>>myObj->myNum1;
  cout <<"Number2:"<< myObj->myNum1<<"\n";

  int* ptr;
  ptr = &myObj->myNum1;
  cout<<"Pointer:"<<ptr<<endl;

  ptr = &myObj->myNum;
  cout <<"Pointer to number:"<<ptr<<endl;

  myObj->getptr(myObj->myNum, myObj->myNum1);

  return 0;
}
