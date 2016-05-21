/* *
 *	Interest.cpp
 *	A basic programme to calculate interest over a period of years
 *	defined by the user.
 *
 *	@author ProfessorOptics
 *	@version 1 21 May 2016 *
 * */

#include<iostream>

using namespace std;

double calculateInterest(double capital, double interest){
	double totalInterest = (capital/100)*interest;
	return totalInterest;
}//end function: calculateInterest

double getCapital(double newCapital = 0){
	double capital = newCapital;
	
	if (capital == 0){
		
		cout << "Enter the amount you are starting with:" << endl;
		cin >> capital;
		cin.ignore();
	}

	return capital;

}//end function: getCapital

double getInterest(){
	double interestRate;
	
	cout << "What is the interest rate?" << endl;
	cin >> interestRate;
	cin.ignore();

	return interestRate;
}//end function: getInterest

int getYears(){
	int years;

	cout << "How many years are you saving for?" << endl;
	cin >> years;
	cin.ignore();

	return years;
}//end function: getYears

double addDeposit(){
	double deposit;

	cout << "How much would you like to add per year?" << endl;
	cin >> deposit;
	cin.ignore();

	return deposit;
}

main(){
	double capital = getCapital(capital);
	double interest = getInterest();
	double interestAmount;
	int years = getYears();
	double deposit = addDeposit();

	cout << "Starting Capital: R" << capital << endl;
	cout << "Interest Rate: " << interest << endl;
	cout << "Years Saving: " << years << endl;
	cout << "Depositing: R" << deposit << " per annum" << endl;

	for (int i = 1; i <= years; i++){
		
		interestAmount = calculateInterest(capital, interest);
		capital += interestAmount;
	
		cout << "Amount earned after year: " << i << endl;
		cout << "\t\t\tR" << capital << endl;

		if (i < years){
			capital += deposit;
		}
	
	}
	cout << "Total Saved: R" << capital << endl;
	
}//end function: main
