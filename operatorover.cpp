#include<iostream>
using namespace std;
class d
{
    int inches ,feet;
    public:
    d(int i=0,f = 0):inches (i),feet(f);
    {

    }
    void display()
    {
        cout <<inches<<" "<<feet<<endl;
    }
}
void operator +()
{
    inches = -inches;
    feet= -feet;
}
main()
{
    d d1
}