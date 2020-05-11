//============================================================================
// Name        : Basic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

void mightGoWrong() {

	bool error1 = true;
	bool error2 = false;
	bool error3 = true;

	if(error1) {
		throw "Something went wrong.";
	}

	if(error2) {
		throw string("Something else went wrong.");
	}

	if (error3) {
		throw 55;
	}

}

void usesMightGoWrong() {
	mightGoWrong();
}



int main() {

	try {
		usesMightGoWrong();
	}
	catch(int e) {
		cout << "Error code: " << e << endl;
	}
	catch(char const * e) {  /* It's not clear why we need the word CONST */
		cout << "Error message: " << e << endl;  
	}
	catch(string &e) {
		cout << "string error message: " << e << endl;
	}

	cout << "Still running" << endl;

	return 0;
}
