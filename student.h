#pragma once
class student{
public:
	void setid(int);
	void setname(char*);
	void setmarks(double);

	int getid();
	char* getname();
	double getmarks();
	student();
	student(int, char*, double);
	~student();
private:
	int id;
	char* name = nullptr;
	double marks;
};

