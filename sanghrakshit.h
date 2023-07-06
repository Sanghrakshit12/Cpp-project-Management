/*                                       CONCEPTS USED FOR BUILDING THIS PROJECT

                                          1 -> CLASSES AND OBJECTS
                                          2 -> INHERITANCE [SINGLE , MULTILEVEL , MULTIPLE , HIRARCHICAL]
                                          3 -> INLINE FUNCTION
                                          4 -> POLYMORPHISM [RUN TIME POLYMORPHISM , COMPILE TIME POLYMORPHISM]
                                          5 -> FUNCTION OVERLOADING
                                          6 -> OPERATOR OVERLOADING
                                          7 -> VIRTUAL FUNCTIONS
                                          8 -> ABSTRACT CLASS
                                          9 -> CONSTRUCTORS
                                         10 -> PURE VIRTUAL FUNCTIONS
                                         11 -> FRIEND FUNCTION
                                         12 -> POINTER TO DERIVED CLASS
                                         13 -> ARRAY OF OBJECTS
                                         14 -> KEYWORDS[new ,const etc]
*/

// STANDARD HEADER FIES

#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(); // FORWARD DECLARATIION

// <------ GLOBAL VARIABLES ---->
float final_cost = 0;
int i;
float dis = 0;
int ran = 9;
int ans;
string name_cust;
string mobnm;

// <----- CONST KEYWORD [DATA ITEM IN str CANNOT BE MODIFIED THROGHOUT THE PROGRAM]---->

const string str = "SSSxIT";
const float prize = 1000;

// <----BASE CLASSES---->

// <-----ABSTRACT CLASS WITH TWO PURE VIRTUAL FUNCTIONS------>

class Abstract
{
public:
    virtual void abstract1() = 0; // PURE VIRTUAL FUNCTIONS
    virtual void abstract2() = 0; // PURE VIRTUAL FUNCTIONS
};

class Laptops
{
public:
    // <-- DATA MEMBERS -->

    string M1[10];
    string M2[10];
    string Dell[10];
    string Hp[10];

    string Processor[10];
    string OS[10];

    string colours_m1[5];
    string colours_m2[5];

    float screenSize_m1[10];
    float screenSize_m2[10];

    int *unifiedMemory[10];
    int *Storage[10];
    int i;

    // <---- DEFAULT CONSTRUCTOR ---->

    Laptops()
    {
        for (i = 0; i < 10; i++)
        {
            M1[i] = " ";
            M2[i] = " ";
            colours_m1[i] = " ";
            colours_m2[i] = " ";

            screenSize_m1[i] = 0;
            screenSize_m2[i] = 0;

            unifiedMemory[i] = 0;
            Storage[i] = 0;

            Processor[10] = " ";
            OS[10] = " ";
        }
    }

    // <---- VIRTUAL FUNCTIONS ----->

    virtual void print_OS()
    {
        cout << "BASE CLASS LAPTOPS" << endl;
    }
    virtual void print_Processor()
    {
        cout << "BASE CLASS LAPTOPS" << endl;
    }
};

// DERIVED CLASS Macos

class Macos : public Laptops
{
public:
    // DATA MEMBERS

    friend class Cart_m1;
    int m1 = 2, m1_c = 2, m1_s = 3;
    float m2 = 4, m2_c = 4, m2_s = 4;

    string M1[10] = {"Apple MacBook Air 2020", "Apple MacBook Air 2022"};
    string M2[10] = {"Apple MacBook Pro 2020", "Apple MacBook Pro 2022", "Apple MacBook Pro 14", "Apple MacBook Pro 16 2021"};

    string colour_m1[5] = {"Space Grey", "Silver"};
    string colour_m2[5] = {"Space Grey", "Silver", "Midnight", "Starlight"};

    float screenSize_m1[10] = {13.3, 13.6, 14.2};
    float screenSize_m2[10] = {13.3, 13.6, 14.2, 16.2};
    int unifiedMemory[10] = {8, 16, 32};
    int Storage[10] = {256, 512, 1000};

    // MEMBER FUNCTIONS

