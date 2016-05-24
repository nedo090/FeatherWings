/**
	StudentAppClean.cpp
	takes student information and prints it to file
	
	@author ProfessorOptics
	@version 1 (revised) 15 May 2016
*/
#include "WriteFile.h"

/*
 *	main function
 *
 *	@param none
 *	@return none
 * */
int main(){
	Student student;
	char ans;

	cout << "Do you want to write to file? (Y/N):";
	cin >> ans;
	cin.ignore();

	switch(ans){
		case 'Y': case 'y': default:{
			writeFile(student);
			break;
		}
		case 'N': case 'n':
			break;
	}

	return 0;
}//end function: main
