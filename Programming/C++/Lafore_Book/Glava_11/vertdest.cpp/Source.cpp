//���� ������������� � ����������� ������������ 

#include <iostream>
using namespace std;

class Base
{
public:
	//~Base()			//�� ������ ������ Derv
	virtual ~Base()		//���������� �������� Derv � Base
	{
		cout << "Base deleted\n";
	}
};

class Derv : public Base
{
public:
	~Derv()
	{
		cout << "Derv deleted\n";
	}
};

int main()
{
	Base* pBase = new Derv;
	delete pBase;
	system("PAUSE");
	return 0;
}