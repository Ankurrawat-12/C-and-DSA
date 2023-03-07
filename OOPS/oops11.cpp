#include<bits/stdc++.h>
using namespace std;


class Test {
	int objNo;
	static int objCnt;

public:
	Test()
	{
	objNo = ++objCnt;
	}
	~Test()
	{
	--objCnt;
	}
	void printObjNumber(void)
	{
		cout << "object number :" << objNo << "\n";
	}
	static void printObjCount(void)
	{
		cout << "count:" << objCnt<< "\n";
	}
};
int Test::objCnt;

int main()
{
	Test test1, test2;
	Test::printObjCount();

	Test test3;
	Test::printObjCount();

    Test test4;
	Test::printObjCount();

	test1.printObjNumber();
	test2.printObjNumber();
	test3.printObjNumber();
	test4.printObjNumber();
    
	return 0;
}
