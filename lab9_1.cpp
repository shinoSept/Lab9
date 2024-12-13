#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,interest,pay,total,Newbalance = 1;
	int year = 1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	interest = loan * (rate/100);

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	while (Newbalance > 0) {
	total = loan + interest;
	Newbalance = total - pay;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	if (pay > total) {pay = total;}
	cout << setw(13) << left << pay;
	if (Newbalance <= 0) {Newbalance = 0;}
	cout << setw(13) << left << Newbalance;
	cout << "\n";	
	
	loan = Newbalance;
	interest = Newbalance * (rate/100);
	year++;

	}

	return 0;
}
