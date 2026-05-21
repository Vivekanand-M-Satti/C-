#if 0
#include<iostream>
using namespace std;
namespace global {
    int x=89;
}
int main()
{
     double x = 10.5;
     cout << global::x << endl;  
}
 #endif


#if 0
  #include<iostream>
   using namespace std;
   namespace first 
   {
    int x=59;
   }
   namespace sec{
    double x =9.99;
   }
   int main()
{
    double x = 10.5;
    cout << x << endl;
    cout << first::x << endl;
    cout << sec::x << endl;
    return 0;
}
#endif 
#if 0

 #include <iostream>
 using namespace std;
 namespace first
{
 int x = 10;
}
    namespace second
{
    double x = 12.120;
}
 int main()
{
    using namespace second;
    cout << x << endl;
    return  0;
}
#endif 
 #include <iostream> 
 using namespace std;
 namespace myspace {
    class employee
    {
        public:
        int id ;
        string name;
    };
 }
  class employee
  {
    public:
    int  id ;
    string name;
  };
  int main()
  {
    employee emp1;
    myspace ::employee emp2;
    emp1.name="mav ";
    emp2.name="uta";
    cout<<emp1.name<<endl;
    cout <<emp2.name<<endl;
    return 0;
  }
