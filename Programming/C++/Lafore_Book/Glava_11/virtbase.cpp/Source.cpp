//����������� ������� ������

class Parent
{
protected:
	int basedata;
};

class Child1 : virtual public Parent
{};

class Child2 : virtual public Parent
{};

class Grandchild :public Child1, Child2
{
public:
	int getdata()
	{
		return basedata;
	}
};

/*
���� �� ������������ vitrual public �� ����� Parent, �� ����������
�� ����� � ������ �� ���������� ���������� �� ������ Grandchild � 
��������� ������ ��������������� 
*/