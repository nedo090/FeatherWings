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
	void SetID(), SetName(), SetSex();
	void SetAddress(), SetHouseNum(), SetStreetName(),
		SetCityName(), SetPostCode(); 
	void SetSubject(), SetSubjName(int counter),
		SetMark(int counter), SetGrade(int counter);

	int getID(), getMarks(int counter), getArraySize();
	int getHouseNumber(), getPostCode();
	std::string getName(), getSubjectName(int counter);
	std::string getStreetName(), getCityName();
	char getSex(), getGrade(int counter);
};
#endif
