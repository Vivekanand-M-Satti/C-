#include <iostream>
using namespace std;

class Binary
{
private:
    int i;
    int i1;

public:
    // constructor
    Binary(int f = 0, int j = 0) : i(f), i1(j)
    {
    }

    // operator overloading for Binary object
    void operator +(Binary b)
    {
        i += b.i;
        i1 += b.i1;
    }

    // operator overloading for integer
    void operator +(int a)
    {
        i += a;
        i1 += a;
    }

    void display()
    {
        cout << "i: " << i << " i1: " << i1 << endl;
    }
};

int main()
{
    Binary B1(11, 10), B2(-5, 11);

    int a = 10;

    B1 + a;
    B1.display();

    B1 + B2;
    B1.display();

    B2.display();

    return 0;
}