#include <iostream>

using namespace std;
//Базовий клас
class Person
{
	string name;
	string firm;
	int salary;
public:
	void set_name(string nn)
	{
		name = nn;
	}
	string get_name()
	{
		return name;
	}

	void set_firm(string ff)
	{
		firm = ff;
	}
	string get_firm()
	{
		return firm;
	}

	void set_salary(int ss)
	{
		salary = ss;
	}
	int get_salary()
	{
		return salary;
	}
};
// Визначаємо клас службовця.
class official : public Person
{
	string position; // посада.
public:
	void set_position(string pp)
	{
		position = pp;
	}
	string get_position()
	{
		return position;
	}
	void show();
};

// Визначаємо клас робітника.
class worker : public Person
{
	int experience; // досвід роботи.
public:
	void set_experience(int ee)
	{
		experience = ee;
	}
	int get_experience()
	{
		return experience;
	}
	void show();
};

// Визначаємо клас інженера.
class engineer : public Person
{
	string invention; // винахід.
public:
	void set_invention(string ii)
	{
		invention = ii;
	}
	string get_invention()
	{
		return invention;
	}
	void show();
};


void official::show()
{
	cout << "official " << get_name() << " works for the company " << get_firm() << " as " << position << endl;
}

void worker::show()
{
	cout << "worker " << get_name() << " works for the company " << get_firm() << " experience " << experience << endl;
}

void engineer::show()
{
	cout << "engineer " << get_name() << " works for the company " << get_firm() << " invention " << invention << endl;
}

int main()
{
	official o;
	worker w;
	engineer e;

	o.set_name("qwerty");
	o.set_firm("ytrewq");
	o.set_salary(10000);
	o.set_position("Best");

	w.set_name("asdfgh");
	w.set_firm("hgfdsa");
	w.set_salary(1000);
	w.set_experience(25);

	e.set_name("zxcvbn");
	e.set_firm("nbvcxz");
	e.set_salary(100);
	e.set_invention("smth");


	o.show();
	w.show();
	e.show();
}
