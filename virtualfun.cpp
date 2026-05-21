#if 0
#include <iostream>
using namespace std;

class Baseclass
{
public:
    virtual void disp()
    {
        cout << "Function of the parent class";
    }
};

class derivedclass : public Baseclass
{
public:
    void disp()
    {
        cout << "Function of the child class";
    }
};

int main()
{
    Baseclass *obj = new derivedclass();

    obj->disp();

    return 0;
}
#endif 
