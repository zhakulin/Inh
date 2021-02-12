#include <iostream>

using namespace std;

class base {
private:  
	int a;
protected:
	int b;
public:
	int c;
	void showBase() { cout << "a = " << a << ", b =" << b << ", c = "; << c << endl; }
	void set() { a = 100; b = 100; c == 300; }
};

class derive : protected base {
private:

public:
	void setB(int val) { b = val; }
	void setC(int val) { c = val; }
	void show() { cout << "b = " << b << ", c = " << c << endl; }
};

class derive2 : public derive {
private:
	int d;
public:
	derive2() { cout << "Derive2 constructor" << endl; d = 100; }
	void showDerive() { cout << "d = " << d << endl; }
	~derive2() { cout << "Derive2 destructor" << endl; }
};

int main() {
	derive d;
	d.setB(2);
	d.setC(3);

	return 0;
}