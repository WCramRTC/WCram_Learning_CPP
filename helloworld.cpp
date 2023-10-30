#include <iostream>
#include <stdio.h>
#include <conio.h>
// using namespace std; 

using std::string;
using std::cout;
using std::cin;

string myPhrase[4];

class Person {

    public:
        string _firstName;
        string _lastName;

};

int main() {

// Person me;
// me._firstName = "Will";
// me._lastName = "Cram";

// cout << me._firstName + " " + me._lastName;

int a = 10;
int &b = a;
int* bPoint = &b;
a = 15;

cout << bPoint << "\n";
cout << *bPoint << "\n";

// myPhrase[0] = "This";
// myPhrase[1] = "Is";
// myPhrase[2] = "My";
// myPhrase[3] = "Phrase";

//     for(string word : myPhrase) {
//         cout << word + " ";
//     }
    

    // string my_name;

    // cout << "Please enter your name :";
    // cin >> my_name;
    // cout << "Welcome " + my_name + ", I hope you are enjoying C++";

    // cout << "Hello World";

    return 0;
}