    void abstract2()
    {
        cout << setw(250) << "PRESS 1 TO SEE MACBOOKS AVAILABLE             ---> ";
        cout << endl;
        cout << setw(250) << "PRESS 2 TO SEE THE COLOURS AVAILABLE          ---> ";
        cout << endl;
        cout << setw(250) << "PRESS 3 TO SEE THE SCREEN SIZES AVAILABLE     ---> ";
        cout << endl;
        cout << setw(250) << "PRESS 4 TO SEE THE UNIFIED MEMORY AVAILABLE   ---> ";
        cout << endl;
        cout << setw(250) << "PRESS 5 TO SEE THE INTERNAL STORAGE AVAILABLE ---> ";
        cout << endl;
        cout << setw(250) << "PRESS 6 TO ADD LAPTOP TO YOUR CART            ---> ";
        cout << endl;
        cout << setw(250) << "TO RETURN TO THE MAIN MENU PRESS 0            ---> ";
    }

    //    ----> FRIEND FUNCTIONS <----

    friend void printmac(Macos a);
    friend void mac(Macos a);
    friend void mac_colours(Macos a);
    friend void mac_Memory(Macos a);
    friend void mac_Storage(Macos a);
};

// HIRARCHICAL INHERITANCE

class Cart_m1 : public Macos
{
public:
    // DATA MEMBERS

    Macos p;
    string product_m1;
    string colour_m1;
    float size_m1;
    int mem_m1;
    int storage_m1;

    // MEMBER FUNCTIONS

    void setdata(int s, int color, int sz, int unimem_m1, int intstr_m1)
    {
        string product_m1 = p.M1[s - 1];
        string colour_m1 = p.colour_m1[color - 1];
        float size_m1 = p.screenSize_m1[sz - 1];
        int mem_m1 = p.unifiedMemory[unimem_m1 - 1];
        int storage_m1 = p.Storage[intstr_m1 - 1];
        cout << setw(250) << "----> ITEM ADDED TO CART <----" << endl;
        cout << setw(250) << "LAPTOP                     -> " << product_m1 << endl;
        cout << setw(250) << "COLOUR                     -> " << colour_m1 << endl;
        cout << setw(250) << "SIZE                       -> " << size_m1 << endl;
        cout << setw(250) << "UNIFIED MEMORY             -> " << mem_m1 << endl;
        cout << setw(250) << "INTERNAL STORAGE           -> " << storage_m1 << endl;
        cout << setw(250) << "----> ITEM ADDED TO CART <----" << endl;
        final_cost++;
    }
};

// HIRARCHICAL INHERITANCE

class Cart_m2 : public Macos
{
public:
    // DATA MEMBERS

    Macos p;
    string product_m2;
    string colour_m2;
    float size_m2;
    int mem_m2;
    int storage_m2;

    // MEMBER FUNCTIONS

    void setdata(int s, int color, int sz, int unimem_m2, int intstr_m2)
    {
        string product_m2 = p.M2[s - 1];
        string colour_m2 = p.colour_m2[color - 1];
        float size_m2 = p.screenSize_m2[sz - 1];
        int mem_m2 = p.unifiedMemory[unimem_m2 - 1];
        int storage_m2 = p.Storage[intstr_m2 - 1];
        cout << setw(250) << "----> ITEM ADDED TO CART <----" << endl;
        cout << setw(250) << "LAPTOP           -> " << product_m2 << endl;
        cout << setw(250) << "COLOUR           -> " << colour_m2 << endl;
        cout << setw(250) << "SIZE             -> " << size_m2 << endl;
        cout << setw(250) << "UNIFIED MEMORY   -> " << mem_m2 << endl;
        cout << setw(250) << "INTERNAL STORAGE -> " << storage_m2 << endl;
        cout << setw(250) << "----> ITEM ADDED TO CART <----" << endl;
        final_cost++;
    }
};

// DERIVED CLASS Windows

class Windows : public Laptops
{
public:
    friend class Cart_dell;

    // DATA MEMBERS

    string Processor[10] = {"i3", "i5", "i7"};
    string OS[10] = {"Windows 10", "Windows 11", "Windows 11 Pro"};

    // MEMBER FUNCTIONS

