// using new we can to initialize the variable 
// here no need of the type cast  is requied  in the new 
// and the delete is used as the free to the delallocate the memory in the heap
// int *ptr=new int // here the 4 bytes of the memory is allocated to the ptr
// int *ptr=new int (10)// after allocating the memory we are initializing ptr as the 10;
//int *ptr=new int [3]{11,22,33};// after allocating the memory of the 12 bytes to ptr and after initialize 
// the 11,22,33  elements to the ptr ;
// new sizeof (int) == not possible 
// it always needs the data type to allocate the memroy 

#include
   class Employee
{
    public:
        int id;
        char * name;
        Employee(int i, char *s)
        {
            id = i;
            name = (char *) malloc (10);
            strcpy(name, s);
        }
        Employee(int i)
        {
            id = i;
        }
        ~Employee()
        {
            free(name);
        }
};

int main()
{
    Employee e1(10), e2(11, (char *) "Tingu");
    cout << e1.id << " " << e1.name << endl;
    cout << e2.id << " " << e2.name << endl;
    return 0;
}