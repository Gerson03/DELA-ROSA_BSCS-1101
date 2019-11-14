#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void title();

void GetInfo(string [], string [], string [], string [], int [], int[]);
void display(string [], string [], string [], string [], int [], int[]);

int arraysize = 10;

int main()
{

    string lname[10];
    string fname[10];
    string email[10];
    string address[10];
    int age[10];
    int contact[10];


    GetInfo(lname, fname, email, address, age, contact);
    display(lname, fname, email, address, age, contact);



    return 0;
}






void GetInfo(string lname [], string fname[], string email[], string address[], int age [], int contact[])
{


    cout << "Enter your last name"<<endl;
    for (int i = 0; i <= arraysize -1; i++)
    {
        cout << "Last name : " << i +1 << ": ";
        cin >> lname [i];
    }
system ("CLS");
    cout << "Enter your first name"<<endl;
    for (int i = 0; i <= arraysize -1; i++)
    {
        cout << "First name : " << i +1 << ": ";
        cin >> fname [i];
    }
system ("CLS");
    cout << "Enter your address"<<endl;
    for (int i = 0; i <= arraysize -1; i++)
    {
        cout << "Address : " << i +1 << ": ";
        cin >> address [i];
    }
system ("CLS");
    cout << "Enter your email address"<<endl;
    for (int i = 0; i <= arraysize -1; i++)
    {
        cout << "Email : " << i +1 << ": ";
        cin >> email [i];
    }
system ("CLS");
    cout << "Enter your age"<<endl;
     for (int i = 0; i <= arraysize -1; i++)
    {
        cout << "Age : " << i +1 << ": ";
        cin >> age [i];
    }
system ("CLS");
    cout << "Enter your contact number3"<<endl;
     for (int i = 0; i <= arraysize -1; i++)
    {
        cout << "Contact : " << i +1 << ": ";
        cin >> email [i];
    }


}


void display(string lname[], string fname[], string email[], string address[], int age[], int contact[])
{
system ("CLS");
cout << "Last name|First name|Email|Address|Age|Contact number"<<endl;
    for (int i = 0; i <= arraysize -1; i++)
    {

        cout << lname [i] << "  " << fname [i]<< "  " <<email [i]<< "  " <<address [i] << "  " <<age [i] << "  " <<contact [i]<<endl;

    }

}


