/**
	StudentAppClean.cpp
	takes student information and prints it to file
	
	@author Anthony Mans
	@version 1 (revised) 15 May 2016
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student{

private:
	static const int count = 1;

	struct Address{
		
		int houseNum;
		string streetName, cityName;

	};
	struct Subject{
	
		string subjectName;
		int mark;
		char grade;

	};
	
	int ID, subjCount = 7;
	string name;
	char sex;
	Subject subj[7];
	Address addr;
	
public:
	int setID(){
		cout << "Enter your student ID:\t";
		cin >> ID;
		cin.ignore();
		return ID;
	}

	string setName(){
		cout << "Enter your name:\t";
		getline(cin, name);
		return name;
	}
	
	char setSex(){
		cout << "Enter you sex:\t";
		cin >> sex;
		cin.ignore();
		return sex;
	}

	char setGrade(int c){
		
			if (subj[c].mark >= 90){
				return 'T';
			} else if (subj[c].mark >= 80){
				return 'A';
			} else if (subj[c].mark >= 70){
				return 'B';
			} else if (subj[c].mark >= 60){
				return 'C';
			} else if (subj[c].mark < 60){
				return 'F';
			}
	}

	void setSubject(){

		for (int c = 0; c < 7; c++){
			
			cout << "Subject " << c+1 << endl;
			cout << "\tName:\t";
			getline (cin, subj[c].subjectName);
			
			//Keeps returning random numbers from 3rd array index
			//I tried to combat this with subj[c].mark = 0, but
			//that didn't work
			do{
				cout << subj[c].mark << "\t" << c << endl;
				subj[c].mark = 0;

				cout << "\tMark:\t";

				cin >> subj[c].mark;
				cin.ignore();			
	
			} while (subj[c].mark < 0 || subj[c].mark > 100);
			
			subj[c].grade = setGrade(c);			
			cout << "\tGrade:\t" << subj[c].grade << endl;
		}
	}
	
	Student(){
		
		setID();
		setName();
		setSubject();

	}

};

int main(){

	Student student;
	
}//end unction: main
