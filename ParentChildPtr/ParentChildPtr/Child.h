#pragma once

#include <string>
#include <iostream>

using namespace std;

class Child {
public:
	Child();
	Child(const Child& other);
	Child& operator=(const Child& child);

	friend ostream& operator<<(ostream& os, const Child& child);

	string name;
};