    void print_OS()
    {
        system("CLS");
        cout << setw(250) << "OPERATING SYSTEM AVAILABLE ARE ->" << endl;
        for (i = 0; i < 3; i++)
        {
            cout << setw(250) << "--> " << OS[i] << endl;
        }
        cout << endl;
    }
    void print_Processor()
    {
        system("CLS");
        cout << setw(250) << "PROCESSORS AVAILABLE ARE ->" << endl;
        for (i = 0; i < 3; i++)
        {
            cout << setw(250) << "--> " << Processor[i] << endl;
        }
        cout << endl;
    }

    void abstract1()
    {
        cout << endl;
        cout << setw(250) << "PRESS 1 TO SEE THE LAPTOPS AVAILABLE           ---> ";
        cout << endl;
        cout << setw(250) << "PRESS 2 TO SEE THE PROCESSOR AVAILABLE         ---> ";
        cout << endl;
        cout << setw(250) << "PRESS 3 TO SEE THE OPERATING SYSTEM AVAILABLE  ---> ";
        cout << endl;
        cout << setw(250) << "PRESS 4 TO ADD LAPTOP TO YOUR CART             ---> ";
        cout << endl;
        cout << setw(250) << "PRESS ANY OTHER KEY TO RETURN                  ---> ";
    }
};

// DERIVED CLASS Dell ------> MULTILEVEL INHERITANCE

class Dell : public Windows
{
public:
    int de = 4;
    string dell[10] = {"Dell XPS 13 Plus       ", "Dell Latitude 7330     ", "Dell Inspiron 14 2-in-1", "Dell Precision 7770    "};

    //    ----> FRIEND FUNCTIONS <----

    friend void dell_list(Dell q);
    friend void printwindows(Windows w);
    friend void print_Processor(Windows w);
};

// DERIVED CLASS HP ------> MULTILEVEL INHERITANCE

class HP : public Windows
{
public:
    int hpp = 4;
    string hp[10] = {"HP Omen 17           ", "HP Elite Dragonfly G3", "HP Spectre x360 16   ", "HP Envy 17           "};

    //    ----> FRIEND FUNCTION <----

    friend void printwindows(Windows w);
};

// DERIVED CLASS Cart_dell ------> MULTILEVEL INHERITANCE

class Cart_dell : public Dell
{
public:
    // DATA MEMBERS

    Windows w;
    Dell d;
    string lap;
    string pro;
    string Os;

    // MEMBER FUNCTIONS

    void setdata(int sr, int pr, int os)
    {
        lap = d.dell[sr - 1];
        pro = w.Processor[pr - 1];
        Os = w.OS[os - 1];
        cout << "----> ITEM ADDED TO CART <----" << endl;
        cout << lap << endl;
        cout << pro << endl;
        cout << Os << endl;
        final_cost++;
        cout << "----> ITEM ADDED TO CART <----" << endl;
        cout << setw(250) << "----> ITEM ADDED TO CART <----" << endl;
        cout << setw(250) << "LAPTOP             -> " << lap << endl;
        cout << setw(250) << "PROCESSOR          -> " << pro << endl;
        cout << setw(250) << "OPERATING SYSTEM   -> " << Os << endl;
        cout << setw(250) << "----> ITEM ADDED TO CART <----" << endl;
    }
};

// DERIVED CLASS Cart_hp ------> MULTILEVEL INHERITANCE

class Cart_hp : public HP
{
public:
    // DATA MEMBERS

    Windows w;
    HP h;
    string lap;
    string pro;
    string Os;

    // MEMBER FUNCTIONS

    void setdata(int sr, int pr, int os)
    {
        lap = h.hp[sr - 1];
        pro = w.Processor[pr - 1];
        Os = w.OS[os - 1];
        cout << "----> ITEM ADDED TO CART <----" << endl;
        cout << setw(250) << "----> ITEM ADDED TO CART <----" << endl;
        cout << setw(250) << "LAPTOP             -> " << lap << endl;
        cout << setw(250) << "PROCESSOR          -> " << pro << endl;
        cout << setw(250) << "OPERATING SYSTEM   -> " << Os << endl;
        cout << setw(250) << "----> ITEM ADDED TO CART <----" << endl;
    }
};

