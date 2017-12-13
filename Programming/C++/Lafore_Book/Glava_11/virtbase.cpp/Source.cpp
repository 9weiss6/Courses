//Виртуальные базовые классы

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
Если не использовать vitrual public на класс Parent, то компилятор
не знает к какому из подобъекту обратиться из класса Grandchild и 
возникает ошибка неоднозначности 
*/