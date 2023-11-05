#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

class Player {

    private:

        string _name;
        int _age;

    public:

        Player() {
            _name = "";
            _age = 0;
        }

        Player(string name, int age) {
            _name = name;
            _age = age;
        }

        string getName() {
            return _name;
        }

        int getAge() {
            return _age;
        }

};