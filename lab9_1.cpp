#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double loan,inter,amount;

int main(){	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> inter;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	double Prev = loan , Interest = (inter/100)*Prev , total = Prev+Interest, Pay = amount , Balance = total;
	int i =1;
	while(Balance > 0){
		if (total > Pay){
			Balance = total;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << i; 
			cout << setw(13) << left << Prev;
			cout << setw(13) << left << Interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << Pay;
			Balance -= Pay;
			cout << setw(13) << left << Balance;
			cout << "\n";
			i++;
			Prev = Balance;
			Interest = (inter/100)*Prev;
			total = Prev+Interest;
		}else{
			Pay = total;
			Balance = Pay - total;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << i; 
			cout << setw(13) << left << Prev;
			cout << setw(13) << left << Interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << Pay;
			cout << setw(13) << left << Balance;
			cout << "\n";
			i++;
			Prev = Balance;
			Interest = (inter/100)*Prev;
	        total = Prev+Interest;
		}
		
	}
	
	
	return 0;
}