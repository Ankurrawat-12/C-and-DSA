#include<bits/stdc++.h>

using namespace std;
class student
{
	string name;
	int age;
    string gender;
public:
	student(string name, int age, string gender)
	{
		this->name = name;
		this->age = age;
        this->gender = gender;
	}
	void display()
	{
		cout<< "Name:" << name << endl;
		cout<< "Age:" << age << endl;
		cout<< "Gender:" << gender << endl;
	}
	void * operator new(size_t size)
	{
		cout<< "Overloading new operator with size: " << size << endl;
		void * p = ::operator new(size);
		
		return p;
	}

	void operator delete(void * p)
	{
		cout<< "Overloading delete operator " << endl;
		free(p);
	}
};

int main()
{
	student * p = new student("Ankur", 18,"Male");

	p->display();
	delete p;
}
