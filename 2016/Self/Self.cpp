/*
 *	Self.cpp
 *	Just messing around with this one. A program to write a program.
 *	Pointless really.
 *
 *	@author ProfessorOptics
 *	@version 1 21 May 2016
 * */

#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

void writeProgram(){
	ofstream file ("test.cpp");
	if (file.is_open()){
		file << "#include <iostream>" << endl;
		file << endl;
		file << "using namespace std;" << endl;
		file << endl;
		file << "main(){" << endl;
		file << "cout << \"Hello World\";" << endl;
		file << "cout << endl;";
		file << "}//end main";
	}
}//end function: writeProgram

void commConsole(){
	cout << "Compiling new script...\n";
	system("g++ ~/documents/Programming/Self/test.cpp");
	cout << "Compiling complete\n";
	cout << "running program...\n";
	system("~/documents/Programming/Self/a.out");
}

main(){
	writeProgram();
	commConsole();
}//end main
