#include<iostream>
using namespace std;
int add (int n1,int b2)
{
    return n1+b2;
}
double  add (int n1,double n3)
{
    return n1+n3;
}
double add (double n1 ,int b3)
{
    return n1*b3;
}
string add (string n1,string n2)
{
      return n1+n2;
}
int main()
{
    cout<<add(1,2)<<endl;
    cout <<add(8,8.1)<<endl;
    cout << add (8.99,9)<<endl;
    cout<<add("hello","mav");
}