#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

class TITAN
{
private:
    const string ceo = "Bhaskar Bhat";

public:
    virtual void printClass()
    {
        cout << "\tYou are in TITAN Class.\n" << endl;
    }
    friend void display(TITAN &tt);
    friend void bill(TITAN &tt);
};

class type : public TITAN
{ // inheritance
public:
    void printClass()
    {
        cout << "\tYou are in Luxury Type Class." << endl;
    }
    // luxury collection
    string model[10] = {"Edge Ceramic  ", "Xylys         ", "Edge mechanical", "Nebula        "};
    string product_id[20] = {"NQ1696KC01", "9295DM04  ", "1810NP01  ", "5033DM01  "};
    int num_of_device[20] = {6969, 9295, 1810, 5033};
    int price[20] = {28999, 33000, 219500, 525000};
    string extra[20] = {"UNISEX", "MEN", "MEN", "WOMEN"};
    friend void display(type &type);
    friend void bill(type &type);
    // friend void operator + (type &type);
};
class analog : public type
{ // multilevel inheritance
public:
    string model[20] = {"Titan Neo Iv", "Titan Youth", "Titan Karishma"}; // Titan Neo Economy
    string product_id[20] = {"NL1805NM01", "NL2480SM02", "NL1774BM01"};   // NN1802SL04
    int num_of_device[20] = {1805, 2480, 1774};                           // 1802
    int price[20] = {7145, 2795, 3365};                                   // 1995
    string extra[20] = {"MEN", "WOMEN", "MEN"};
    friend void display(analog &ana);
    friend void bill(analog &ana);
    
};

class digital : public type
{ // multiple inheritance
public:
    string model[20] = {"SF Atomic", "SF Arcade", "SF Essentials"};
    string product_id[20] = {"77097PP04", "77100PP03", "77112PP04"};
    int num_of_device[20] = {7709, 7710, 7711};
    int price[20] = {900, 700, 745};
    string extra[20] = {"MEN", "MEN", "UNISEX"}; // friend function
    friend void bill(digital &digi);
    
};
class chronograph : public type
{
public:
    string model[20] = {"Regalia         ", "SOctane         ", "Octane Signature"};
    string product_id[20] = {"NN9308BM01", "NM90047KM03", "NP1761KP01"};
    int num_of_device[20] = {9308, 9004, 1761};
    int price[20] = {11020, 9475, 10475};
    string extra[20] = {"MEN", "MEN", "MEN"};
    friend void bill(chronograph &chrono);
    
};
class smart : public type
{
public:
    string model[20] = {"Traq      ", "Smart Pro ", "Talk Smart"};
    string product_id[20] = {"75004PP02", "90149AP01", "90156AP04"};
    int num_of_device[20] = {7500, 9014, 9015};
    int price[20] = {17999, 11959, 9995};
    string extra[20] = {"UNISEX", "UNISEX", "UNISEX"};
    friend void bill(smart &smart);
    friend void operator+(smart &smart);
};
class men : public TITAN
{
public:
    string model[10] = {"Titan Neo", "SF Arcade", "Smart 2  "};
    string product_id[10] = {"NL1805NM01", "77100PP03", "90149AP01"};
    double num_of_device[20] = {1805, 7710, 9014};
    int price[20] = {8000, 750, 12000};
    string extra[20] = {"Analog     ", "Digital    ", "Smart watch"};
    friend void bill(men &m);
    friend void operator+(men &m);
};
class women : public TITAN
{
public:
    string model[10] = {"Titan Youth", "Raga Viva  ", "Smart 2    "};
    string product_id[10] = {"NL2480SM02", "NN2603WL01", "90149AP01"};
    int num_of_device[20] = {2480, 2603, 9014};
    int price[20] = {2795, 4385, 12000};
    string extra[20] = {"Analog-Metal  ", "Analog-Leather", "Smart watch   "};
    friend void bill(women &wo);
    friend void operator+(women &wo);
};

