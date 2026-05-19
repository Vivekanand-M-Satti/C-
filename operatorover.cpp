#if 0
#include <iostream>
using namespace std;

class d
{
    int inches, feet;

public:
    d(int i = 0, int f = 0) : inches(i), feet(f)
    {
    }

    void display()
    {
        cout << inches << " " << feet << endl;
    }

    void operator +()
    {
        inches = -inches;
        feet = -feet;
    }
};

int main()
{
    d d1(11, 10), d2(8, 99), d3(8, 9);

    +d1,+d2,+d3;

    d1.display();
    d2.display();
    d3.display();

    return 0;
}
#endif
#if 0
#include <iostream>
using namespace std;

class Unary
{
private:
    int i;
    int i1;

public:
    // constructor
    Unary(int f = 0, int j = 0) : i(f), i1(j)
    {
    }

    void displayDistance()
    {
        cout << "i: " << i << " i1: " << i1 << endl;
    }

    // overloaded pre increment operator (++U1)
    void operator ++()
    {
        i += 2;
        i1 += 2;
    }

    // overloaded post increment operator (U1++)
    void operator ++(int)
    {
        i += 2;
        i1 += 2;
    }
};

int main()
{
    Unary U1(11, 10), U2(-5, 11);

    ++U1; // pre increment
    U1.displayDistance();

    U1++; // post increment
    U1.displayDistance();

    U2++; // post increment
    U2.displayDistance();

    return 0;
}
#endif 