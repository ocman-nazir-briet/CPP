#include "student.h"
#include<iostream>
using namespace std;
void student::setid(int ID)
{
	id = ID;						// this is setter which will set values
}
int student::getid()
{
	return id;						// this is getter which will get and then return values
}
void student::setmarks(double Marks)
{
	marks = Marks;					// this is also setter
}
double student::getmarks()
{
	return marks;					// this is also getter
}
void student::setname(char*n)		// setter for name, this is best way to write setter for array
{
	if (name != nullptr)			// if not null then delete it and de-allocate memory
		delete[]name;
	int size = strlen(n);
	name = new char[size];
	for (int i = 0; i < size; i++)
	{
		name[i] = n[i];
	}
	name[size] = '\0';
}

char* student::getname()			// this is the best way to write getter for array
{							
	char* temp=nullptr;
	int size = strlen(name);
	temp = new char[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = name[i];
	}
	temp[size] = '\0';
	return temp;
}
student::student(int r, char* n, double c)
{
	id = r;
	if (name != nullptr)			// if not null then de-allocate
		delete[]name;
	int size = strlen(n);
	name = new char[size];
	for (int i = 0; i < size; i++)
	{
		name[i] = n[i];
	}
	name[size] = '\0';

	marks = c;
}
student::student()
{
//	cout << "Deafult Constructor";
}
student :: ~student()
{
	//cout << "This is the Destructor";
	//this is used to display any message
	// and it is also used to de-ALLOCATE memory to avoid memory leakage
}

// Remember that destructor always calls in descending order