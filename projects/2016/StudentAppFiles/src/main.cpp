/**
	main.cpp
		
	@author ProfessorOptics
	@version 1 24 May 2016
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

	std::cout << "Do you want to write to file? (Y/N):";
	std::cin >> ans;
	std::cin.ignore();

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
