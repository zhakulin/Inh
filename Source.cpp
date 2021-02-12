#include <iostream>

using namespace std;

class base {
private:
	int a;
	int b;
public:
	base() { cout << "Base constructor" << endl; a = 10; b = 20; }
	void showBase() { cout << "a = " << a << ", b =" << b << endl; }
	~base() { cout << "Base destructor" << endl; }
};

class derive : public base {
private:
	int c;
public:
	derive() { cout << "Derive constructor" << endl; c = 30; }
	void showDerive() { cout << "c = " << c << endl; }
	~derive() { cout << "Base destructor" << endl; }
};

int main() {
	base b;
	b.showBase();
	derive d;
	d.showDerive();


	return 0;
}