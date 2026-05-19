#ifndef EXAMPLE_013_H
#define EXAMPLE_013_H

#include <iostream>
#include <cstring>

using namespace std;

/* Base Class */
class EmertxeMember
{
protected:
    int id;
    string name;
    string address;

public:
    EmertxeMember(int id, string n, string a)
    {
        this->id = id;
        name = n;
        address = a;
    }

    void display_profile(void);
};

/* Derived Class : Candidate */
class Candidate : public EmertxeMember
{
    string course;
    int year;

public:
    Candidate(int id, string n, string a,
              string course, int year);

    void display_profile(void);
};

/* Derived Class : Mentor */
class Mentor : public EmertxeMember
{
    string sub_taught;
    string rank;

public:
    Mentor(int id, string n, string a,
           string sub_taught, string rank);

    void display_profile(void);
};

#endif