// WINDOWS MEMBER FUNCTIONS

// USING INLINE FUNCTION TO PREVENT FUNCTION CALL OVERHEAD

inline void dell_list(Dell q)
{
    system("CLS");
    cout << setw(250) << "LAPTOPS AVAILABLE ARE ->" << endl;
    for (i = 0; i < 4; i++)
    {
        cout << setw(250) << q.dell[i] << endl;
    }
    cout << endl;
}
inline void hp_list(HP q)
{
    system("CLS");
    cout << setw(250) << "LAPTOPS AVAILABLE ARE ->" << endl;
    for (i = 0; i < 4; i++)
    {
        cout << setw(250) << q.hp[i] << endl;
    }
    cout << endl;
}

void printdell(Dell d, int n)
{
    while (1)
    {
        d.abstract1();
        int f;
        cin >> f;
        if (f == 1)
        {
            dell_list(d);
        }
        else if (f == 2)
        {

            // POINTER TO DERIVED CLASS

            Laptops *ptr; // POINTER OF BASE CLASS
            Windows win;  // OBJECT OF DERIVED CLASS
            ptr = &win;   // POINTING BASE CLASS POINTER TO DERIVED CLASS

            ptr->print_Processor();
        }
        else if (f == 3)
        {
            // POINTER TO DERIVED CLASS

            Laptops *ptr; // POINTER OF BASE CLASS
            Windows win;  // OBJECT OF DERIVED CLASS
            ptr = &win;   // POINTING BASE CLASS POINTER TO DERIVED CLASS

            ptr->print_OS();
        }
        else if (f == 4)
        {
            system("CLS");
            int num;
            cout << setw(250) << "ENTER THE NUMBER OF ITEMS YOU WANT TO ADD" << endl;
            cin >> num;

            // ARRAY OF OBJECTS

            Cart_dell *item = new Cart_dell[num];

            for (i = 0; i < num; i++)
            {
                int s;
                cout << setw(250) << "SELECT A SERIAL NUMBER OF THE PRODUCT       --> ";
                cin >> s;
                cout << setw(250) << "SELECT THE PROCESSOR FOR YOUR PRODUCT       --> ";
                int PR;
                cin >> PR;
                cout << setw(250) << "SELECT THE OPERATING SYSTEM FOR YOUR PRODUCT--> ";
                int OS;
                cin >> OS;
                item->setdata(s, PR, OS);
                item++;
            }
        }
        else
        {
            break;
        }
    }
}

void printhp(HP h, int n)
{
    while (1)
    {
        h.abstract1();
        int G;
        cin >> G;
        if (G == 1)
        {
            hp_list(h);
        }
        else if (G == 2)
        {
            // POINTER TO DERIVED CLASS

            Laptops *ptr; // POINTER OF BASE CLASS
            Windows win;  // OBJECT OF DERIVED CLASS
            ptr = &win;   // POINTING BASE CLASS POINTER TO DERIVED CLASS

            ptr->print_Processor();
        }
        else if (G == 3)
        {

            // POINTER TO DERIVED CLASS

            Laptops *ptr; // POINTER OF BASE CLASS
            Windows win;  // OBJECT OF DERIVED CLASS
            ptr = &win;   // POINTING BASE CLASS POINTER TO DERIVED CLASS

            ptr->print_OS();
        }
        else if (G == 4)
        {
            system("CLS");
            int num;
            cout << setw(250) << "ENTER THE NUMBER OF ITEMS YOU WANT TO ADD" << endl;
            cin >> num;

            // ARRAY OF OBJECTS

            Cart_hp *item = new Cart_hp[num];

            for (i = 0; i < num; i++)
            {
                int s;
                cout << setw(250) << "SELECT A SERIAL NUMBER OF THE PRODUCT       --> ";
                cin >> s;
                cout << setw(250) << "SELECT THE PROCESSOR FOR YOUR PRODUCT       --> ";
                int PR;
                cin >> PR;
                cout << setw(250) << "SELECT THE OPERATING SYSTEM FOR YOUR PRODUCT--> ";
                int OS;
                cin >> OS;
                item->setdata(s, PR, OS);
                item++;
            }
        }
        else
        {
            break;
        }
    }
}

