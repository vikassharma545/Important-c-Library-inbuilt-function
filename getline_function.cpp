#include <iostream>
#include<map>
using namespace std;

//macro definitions
#define MAX_NAME_LEN 50    // Maximum len of your name can't be more than 60
#define MAX_ADDRESS_LEN 50 // Maximum len of your address can't be more than 120
#define MAX_ABOUT_LEN 250  // Maximum len of your profession can't be more than 250

int main()
{
    char y_name[MAX_NAME_LEN], y_address[MAX_ADDRESS_LEN], about_y[MAX_ABOUT_LEN];

    cout << "Enter your name: ";
    cin.getline(y_name, MAX_NAME_LEN);
    cin.getline(y_name, MAX_NAME_LEN);
    


//  After cin>>t, there is a newline remaining in the stream, then the newline will be assigned
//  to s, so cout<<s seems to print nothing(Actually, it prints a newline).
//  add cin.ignore(100, '\n'); before first getline to ingore the newline.
//  otherwise it give error
// like:-

    // string s;            //----> other way to use getline function
    // int a;

    // cin>>a;
    // cin.ignore() ---> without this it give error
    // getline(cin,s);
    // cout<<s;

    cout << "Enter your City: ";
    cin.getline(y_address, MAX_ADDRESS_LEN);

    cout << "Enter your profession (Max word limit 200): ";
    cin.getline(about_y, MAX_ABOUT_LEN);

    cout << "\nEntered details are:\n\n";
    cout << "Name: " << y_name << endl;
    cout << "Address: " << y_address << endl;
    cout << "Profession is: " << about_y << endl;
}