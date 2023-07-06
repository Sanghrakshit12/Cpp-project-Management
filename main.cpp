#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include "samendra.h"
#include "sarthak.h"
#include "sanghrakshit.h"
using namespace std;

int main()
{
    int choice;
    cout << endl
         << setw(75) << "Welcome to the TATA Group" << endl;
    cout << "\nWhich page would you like to visit:\n1. TATA Motors (Samendra)\n2. TITAN (Sarthak)\n3. Croma Digital Store (Sanghrakshit)\n\nYour choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        motors();
        break;
    case 2:
        watches();
        break;
    case 3:
        croma();
        break;
    }
    return 0;
}