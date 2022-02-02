#include"Student.h"
#include <string>

#include <fstream>
class Group
{
private:
	Student* students;
	int size=0;
public:

	Group()
	{
		this->size = 0;
		this->students = new Student[size];
		
	}
	void add_student(Student& other)
	{
		Student* new_students = new Student[size + 1];
		for (int i = 0; i < this->size; i++)
		{
			new_students[i] = this->students[i];

		}
		new_students[size] = other;
		delete[](students);
		this->students = new_students;
		this->size++;
	}
	
	void read_file()
	{
		string path = "Data2.txt";
		ifstream fin;
		fin.open(path);

		if (!fin.is_open())
		{
			cout << " Error!";
		}
		else
		{
			string str;
			while (getline(fin, str))
			{

				size_t pos = 0;
				pos = str.find(':');
				string name = str.substr(0, pos);
				str.erase(0, pos + 1);
				Student exampl(name);
				string sup = ",";
				while ((pos = str.find(sup)) != string::npos)
				{
					exampl.add_mark(stoi(str.substr(0, pos)));
					str.erase(0, pos + sup.length());
				}
				exampl.add_mark(stoi(str.substr(0, pos)));
				this->add_student(exampl);

			}
			cout << " Чтение произведено! \n";
		}
		fin.close();

	}

	
	void write_fail()
	{
		string path = "Data2.txt";
		ofstream fout;
		fout.open(path, ofstream::out);
		if (!fout.is_open())
		{
			cout << " Error!";
		}
		else
		{

			for (int i = 0; i < size; i++)
			{

				fout << this->students[i] ;
			}
			cout << " Запись произведена! \n";
		}
		fout.close();
	}

	void print()
	{
		for (int i = 0; i < size; i++)
		{

			cout << this->students[i];
		}
	}
};

