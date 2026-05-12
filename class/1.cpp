#include<iostream>
using namespace std;
class employee
{
public:
    int id;
    string name;
    string address;

    void get_id(void)
{
    
    cout << "Enter ID No: ";
    cin >> id;
}

void get_name (void)
{
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin,name);
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
    emp1.get_name();
    emp1.get_address();

    cout<<emp1.id<<endl;
    cout<<emp1.name<<endl;
    cout<<emp1.address<<endl;
}