void printwindows()
{
    while (1)
    {
        system("CLS");
        cout << " <---------------------------------------------------------------------------------------------------------------------------------------------------------------------------->" << endl;
        cout << setw(250) << "PRESS 1 TO VISIT THE DELL PORTAL  " << endl;
        cout << setw(250) << "PRESS 2 TO VISIT THE HP PORTAL    " << endl;
        cout << setw(250) << "TO RETURN TO THE MAIN MENU PRESS 0" << endl;
        cout << setw(250) << "--> ENTER YOUR CHOICE -> ";
        int ch;
        cin >> ch;
        Dell d;
        HP h;
        if (ch == 0)
        {
            system("CLS");
            return;
        }
        switch (ch)
        {
        case 1:
            cout << endl;
            printdell(d, d.de);
            break;
        case 2:
            cout << endl;
            printhp(h, h.hpp);
            break;
        default:
            cout << "PRESS THE CORRECT KEY" << endl;
            break;
        }
    }
}

// MACBOOK MEMBER FUNCTIONS

// USING INLINE FUNCTION TO PREVENT FUNCTION CALL OVERHEAD

// OVERLOADING FUNCTION mac

inline void mac(Macos a, int m1)
{
    system("CLS");
    cout << setw(250) << "MACBOOKS AVAILABLE ARE ---->" << endl;
    for (i = 0; i < m1; i++)
    {
        cout << setw(250) << (i + 1) << " -> " << a.M1[i] << endl;
    }
    cout << endl;
}
inline void mac(Macos a, float m2)
{
    system("CLS");
    cout << setw(250) << "MACBOOKS AVAILABLE ARE ---->" << endl;
    for (i = 0; i < m2; i++)
    {
        cout << setw(250) << (i + 1) << " -> " << a.M2[i] << endl;
    }
    cout << endl;
}

// OVERLOADING FUNCTION mac_colours

inline void mac_colours(Macos a, int m1c)
{
    system("CLS");
    cout << setw(250) << "COLOURS AVAILABLE ARE ---->" << endl;
    for (i = 0; i < m1c; i++)
    {
        cout << setw(250) << (i + 1) << " -> " << a.colour_m1[i] << endl;
    }
    cout << endl;
}
inline void mac_colours(Macos a, float m2c)
{
    system("CLS");
    cout << setw(250) << "COLOURS AVAILABLE ARE ---->" << endl;
    for (i = 0; i < m2c; i++)
    {
        cout << setw(250) << (i + 1) << " -> " << a.colour_m2[i] << endl;
    }
    cout << endl;
}

// OVERLOADING FUNCTION mac_size

inline void mac_size(Macos a, int m1c)
{
    system("CLS");
    cout << setw(250) << "SIZE AVAILABLE ARE ---->" << endl;
    for (i = 0; i < m1c; i++)
    {
        cout << setw(250) << (i + 1) << " -> " << a.screenSize_m1[i] << " inch" << endl;
    }
    cout << endl;
}
inline void mac_size(Macos a, float m2c)
{
    system("CLS");
    cout << setw(250) << "SIZE AVAILABLE ARE ---->" << endl;
    for (i = 0; i < m2c; i++)
    {
        cout << setw(250) << (i + 1) << " -> " << a.screenSize_m2[i] << " inch" << endl;
    }
    cout << endl;
}
inline void mac_Memory(Macos a, int n)
{
    system("CLS");
    cout << setw(250) << "UNIFIED MEMORY AVAILABLE ARE ---->" << endl;
    for (i = 0; i < n; i++)
    {
        cout << setw(250) << (i + 1) << " -> " << a.unifiedMemory[i] << " GB" << endl;
    }
    cout << endl;
}
inline void mac_Storage(Macos a, int n)
{
    system("CLS");
    cout << setw(250) << "INTERNAL STORAGE AVAILABLE ARE ---->" << endl;
    for (i = 0; i < n; i++)
    {
        cout << setw(250) << (i + 1) << " -> " << a.Storage[i] << " GB" << endl;
    }
    cout << endl;
}

