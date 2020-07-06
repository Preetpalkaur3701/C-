#include <iostream>
using namespace std;

class cat
{
public:
    int age;

    void DoSetAge(cat *pcat, int mage)
{
    pcat->age = mage;

}
};

//*pcat points to the object of the cat class
/*void DoSetAge(cat *pcat, int mage)
{
    pcat->age = mage;

}*/

int main ()
{
    cat *mcat = new cat;
    mcat->age = 0;

    cout<<"Age of Cat before: "<<mcat->age<< "at" <<mcat<<endl;

    mcat->DoSetAge(mcat, 20);

    cout<<"Age of Cat after: "<<mcat->age + 1 << "at"<<mcat<<endl;

}
