#include <iostream>
using namespace std;

class Sub_Work1
{
public:
	void Working1()
	{
		cout << "Doing Sub-Work1..." << endl;
	}
};
class Sub_Work2
{
public:
	void Working2()
	{
		cout << "Doing Sub-Work2..." << endl;
	}
};
class Sub_Work3
{
public:
	void Working3()
	{
		cout << "Doing Sub-Work3..." << endl;
	}
};
class Sub_Work4
{
public:
	void Working4()
	{
		cout << "Doing Sub-Work4..." << endl;
	}
};
class Work
{
private:
	Sub_Work1 w1;
	Sub_Work2 w2;
	Sub_Work3 w3;
	Sub_Work4 w4;
public:
	void Work1()
	{
		w1.Working1();
		w3.Working3();
	}
	void Work2()
	{
		w2.Working2();
		w4.Working4();
	}
};
int main()
{
	Work w;
	cout << "开始调用总工作1" << endl;
	w.Work1();

	cout << "开始调用总工作2" << endl;
	w.Work2();
	return 0;
}