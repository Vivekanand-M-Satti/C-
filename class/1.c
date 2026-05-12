#include<iostream>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    string address;

    void get_id(void)
{
    
    cout << "Enter ID No: ";
    cin > id;
}

void get_name (void)
{
    cout << "Enter Name: ";
    cin >> name;
}

void get_address (void)
{

cout << "Enter Address: ";
cin >> address;

}

};
int main()
{
    employee emp1;
    emp1.get_id();
    emp1.getname();
    emp1.get_address();

    cout<<emp1.id<<endl;
    cout<<emp1.name<<endl;
    cout<<emp1.address<<endl;
}