void printmac(Macos a)
{
    while (1)
    {
        cout << " <---------------------------------------------------------------------------------------------------------------------------------------------------------------------------->" << endl;
        cout << setw(250) << "SELECT THE PROCESSOR ->" << endl;
        cout << endl;
        cout << setw(250) << "1 -> M1" << endl;
        cout << setw(250) << "2 -> M2" << endl;
        cout << setw(250) << "TO RETURN TO THE MAIN MENU PRESS 0" << endl;
        int c;
        cout << setw(250) << "--> Enter Your Choice -> ";
        cin >> c;
        if (c == 0)
        {
            system("CLS");
            return;
        }
        switch (c)
        {
        case 1:
            while (1)
            {
                a.abstract2();
                int x;
                cin >> x;

                if (x == 1)
                {
                    mac(a, a.m1);
                }
                else if (x == 2)
                {
                    cout << endl;
                    mac_colours(a, a.m1_c);
                }
                else if (x == 3)
                {
                    cout << endl;
                    mac_size(a, a.m1_s);
                }
                else if (x == 4)
                {
                    cout << endl;
                    mac_Memory(a, 3);
                }
                else if (x == 5)
                {
                    cout << endl;
                    mac_Storage(a, 3);
                }
                else if (x == 6)
                {
                    system("CLS");
                    int num;
                    cout << setw(250) << "ENTER THE NUMBER OF ITEMS YOU WANT TO ADD--> ";
                    cin >> num;

                    // ARRAY OF OBJECTS

                    Cart_m1 *item = new Cart_m1[num];
                    for (i = 0; i < num; i++)
                    {
                        int s;
                        cout << endl;
                        cout << setw(250) << "SELECT A SERIAL NUMBER OF THE PRODUCT       --> ";
                        cin >> s;
                        cout << setw(250) << "SELECT A COLOUR FOR YOUR PRODUCT            --> ";
                        int color;
                        cin >> color;
                        cout << setw(250) << "SELECT A SIZE FOR YOUR PRODUCT              --> ";
                        int sz;
                        cin >> sz;
                        cout << setw(250) << "SELECT THE UNIFIED MEMORY FOR YOUR PRODUCT  --> ";
                        int unimem_m1;
                        cin >> unimem_m1;
                        cout << setw(250) << "SELECT THE INTERNAL STORAGE FOR YOUR PRODUCT--> ";
                        int intstr_m1;
                        cin >> intstr_m1;
                        item->setdata(s, color, sz, unimem_m1, intstr_m1);
                        item++;
                    }
                }
                else
                {
                    system("CLS");
                    break;
                }
            }
            break;
        case 2:
            while (1)
            {
                a.abstract2();
                int y;
                cin >> y;
                if (y == 1)
                {
                    cout << endl;
                    mac(a, a.m2);
                }
                else if (y == 2)
                {
                    cout << endl;
                    mac_colours(a, a.m2_c);
                }
                else if (y == 3)
                {
                    cout << endl;
                    mac_size(a, a.m2_s);
                }
                else if (y == 4)
                {
                    cout << endl;
                    mac_Memory(a, 3);
                }
                else if (y == 5)
                {
                    cout << endl;
                    mac_Storage(a, 3);
                }
                else if (y == 6)
                {
                    system("CLS");
                    int num;
                    cout << setw(250) << "ENTER THE NUMBER OF ITEMS YOU WANT TO ADD --> ";
                    cin >> num;

                    // ARRAY OF OBJECTS

                    Cart_m2 *item1 = new Cart_m2[num];
                    for (i = 0; i < num; i++)
                    {
                        int s;
                        cout << endl;
                        cout << setw(250) << "SELECT A SERIAL NUMBER OF THE PRODUCT       --> ";
                        cin >> s;
                        cout << setw(250) << "SELECT A COLOUR FOR YOUR PRODUCT            --> ";
                        int color;
                        cin >> color;
                        cout << setw(250) << "SELECT A SIZE FOR YOUR PRODUCT              --> ";
                        int sz;
                        cin >> sz;
                        cout << setw(250) << "SELECT THE UNIFIED MEMORY FOR YOUR PRODUCT  --> ";
                        int unimem_m2;
                        cin >> unimem_m2;
                        cout << setw(250) << "SELECT THE INTERNAL STORAGE FOR YOUR PRODUCT--> ";
                        int intstr_m2;
                        cin >> intstr_m2;
                        item1->setdata(s, color, sz, unimem_m2, intstr_m2);
                        item1++;
                    }
                }
                else
                {
                    system("CLS");
                    break;
                }
            }
            break;

        case 3:

            break;
        default:
            cout << setw(250) << "! PRESS THE CORRECT KEY !" << endl;
            break;
        }
    }
}
class calculator
{
private:
    float val;

public:
    calculator() : val(0)
    {
    }

