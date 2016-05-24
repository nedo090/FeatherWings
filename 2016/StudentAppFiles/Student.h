#ifndef STUDENT_H
#define STUDENT_H

#define ARRAY_SIZE(array) sizeof(array)/sizeof(*array)

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Student{
protected:
	
	struct Address{
		int houseNum, postCode;
		string streetName, cityName;
	};

	struct Subject{
		string subjectName;
		int mark;
		char grade;
	};

	int ID;
	string name;
	char sex;
	Subject subj[7];
	Address addr;

public:
	Student();
	void SetID();
	void SetName();
	void SetSex();
	char SetGrade(int counter);
	void SetSubject();
	void SetAddress();

	int getID();
	string getName();
	char getSex();
	string getSubjectName(int counter);
	int getMarks(int counter);
	char getGrade(int counter);
	int getArraySize();
	int getHouseNumber();
	string getStreetName();
	string getCityName();
	int getPostCode();
};
#endif
