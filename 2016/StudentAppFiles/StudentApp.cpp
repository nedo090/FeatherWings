/**
	StudentApp.cpp
	takes student information and prints it to file
	
	@author Anthony Mans
	@version 1 13 May 2016
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Address{
	int	houseNum;
	string	streetName,
		cityName;
};

struct Subject{
	string	subName;
	int	mark;
	char	grade;
};

struct Student{
	int	stuNum,
		subjCount = 7;
	string	name;
	char	sex;
	Subject	subj[7];
	Address	addr;
};

/**

*/
char CheckGrade(Student student[], int counter, int c){

	bool T = student[counter-1].subj[c-1].mark >= 90,
	     A = student[counter-1].subj[c-1].mark >= 80,
	     B = student[counter-1].subj[c-1].mark >= 70,
	     C = student[counter-1].subj[c-1].mark >= 60,
	     F = student[counter-1].subj[c-1].mark <  60;
		
	if(T) return 'T';	
	else if(A) return 'A';
	else if(B) return 'B'; 		
	else if(C) return 'C';
	else if(F) return 'F';

}//end function: CheckGrade

/**

*/
void GetSubjectDetails(Student student[], int counter, int c){

	do{
		cout << "Subject " << c << ": " << endl;
		cout << "\tName:\t";
		getline(cin, student[counter-1].subj[c-1].subName);
	
		cout << "\tMark:\t";
		cin >> student[counter-1].subj[c-1].mark;
		cin.ignore();
		
		if ( student[counter-1].subj[c-1].mark < 0
			|| student[counter-1].subj[c-1].mark > 100)
			cout << "Invalid Entry, please enter a number from 0 to 100" << endl;
		
		else{
			student[counter-1].subj[c-1].grade = CheckGrade(student, counter, c);

			cout << "\tGrade:\t";
			cout << student[counter-1].subj[c-1].grade << endl;
		}
	}while(student[counter-1].subj[c-1].mark < 0
		|| student[counter-1].subj[c-1].mark > 100);
}//end function: GetSubjectDetails

/**

*/
void GetStudentDetails(Student student[], int counter){

	cout << "Enter the details for student number: " << counter << endl;
	cout << "Student Number:\t";
	cin >> student[counter-1].stuNum;

	if (cin.fail()){
		cout << "That isn't and integer!" << endl;
		exit(0);
	}	

	cin.ignore();

	cout << "Student Name:\t";
	getline(cin, student[counter-1].name);

	cout << "Sex:\t";
	cin >> student[counter-1].sex;
	cin.ignore();

	for (int c = 1; c <= 7; c++){
		GetSubjectDetails(student, counter, c);
	}//end for

	cout << "Address:" << endl;
	cout << "\tHouse Number:\t";
	cin >> student[counter-1].addr.houseNum;
	cin.ignore();

	cout << "\tStreet Name:\t";
	getline(cin, student[counter-1].addr.streetName);

	cout << "\tCity:\t";
	getline(cin, student[counter-1].addr.cityName);
	cout << endl;
}//end function: GetStudentDetails

/**

*/
int GetStudentCount(){

	int	count;

	cout << "How many students?" << endl;
	cin >> count;
	cout << endl;

	return count;
}

/**
 
*/
void WritetoFile(Student student[], int counter){

	ofstream studentFile ("test.txt"/*, ios::app*/);
	
	if (studentFile.is_open()){

		studentFile << "STUDENT NUMBER:\t" << student[counter-1].stuNum;
		studentFile << "\tStudent Name:\t" << student[counter-1].name << endl;
		studentFile << "Student Sex:\t" << student[counter-1].sex;
		studentFile << "\tStudent Address:" << endl;
		
		studentFile << "\tHome Number:\t" << student[counter-1].addr.houseNum << endl;
		studentFile << "\tStreet Name:\t" << student[counter-1].addr.streetName << endl;

		studentFile << "\t\t\tCity:\t" << student[counter-1].addr.cityName << endl;
		studentFile << "Subjects:" << endl;

		for (int c = 1; c <= 7; c++){
			studentFile << "\tSubject " << c << endl;
			studentFile << "\t\tName:\t"
				<< student[counter-1].subj[c-1].subName << endl;
			studentFile << "\t\tMark:\t"
				<< student[counter-1].subj[c-1].mark << endl;
			studentFile << "\t\tGrade:\t"
				<< student[counter-1].subj[c-1].grade << endl;
		}

		studentFile << endl;
		studentFile.close();
	} else cout << "File couldn't open" << endl;
}//end function: WritetoFile

/*
 
*/
int main(){

	int counter = 1,
	    studentCount = GetStudentCount();
	char ans;
	Student student[studentCount];

	while (counter <= studentCount){
		if (studentCount > 0){
			GetStudentDetails(student, counter);
			
			cout << "Write to file? {Y/N}\t";
			cin >> ans;
			cin.ignore();

			switch (ans){
				case 'y': case 'Y':
					WritetoFile(student, counter);
					cout << "written to file" << endl << endl;
					break;
				case 'n': case 'N': default:
					break;
			}
			counter++;
		} else{
			cout << "No new information to be written." << endl << "Good bye";
			break;
		}
	}//end while	
}//end function: main
