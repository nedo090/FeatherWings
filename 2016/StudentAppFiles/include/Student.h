#ifndef STUDENT_H
#define STUDENT_H

#define ARRAY_SIZE(array) sizeof(array)/sizeof(*array)

#include <string>
#include <iostream>
#include <fstream>

class Student{
protected:
	
	struct Address{
		int houseNum, postCode;
		std::string streetName, cityName;
	};

	struct Subject{
		std::string subjectName;
		int mark;
		char grade;
	};

	int ID;
	std::string name;
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
	std::string getName();
	char getSex();
	std::string getSubjectName(int counter);
	int getMarks(int counter);
	char getGrade(int counter);
	int getArraySize();
	int getHouseNumber();
	std::string getStreetName();
	std::string getCityName();
	int getPostCode();
};
#endif