inline void display(TITAN &tt)
{
    cout << tt.ceo << endl;
}
inline void display(type &type)
{
    for (int t = 0; t < 4; t++)
    {
        cout << type.num_of_device[t] << "\t" << type.model[t] << "\t" << type.product_id[t] << "\t" << type.price[t] << "\t" << type.extra[t] << endl;
    }
}
inline void display(analog &ana)
{
    for (int t = 0; t < 3; t++)
    {
        cout << ana.num_of_device[t] << "\t" << ana.model[t] << "\t" << ana.product_id[t] << "\t" << ana.price[t] << "\t" << ana.extra[t] << endl;
    }
}
inline void display(digital &digi)
{
    for (int t = 0; t < 3; t++)
    {
        cout << digi.num_of_device[t] << "\t" << digi.model[t] << "\t" << digi.product_id[t] << "\t" << digi.price[t] << "\t" << digi.extra[t] << endl;
    }
}
inline void display(chronograph &chrono)
{
    for (int t = 0; t < 3; t++)
    {
        cout << chrono.num_of_device[t] << "\t" << chrono.model[t] << "\t" << chrono.product_id[t] << "\t" << chrono.price[t] << "\t" << chrono.extra[t] << endl;
    }
}
inline void display(smart &smart)
{
    for (int t = 0; t < 3; t++)
    {
        cout << smart.num_of_device[t] << "\t" << smart.model[t] << "\t" << smart.product_id[t] << "\t" << smart.price[t] << "\t" << smart.extra[t] << endl;
    }
}
inline void display(men &m)
{
    for (int t = 0; t < 3; t++)
    {
        cout << m.num_of_device[t] << "\t" << m.model[t] << "\t" << m.product_id[t] << "\t" << m.price[t] << "\t" << m.extra[t] << endl;
    }
}
inline void display(women &wo)
{
    for (int t = 0; t < 3; t++)
    {
        cout << wo.num_of_device[t] << "\t" << wo.model[t] << "\t" << wo.product_id[t] << "\t" << wo.price[t] << "\t" << wo.extra[t] << endl;
    }
}

