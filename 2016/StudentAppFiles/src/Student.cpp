/*
 *	Student.cpp
 *	collects the students information.
 *
 *	@author ProfessorOptics
 *	@version 1 (clean) 24 May 2016
 * */

#include "Student.h"

/*
 *	Default constructor
 *
 *	@param none
 *	@return none
 * */
Student::Student(){
	SetID();
	SetName();
	SetSex();
	SetAddress();
	SetSubject();
}//end Student Constructor, default

/*
 *	Sets ID to users input
 *
 *	@param none
 *	@return none
 * */
void Student::SetID(){
	std::cout << "Enter your student ID:\t";
	std::cin >> ID;
	std::cin.ignore();
}//end function: SetID

/*
 *	Sets the students name to users input
 *
 *	@param none
 *	@return none
 * */
void Student::SetName(){
	std::cout << "Enter your name:\t";
	std::getline(std::cin, name);
}//end function: SetName

/*
 *	sets the students sex to user's input
 *
 *	@param none
 *	@return none
 * */
void Student::SetSex(){
	std::cout << "Enter your sex:\t\t";
	std::cin >> sex;
	std::cin.ignore();
}//end function: SetSex

/*
 *	gets the grade based on the users mark input
 *
 *	@param int
 *	@return char T, A, B, C or D
 * */
char Student::SetGrade(int counter){
	bool T = subj[counter].mark >= 90;
	bool A = subj[counter].mark >= 80;
	bool B = subj[counter].mark >= 70;
	bool C = subj[counter].mark >= 60;
	bool F = subj[counter].mark < 60;

	if(T) return 'T';
	else if(A) return 'A';
	else if(B) return 'B';
	else if(C) return 'C';
	else if(F) return 'F';
		
}//end function: SetGrade

/*
 *	sets the info for each subject based on user's input
 *
 *	@param none
 *	@return none
 * */
void Student::SetSubject(){
	bool isOutsideRange = false;

	for(int counter = 0; counter < ARRAY_SIZE(subj); counter++){

		std::cout << "Subject " << counter + 1 << std::endl;
		std::cout << "\tSubject Name:\t";
		std::getline(std::cin, subj[counter].subjectName);

		do{
			std::cout << "\tMarks:\t\t";
			std::cin >> subj[counter].mark;
			std::cin.ignore();

			isOutsideRange = subj[counter].mark < 0 || subj[counter].mark > 100;
			
			if(isOutsideRange){
				std::cout << "Invalid Entry!" << std::endl;
			}
		} while(isOutsideRange);

		subj[counter].grade = SetGrade(counter);
		std::cout << "\tGrade:\t\t" << subj[counter].grade << std::endl;
	}

}//end function: SetSubject

/*
 *	sets the address information based on user's input
 *
 *	@param none
 *	@return none
 * */
void Student::SetAddress(){
	std::cout << "Address:" << std::endl;
	std::cout << "\tHouse Number:\t";
	std::cin >> addr.houseNum;
	std::cin. ignore();

	std::cout << "\tStreet Name:\t";
	std::getline(std::cin, addr.streetName);

	std::cout << "\tCity Name:\t";
	std::getline(std::cin, addr.cityName);

	std::cout << "\tPostal Code:\t";
	std::cin >> addr.postCode;
	std::cin.ignore();
	
}//end function: SetAddress

/*
 *	gets the house number from address data structure
 *
 *	@param none
 *	@return int addr.houseNum
 * */
int Student::getHouseNumber(){
	return addr.houseNum;	
}//end function: getHouseNumber

/*
 *	gets the street name from address struct
 *
 *	@param none
 *	@return string addr.streetName
 * */
std::string Student::getStreetName(){
	return addr.streetName;
}//end function: getStreetName

/*
 *	gets the city name from address struct
 *
 *	@param none
 *	@return string addr.cityName
 * */
std::string Student::getCityName(){
	return addr.cityName;
}//end function: getCityName

/*
 *	gets the post code from address struct
 *
 *	@param none
 *	@return int addr.postCode
 * */
int Student::getPostCode(){
	return addr.postCode;
}//end function: getPostCode

/*
 *	gets the ID from student object
 *
 *	@param none
 *	@return int ID
 * */
int Student::getID(){
	return ID;
}//end function: getID

/*
 *	gets the name from the student object
 *
 *	@param none
 *	@return string name
 * */
std::string Student::getName(){
	return name;
}//end function: getName

/*
 *	gets the sex from student object
 *
 *	@param none
 *	@return char sex
 * */
char Student::getSex(){
	return sex;
}//end function: getSex

/*
 *	gets the subject name from subject struct
 *
 *	@param int counter
 *	@return string subj[counter].subjectName
 * */
std::string Student::getSubjectName(int counter){
	return subj[counter].subjectName;
}//end function: getSubjectName

/*
 *	gets the marks from subject struct
 *
 *	@param int counter
 *	@return int subj[counter].mark
 * */
int Student::getMarks(int counter){
	return subj[counter].mark;
}//end function: getMarks

/*
 *	gets the grade from subject struct
 *
 *	@param int counter
 *	@return cha subj[counter].grade
 * */
char Student::getGrade(int counter){
	return subj[counter].grade;
}//end function: getGrade

/*
 *	gets the array size for subject object array
 *
 *	@param none
 *	@return int ARRAY_SIZE(subj)
 * */
int Student::getArraySize(){
	return ARRAY_SIZE(subj);
}//end function: getArraySize
