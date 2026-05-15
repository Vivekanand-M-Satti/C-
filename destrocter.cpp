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
