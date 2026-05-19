#include "013_example.h"

// Please compile along with 013_example.cpp

int main()
{
    EmertxeMember m1(100, "Ringu", "Mangalore");

    Mentor m2(108, "Tingu", "Mysore",
              "Linux Systems", "Senior");

    Candidate c1(120, "Pingu", "Bangalore",
                 "ECEP", 2019);

    cout << "m1:--->\n";
    m1.display_profile();

    cout << "\nm2:--->\n";
    m2.display_profile();

    cout << "\nc1:--->\n";
    c1.display_profile();

    return 0;
}