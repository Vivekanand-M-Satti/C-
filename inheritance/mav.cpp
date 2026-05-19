#include "013_example.h"

/* Mentor Constructor */
Mentor::Mentor(int id, string n, string a,
               string sub_taught, string rank)
    : EmertxeMember(id, n, a)
{
    this->sub_taught = sub_taught;
    this->rank = rank;
}

/* Candidate Constructor */
Candidate::Candidate(int id, string n, string a,
                     string course, int year)
    : EmertxeMember(id, n, a)
{
    this->course = course;
    this->year = year;
}

/* Base Class Function */
void EmertxeMember::display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
}

/* Mentor Function */
void Mentor::display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Subject Taught: " << sub_taught << endl;
    cout << "Rank: " << rank << endl;
}

/* Candidate Function */
void Candidate::display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Course: " << course << endl;
    cout << "Year: " << year << endl;
}