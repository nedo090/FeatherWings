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
	std::ofstream file;

	file.open("test.txt");
	
	if(file.is_open()){
		file << "Student Number:\t" << student.getID() << std::endl;
		file << "Student Name:\t" << student.getName() << std::endl;
		file << "Student Sex:\t" << student.getSex() << std::endl;
		file << "Address:" << std::endl;
		file << "\tHouse Number:\t" << student.getHouseNumber() << std::endl;
		file << "\tStreet Name:\t" << student.getStreetName() << std::endl;
		file << "\tCity Name:\t" << student.getCityName() << std::endl;
		file << "\tPostal Code:\t" << student.getPostCode() << std::endl;

		for(int counter = 0; counter < student.getArraySize(); counter++){
			file << "Subject " << counter+1 << std::endl;
			file << "\tName:\t" << student.getSubjectName(counter) << std::endl;
			file << "\tMark:\t" << student.getMarks(counter) << std::endl;
			file << "\tGrade:\t" << student.getGrade(counter);
			file << std::endl;
		}
		std::cout << "File has been written" << std::endl;
	} else std::cout << "File failed to open" << std::endl;


	file.close();
}//end function: writeFile
