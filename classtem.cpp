#include<iostream>
using namespace std;
template<class T>
class Mytemplate
{
    T element;
    public:
    Mytemplate (T arg )
    {
        element=arg;
    }
    T divideBY2(){
        return element/2;
    }
};
int main(){
    Mytemplate<int>m(10);
    cout <<"division :"<<m.divideBY2()<<endl;
    Mytemplate<float>m1(10.50f);
    cout <<"division: "<<m1.divideBY2()<<endl;
    return 0;
}
