#include <iostream>
using namespace std;

class Student
{
private:
	string name;
	int size = 0;
	int* mas ;
public:
	Student()
	{
		this->name = " ";
		
		this->mas=new int[size];
	}
	Student(string NAME)
	{
		this->name = NAME;
		
	}
	void add_mark(int mark)
	{
		int* new_mas = new int[size + 1];
		for (int i = 0; i < size; i++)
		{
			new_mas[i] = this->mas[i];

		}
		new_mas[size] = mark;
		delete[](mas);
		this->mas = new_mas;
		size++;

	}
	float get_aver()
	{
		float s = 0;
		for (int i = 0; i < this->size; i++)
		{
			s = s + this->mas[i];
		}
		s=s / this->size;
		return s;
	}
	int getSize()
	{
		return this->size;
	}
	friend ostream& operator<< (ostream& out, const Student& other)
	{
		out << other.name << " : ";

		for (int i = 0; i < other.size-1; i++)
		{
			out << other.mas[i] << ",";
		}
		out << other.mas[other.size - 1] << "\n";
		return out;
	}


};

