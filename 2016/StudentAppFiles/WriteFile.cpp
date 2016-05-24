/*
 *	WriteFile.cpp
 *	Writes the student info to a text file
 *
 *	@author ProfessorOptics
 *	@version 1 24 May 2016
 * */

#include "WriteFile.h"

/*
 *	Writes the student info to file
 *
 *	@param student of type Student
 *	@return none
 * */
void writeFile(Student student){
	ofstream file;

	string temp = "";

	string temp = "test" + counter + ".txt";
	file.open("test.txt");
	
	if(file.is_open()){
		file << "Student Number:\t" << student.getID() << endl;
		file << "Student Name:\t" << student.getName() << endl;
		file << "Student Sex:\t" << student.getSex() << endl;
		file << "Address:" << endl;
		file << "\tHouse Number:\t" << student.getHouseNumber() << endl;
		file << "\tStreet Name:\t" << student.getStreetName() << endl;
		file << "\tCity Name:\t" << student.getCityName() << endl;
		file << "\tPostal Code:\t" << student.getPostCode() << endl;

		for(int counter = 0; counter < student.getArraySize(); counter++){
			file << "Subject " << counter+1 << endl;
			file << "\tName:\t" << student.getSubjectName(counter) << endl;
			file << "\tMark:\t" << student.getMarks(counter) << endl;
			file << "\tGrade:\t" << student.getGrade(counter);
			file << endl;
		}
		cout << "File has been written" << endl;
	} else cout << "File failed to open" << endl;


	file.close();
}//end function: writeFile