void customerdata(string name, long int ph)
{
    cout << "\n\t\t                        Customer Invoice                  " << endl;
    cout << "\t\t	//////////////////////////////////////////////////////" << endl;
    cout << setw(5) << "\t\t	| Invoice No. :"
         << "------------|"
         << "#" << rand() * 23 << setw(5) << endl;
    cout << setw(5) << "\t\t	| Customer Name:"
         << "-----------|" << name << endl;
    cout << setw(5) << "\t\t	| Phone no :"
         << "---------------|" << ph << endl;
}
void bill(analog &ana, int i)
{
    cout << setw(5) << "\t\t	| Product ID :"
         << "-------------|" << ana.product_id[i] << endl;
    cout << setw(5) << "\t\t	| Model name :"
         << "-------------|" << ana.model[i] << endl;
    cout << setw(5) << "\t\t	| Code no :"
         << "----------------|" << ana.num_of_device[i] << endl;
    cout << setw(5) << "\t\t	| Price :"
         << "------------------|" << ana.price[i] << endl;
    cout << setw(5) << "\t\t	| GST :"
         << "--------------------|" << 67 << " $" << endl;
    cout << "\t\t	 ___________________________________________________" << endl;
    cout << "\n";
    cout << setw(5) << "\t\t	| Total Amount is :"
         << "-------|" << setw(10) << ana.price[i] + 67 << " $"
         << " |" << endl;
}
void bill(digital &digi, int i)
{
    cout << setw(5) << "\t\t	| Product ID :"
         << "-------------|" << digi.product_id[i] << endl;
    cout << setw(5) << "\t\t	| Model name :"
         << "-------------|" << digi.model[i] << endl;
    cout << setw(5) << "\t\t	| Code no :"
         << "----------------|" << digi.num_of_device[i] << endl;
    cout << setw(5) << "\t\t	| Price :"
         << "------------------|" << digi.price[i] << endl;
    cout << setw(5) << "\t\t	| GST :"
         << "--------------------|" << 67 << " $" << endl;
    cout << "\t\t	 ___________________________________________________" << endl;
    cout << "\n";
    cout << setw(5) << "\t\t	| Total Amount is :"
         << "-------|" << setw(10) << digi.price[i] + 67 << " $"
         << " |" << endl;
}
void bill(chronograph &chrono, int i)
{
    cout << setw(5) << "\t\t	| Product ID :"
         << "-------------|" << chrono.product_id[i] << endl;
    cout << setw(5) << "\t\t	| Model name :"
         << "-------------|" << chrono.model[i] << endl;
    cout << setw(5) << "\t\t	| Code no :"
         << "----------------|" << chrono.num_of_device[i] << endl;
    cout << setw(5) << "\t\t	| Price :"
         << "------------------|" << chrono.price[i] << endl;
    cout << setw(5) << "\t\t	| GST :"
         << "--------------------|" << 67 << " $" << endl;
    cout << "\t\t	 ___________________________________________________" << endl;
    cout << "\n";
    cout << setw(5) << "\t\t	| Total Amount is :"
         << "-------|" << setw(10) << chrono.price[i] + 67 << " $"
         << " |" << endl;
}
void bill(smart &smart, int i)
{
    cout << setw(5) << "\t\t	| Product ID :"
         << "-------------|" << smart.product_id[i] << endl;
    cout << setw(5) << "\t\t	| Model name :"
         << "-------------|" << smart.model[i] << endl;
    cout << setw(5) << "\t\t	| Code no :"
         << "----------------|" << smart.num_of_device[i] << endl;
    cout << setw(5) << "\t\t	| Price :"
         << "------------------|" << smart.price[i] << endl;
    cout << setw(5) << "\t\t	| GST :"
         << "--------------------|" << 67 << " $" << endl;
    cout << "\t\t	 ___________________________________________________" << endl;
    cout << "\n";
    cout << setw(5) << "\t\t	| Total Amount is :"
         << "-------|" << setw(10) << smart.price[i] + 67 << " $"
         << " |" << endl;
}
void bill(men &m, int i)
{
    cout << setw(5) << "\t\t	| Product ID :"
         << "-------------|" << m.product_id[i] << endl;
    cout << setw(5) << "\t\t	| Model name :"
         << "-------------|" << m.model[i] << endl;
    cout << setw(5) << "\t\t	| Code no :"
         << "----------------|" << m.num_of_device[i] << endl;
    cout << setw(5) << "\t\t	| Price :"
         << "------------------|" << m.price[i] << endl;
    cout << setw(5) << "\t\t	| GST :"
         << "--------------------|" << 67 << " $" << endl;
    cout << "\t\t	 ___________________________________________________" << endl;
    cout << "\n";
    cout << setw(5) << "\t\t	| Total Amount is :"
         << "-------|" << setw(10) << m.price[i] + 67 << " $"
         << " |" << endl;
}
void bill(women &wo, int i)
{
    cout << setw(5) << "\t\t	| Product ID :"
         << "-------------|" << wo.product_id[i] << endl;
    cout << setw(5) << "\t\t	| Model name :"
         << "-------------|" << wo.model[i] << endl;
    cout << setw(5) << "\t\t	| Code no :"
         << "----------------|" << wo.num_of_device[i] << endl;
    cout << setw(5) << "\t\t	| Price :"
         << "------------------|" << wo.price[i] << endl;
    cout << setw(5) << "\t\t	| GST :"
         << "--------------------|" << 67 << " $" << endl;
    cout << "\t\t	 ___________________________________________________" << endl;
    cout << "\n";
    cout << setw(5) << "\t\t	| Total Amount is :"
         << "-------|" << setw(10) << wo.price[i] + 67 << " $"
         << " |" << endl;
}
void output()
{
    cout << "\t\t	 ___________________________________________________" << endl;
    cout << "\t\t	 # This is a computer generated invoce and it does not" << endl;
    cout << "\t\t	 require an authorised signture #" << endl;
    cout << " " << endl;
    cout << "\t\t	//////////////////////////////////////////////////////" << endl;
    cout << "\t\t	You are advised to pay up the amount before due date." << endl;
    cout << "\t\t	Otherwise penelty fee will be applied" << endl;
    cout << "\t\t	//////////////////////////////////////////////////////" << endl;
    
}