    void getdata()
    {

        cout << setw(250) << "ENTER A RANDOM NUMBER -> ";
        cin >> val;
        val = val * ran;
        ran++;
    }
    void showdata()
    {
        cout << val << endl;
    }
    void showdata1()
    {
        cout << val << endl;
        if (ans == val && dis == 0)
        {
            system("CLS");
            dis = dis + 5;
            cout << setw(250) << "CONGRATULATIONS YOU GET A DISCOUNT OF " << dis << "%" << endl;
        }
        else
        {
            system("CLS");
            cout << setw(250) << "SORRY NO DISCOUNTS AVAILABLE FOR YOU" << endl;
        }
    }
    calculator operator+(calculator) const;
    calculator operator-(calculator) const;
    calculator operator*(calculator) const;
    calculator operator/(calculator) const;
};
// OVERLOADING + OPERATOR
calculator calculator::operator+(calculator arg2) const
{
    calculator temp;
    temp.val = val + arg2.val;
    return temp;
}

// OVERLOADING - OPERATOR

calculator calculator::operator-(calculator arg2) const
{
    calculator temp;
    temp.val = val - arg2.val;
    return temp;
}
// OVERLOADING * OPERATOR

calculator calculator::operator*(calculator arg2) const
{
    calculator temp;
    temp.val = val * arg2.val;
    return temp;
}

// OVERLOADING / OPERATOR

calculator calculator::operator/(calculator arg2) const
{
    calculator temp;
    temp.val = val / arg2.val;
    return temp;
}
void PLAY()
{
    calculator obj1, obj2, obj3;
    char ch;
    int choice;

    obj1.getdata();
    cout << setw(250) << "1st INTEGER : ";
    obj1.showdata();
    cout << endl;

    obj2.getdata();
    cout << setw(250) << "2nd INTEGER : ";
    obj2.showdata();
    cout << endl;

    cout << setw(250) << "Input choice as integer: 1: +,   2: -,   3: *,   4:/     ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:
        cout << setw(250) << "ENTER YOUR ANSWER ->";
        cin >> ans;
        obj3 = obj1 + obj2;
        cout << endl;
        break;
    case 2:
        cout << setw(250) << "ENTER YOUR ANSWER ->";
        cin >> ans;
        obj3 = obj1 - obj2;
        cout << endl;
        break;
    case 3:
        cout << setw(250) << "ENTER YOUR ANSWER ->";
        cin >> ans;
        obj3 = obj1 * obj2;
        cout << endl;
        break;
    case 4:
        cout << setw(250) << "ENTER YOUR ANSWER ->";
        cin >> ans;
        obj3 = obj1 / obj2;
        cout << endl;
        break;
    default:
        cout << setw(250) << "Invalid choice! " << endl;
    }

    cout << setw(250) << "Result ";
    obj3.showdata1();
    cout << endl;
}
int finalcost()
{
    system("CLS");
    int fk = final_cost * prize;
    float fcuk;
    fcuk = fk - (fk * (dis / 100));
    cout << "####################################################################################################################################" << endl;
    cout << setw(250) << "NAME OF COSTOMER              ->                  " << name_cust << endl;
    cout << setw(250) << "REGISTERED MOBILE NUMBER      ->                  " << mobnm << endl;
    cout << setw(250) << "NUMBER OF ITEMS IN YOUR CART  ->                  " << final_cost << endl;
    cout << setw(250) << "YOUR TOTAL BILL IS            ->                  " << fk << endl;
    cout << setw(250) << "YOU HAVE A DISCOUNT COUPON OF ->                  " << dis << " %" << endl;
    cout << setw(250) << "APPLYING COUPONS........                          " << endl;
    cout << setw(250) << "YOUR FINAL BILL IS            ->                  " << "$" << fcuk << endl;
    cout << endl;
    cout << "####################################################################################################################################" << endl;
    cout << endl;
    cout << setw(250) << "PRESS 1 TO CONTINUE SHOPPING                     " << endl;
    cout << setw(250) << "PRESS 0 TO TERMINATE THE PROGRAM ->              ";
    int sangu;
    cin >> sangu;
    return sangu;
}
int mainmenu()
{
    cout << setw(250) << "--> WELCOME TO CROMA DIGITAL STORE <--" << endl;
    while (1)
    {
        int c;
        cout << endl;
        cout << setw(250) << " 1 -> MACBOOKS                 " << endl;
        cout << setw(250) << " 2 -> WINDOWS                  " << endl;
        cout << setw(250) << " 3 -> PROCEED FOR INVOICE      " << endl;
        cout << setw(250) << " 4 -> PLAY AND GET DISCOUNTS   " << endl;
        cout << setw(250) << " 5 -> TERMINATE THE PROGRAM    " << endl;
        cout << setw(250) << "--> ENTER YOUR CHOICE -> ";
        cin >> c;
        cout << endl;
        switch (c)
        {
        case 1:
        {
            Macos m;
            printmac(m);
            break;
        }
        case 2:

        {
            Windows w;
            printwindows();
            break;
        }
        case 3:
        {
            int xxx = finalcost();
            if (xxx == 0)
            {
                return 0;
            }
            else
            {
                system("CLS");
            }
            break;
        }
        case 4:
            PLAY();
            break;
        case 5:
        {
            return 0;
        }
        default:
        {
            cout << "Press The Correct Key" << endl;
        }
        }
    }
}

