//Виртуальные функции и класс person

#include <iostream>
using namespace std;

class person
{
protected:
	char name[40];
public:
	void getName()
	{
		cout << " Enter name: "; 
		cin >> name;
	}
	void putName()
	{
		cout << " Name: " << name << endl;
	}
	virtual void getData() = 0;
	virtual bool isOutsranding() = 0;
};

class student : public person
{
private:
	float gpa;
public:
	void getData()
	{
		person::getName();
		cout << " Sredniy Ball student";
		cin >> gpa;
	}
	bool isOutsranding()
	{
		return (gpa > 3.5) ? true : false;
	}
};

class professor : public person
{
private:
	int numPubs;
public:
	void getData()
	{
		person::getName();
		cout << " Count publications: ";
		cin >> numPubs;
	}
	bool isOutsranding()
	{
		return (numPubs > 100) ? true : false;
	}
};

int main()
{
	person* persPTR[100];		//Массив указателей на person
	int n = 0;
	char choice = 'a';
	
	do
	{
		cout << " Student (s) or Professor (p) ? ";
		cin >> choice;
		if (choice == 's')
			persPTR[n] = new student;
		else
			persPTR[n] = new professor;
		persPTR[n++]->getData();
		cout << " Add one person? (y/n)";
		cin >> choice;
	} while (choice == 'y');
	for (int j = 0; j < n; j++)
	{
		persPTR[j]->putName();
		if (persPTR[j]->isOutsranding())
			cout << " It's a perfect man! \n";
	}
	system("PAUSE");
	return 0;
}