int watches()
{
    TITAN tt;
    TITAN *ttt;
    men m;
    women wo;
    type type;
    analog ana, ana1, ana2;
    digital digi;
    chronograph chrono;
    smart smart;

y:
    system("cls");
    int choice;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n1. Company details\n2. Type collection\n3. Men's collection\n4. Women's collection\n5. Exit\nYour choice:";
    cin >> choice;
    switch (choice)
    {
    case 1:
        ttt = &type;
        tt.printClass(); // base class (virtual function)
        cout << "\t\tAbout:\n CEO of TITAN Watches pvt Lt.= ";
        display(tt);
        system("pause");
        system("cls");
        goto y;
        break;
    case 2:
        cout << "\t\tYou are in Type collection category." << endl;
        char keep;
    m:
        system("cls");
        int type_choice;
        cout << "1. Analog\t2. Digital\t3. Chronograph\t4. Smart watches\nYour choice:";
        cin >> type_choice;
        switch (type_choice)
        {

        case 1:
            system("cls");
            //ttt->printClass(); // accessing virtual function
            cout << "Analog watches :\n"
                 << endl;
            display(ana);
            // ana1+ana2;
            char buy_this;
            cout << "\nYOU WANT TO BUY THIS (Y/N) :";
            cin >> buy_this;
            if (buy_this == 'y' || buy_this == 'Y')
            {
                //++ana;
                display(ana);
                cout << "Welcome to customer portal." << endl;
                string name;
                long long int ph;
                cout << "Enter your name :";
                cin >> name;
                cout << "Enter phone no. :";
                cin >> ph;
                int i;
                cout << "Which one want to buy :";
                cin >> i;
                customerdata(name, ph);
                bill(ana, i);
                output();
                // Creation of ofstream class object
                ofstream fout;
                fout.open("customer.txt", ios::app);
                // Execute a loop If file successfully opened
                while (fout)
                {
                    // Read a Line from standard input
                    getline(cin, name);
                    fout << name << endl;
                    break;
                }
                // Close the File
                fout.close();
                goto q;
            }
            break;
        case 2:
            system("cls");
            cout << "Digital watches :\n"
                 << endl;
            display(digi);
            char buy;
            cout << "\nYOU WANT TO BUY THIS (Y/N) :";
            cin >> buy;
            if (buy == 'y' || buy == 'Y')
            {
                cout << "Welcome to customer portal." << endl;
                string name;
                long long int ph;
                cout << "Enter your name :";
                cin >> name;
                cout << "Enter phone no. :";
                cin >> ph;
                int i;
                cout << "Which one want to buy :";
                cin >> i;
                customerdata(name, ph);
                bill(digi, i);
                output();
                // Creation of ofstream class object
                ofstream fout;
                fout.open("customer.txt", ios::app);
                // Execute a loop If file successfully opened
                while (fout)
                {
                    // Read a Line from standard input
                    getline(cin, name);
                    fout << name << endl;
                    break;
                }
                // Close the File
                fout.close();
                goto q;
            }
            break;
        case 3:
            system("cls");
            cout << "Chronograph watches :\n"
                 << endl;
            display(chrono);
            char buy_that;
            cout << "\nYOU WANT TO BUY THIS (Y/N) :";
            cin >> buy_that;
            if (buy_that == 'y' || buy_that == 'Y')
            {
                cout << "Welcome to customer portal." << endl;
                string name;
                long long int ph;
                cout << "Enter your name :";
                cin >> name;
                cout << "Enter phone no. :";
                cin >> ph;
                int i;
                cout << "Which one want to buy :";
                cin >> i;
                customerdata(name, ph);
                bill(chrono, i);
                output();
                // Creation of ofstream class object
                ofstream fout;
                fout.open("customer.txt", ios::app);
                // Execute a loop If file successfully opened
                while (fout)
                {
                    // Read a Line from standard input
                    getline(cin, name);
                    fout << name << endl;
                    break;
                }
                // Close the File
                fout.close();
                goto q;
            }
            break;
        case 4:
            system("cls");
            cout << "Smart watches :\n"
                 << endl;
            display(smart);
            char buy_me;
            cout << "\nYOU WANT TO BUY THIS (Y/N) :";
            cin >> buy_me;
            if (buy_me == 'y' || buy_me == 'Y')
            {
                cout << "Welcome to customer portal." << endl;
                string name;
                long long int ph;
                cout << "Enter your name :";
                cin >> name;
                cout << "Enter phone no. :";
                cin >> ph;
                int i;
                cout << "Which one want to buy :";
                cin >> i;
                customerdata(name, ph);
                bill(smart, i);
                output();
                // Creation of ofstream class object
                ofstream fout;
                fout.open("customer.txt", ios::app);
                // Execute a loop If file successfully opened
                while (fout)
                {
                    // Read a Line from standard input
                    getline(cin, name);
                    fout << name << endl;
                    break;
                }
                // Close the File
                fout.close();
                goto q;
            }
            break;
        default:
            cout << "OOPS! Invalid choice" << endl;
            system("pause");
            system("cls");
            break;
        }
        cout << "Want to continue:(y/n)   :";
        cin >> keep;
        if (keep == 'y')
        {
            goto m;
        }
        goto y;
        break;

    case 3:
        system("cls");
        cout << "\t You are in Men's collection category.\n";
        display(m);
        char buy_myself;
        cout << "\nYOU WANT TO BUY THIS (Y/N) :";
        cin >> buy_myself;
        if (buy_myself == 'y' || buy_myself == 'Y')
        {
            cout << "Welcome to customer portal." << endl;
            string name;
            long long int ph;
            cout << "Enter your name :";
            cin >> name;
            cout << "Enter phone no. :";
            cin >> ph;
            int i;
            cout << "Which one want to buy :";
            cin >> i;
            customerdata(name, ph);
            bill(m, i);
            output();
            // Creation of ofstream class object
            ofstream fout;
            fout.open("customer.txt", ios::app);
            // Execute a loop If file successfully opened
            while (fout)
            {
                // Read a Line from standard input
                getline(cin, name);
                fout << name << endl;
                break;
            }
            // Close the File
            fout.close();
            goto q;
        }
        goto y;
        break;

    case 4:
        system("cls");
        cout << "\t You are in Women's collection category.\n";
        display(wo);
        char buy_them;
        cout << "\nYOU WANT TO BUY THIS (Y/N) :";
        cin >> buy_them;
        if (buy_them == 'y' || buy_them == 'Y')
        {
            cout << "Welcome to customer portal." << endl;
            string name;
            long long int ph;
            cout << "Enter your name :";
            cin >> name;
            cout << "Enter phone no. :";
            cin >> ph;
            int i;
            cout << "Which one want to buy :";
            cin >> i;
            customerdata(name, ph);
            bill(wo, i);
            output();
            // Creation of ofstream class object
            ofstream fout;
            fout.open("customer.txt", ios::app);
            // Execute a loop If file successfully opened
            while (fout)
            {
                // Read a Line from standard input
                getline(cin, name);
                fout << name << endl;
                break;
            }
            // Close the File
            fout.close();

            goto q;
        }
        goto y;
        break;

    case 5:
        cout << "Thank you " << endl;
        exit(0);
        break;

    default:
        cout << "Invalid" << endl;
        goto y;
        break;
    }
q:
    return 0;
}