bool IsloggedIn()
{
    char *password;
    password = new char[15];
    string username;
    int i;
    system("CLS");
    cout << setw(250) << "ENTER USERNAME :";
    cin >> username;

    cout << setw(250) << "ENTER PASSWORD :";
    for (i = 0; i < 4; i++)
    {
        password[i] = _getch();
        cout << '*';
    }
    password[i] = '\0';
    cout << endl;

    if (username == str && (strcmp(password, "NITJ") == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// MAIN FUNCTION

int croma()
{
    while (1)
    {
        int choice;
        cout << setw(250) << "PRESS 1 TO SIGN UP                : " << endl;
        cout << setw(250) << "PRESS 2 TO SIGN IN                : " << endl;
        cout << setw(250) << "PRESS 3 TO TERMINATE THE PROGRAM  : " << endl;
        cout << setw(250) << "PLEASE PRESS A KEY : ";
        cin >> choice;
        if (choice == 1)
        {
            cout << setw(250) << "PLEASE ENTER YOUR NAME      : ";
            cin >> name_cust;
            cout << setw(250) << "REGISTER YOUR MOBILE NUMBER : ";
            cin >> mobnm;
            cout << endl;
            system("CLS");
            cout << setw(250) << "THANK YOU FOR SIGNING UP MR " << name_cust << endl;

            cout << endl;
            cout << setw(250) << "--> YOU CAN NOW SIGN IN <--  " << endl;
            cout << setw(250) << "_YOUR USERNAME IS_ -> SSSxIT " << endl;
            cout << setw(250) << "_YOUR PASSWORD IS_ ->   NITJ " << endl;
            cout << endl;
        }

        else if (choice == 2)
        {

            bool status = IsloggedIn();

            if (!status)
            {
                cout << setw(270) << "--> INVALID USERNAME OR PASSWORD ! <--" << endl;
                cout << setw(270) << "--> PROGRAM TERMINATED !!!         <--" << endl;
                break;
            }
            else
            {
                cout << endl;
                cout << setw(250) << "-> SUCCESSFULLY LOGGED IN <-" << endl;
                cout << endl;
                system("CLS");
                mainmenu();
                break;
            }
        }
        else
        {
            return 0;
        }
    }
}