#include <iostream>
#include <string>

#include "SLList.h"


using namespace std;

template <typename T>
bool testEqual(std::string description, T actual, T expected)
{
	cout << description << "... ";

	bool succeeded = actual == expected;

	if (succeeded) {
		cout << "OK" << endl;
	}
	else {
		cout << "FAIL" << endl << "\tExpected: " << expected << ", Actual: " << actual << endl;
	}

	return succeeded;
}

int main() {
	testEqual<int>("Test SLListNode<int> default constructor", SLListNode<int>().data, 0);
	testEqual<string>("Test SLListNode<string> default constructor", SLListNode<string>().data, "");
	testEqual<int>("Test SLListNode<int> constructor with initial value", SLListNode<int>(42).data, 42);
}