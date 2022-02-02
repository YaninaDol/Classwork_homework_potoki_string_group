#include"Group.h"

int main()
{
	setlocale(LC_ALL, "rus");

	Group B7;
	B7.read_file();
	B7.print();

	string name;
	cout << " Введите имя студента : ";
	cin >> name;
	Student first(name);
	int size;
	cout << "Введите  количество оценок студента: ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		int mark;
		cout << " Введите оценку студента : ";
		cin >> mark;
		first.add_mark(mark);
	}
	
	B7.add_student(first);


	string name2;
	cout << "\n\n Введите имя студента : ";
	cin >> name2;
	Student second(name2);
	int size2;
	cout << "Введите  количество оценок студента: ";
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		int mark2;
		cout << " Введите оценку студента : ";
		cin >> mark2;
		second.add_mark(mark2);
	}

	B7.add_student(second);

	B7.print();
	B7.write_fail();

}

