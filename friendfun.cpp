#include<iostream>
using namespace std;
class em{
    int id ;
    string name ;
    string address;
    public :
    em()
    {
        id = 89;
        name ="VIvek";
        address="bengaluru";
    }
    friend void printf_mac(em emp1);
}
void printf_mac(em emp1)
{
    cout << emp1.id << endl;
    cout << emp1.name<<endl;
    cout << emp1.address<<endl;

}
 