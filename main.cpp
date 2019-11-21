#include <iostream>
#include <stdlib.h>
using namespace std;

class Product
{
public:
    void addproduct(string ID, string prodname, string exp, string manu, int price);
    double display(void);
    string answer;

    Product();

private:
    string ID, prodname, exp, manu;
    int price;

};

Product :: Product(void)
{
    cout << "\t\t+++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout << "\t\t+          W E L C O M E  U S E R           +"<<endl;
    cout << "\t\t+++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout <<endl;

   do {
        {


    cout << "\t\tEnter product ID : ";
    cin >>ID;

    cout << "\t\tEnter product name : ";
    cin >>prodname;

    cout << "\t\tEnter product expiration date : ";
    cin >>exp;

    cout << "\t\tEnter product manufacturer : ";
    cin >>manu;

    cout << "\t\tEnter product price : ";
    cin >>price;
    cout <<endl;
        }
        cout << "\t\tDo you want to add product ?"<<endl;
        cin >>answer;
   }
        while (answer == "Y" || answer == "y");
}

double Product::display(void)
{
    cout << endl;
    cout << "\t\t+++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout << "\t\t+   P R O D U C T  I N F O R M A T I O N    +"<<endl;
    cout << "\t\t+++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout <<endl;
    cout << "\t\tEnter product ID : "<<ID<<endl;;
    cout << "\t\tEnter product name : "<<prodname<<endl;
    cout << "\t\tEnter product expiration date : "<<exp<<endl;
    cout << "\t\tEnter product manufacturer : "<<manu<<endl;
    cout << "\t\tEnter product price : "<<price<<endl;
    cout <<endl;
    cout << "\t\t+++++++++++++++++++++++++++++++++++++++++++++"<<endl;

}

int main()
{
    Product prod;

    prod.display();
    return 0;
}


