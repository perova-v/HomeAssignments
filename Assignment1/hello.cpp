/*
 * Perova Varvara
 * st141846@student.sbpu.ru
 * My project number 1
 */

#include "hello.h"

#include <iostream>
#include <string>

using namespace std;

void myproject::sayHello() {
        string name;
        cout << "Hello, world!" << endl << endl;

	cout << "Enter a name (or \"exit\" to end the programm): " << endl;
	getline(cin, name);

	while (name != "exit")
	{
        cout << "Hello, " << name << "!" <<  endl << endl;
	cout << "Enter a name (or \"exit\" to end the programm): " << endl;
	getline(cin, name);
	}
}
