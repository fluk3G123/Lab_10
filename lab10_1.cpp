#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...


using namespace std;

int main(){	
	double i , rate , p , PrevBalance , Interest , Total , Payment , NewBalance = 1 ;
	int year = 1;
	cout << "Enter initial loan: ";
	cin >> i;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> p;

	cout << setw(13) << left << "EndOfYear#"; 
		cout << setw(13) << left << "PrevBalance"; 
		cout << setw(13) << left << "Interest"; 
		cout << setw(13) << left << "Total";
		cout << setw(13) << left << "Payment";
		cout << setw(13) << left << "NewBalance";
		cout << "\n";
	
	while(NewBalance != 0){
		if(year == 1){
			PrevBalance = i;
		}
		else{
			PrevBalance = NewBalance;
		}
		Interest = PrevBalance*(rate/100);
		Total = Interest + PrevBalance;
		if(p < Total){
			Payment = p ;
		}
		else{
			Payment = Total ;
		}
		NewBalance = Total - Payment;

		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << PrevBalance;
		cout << setw(13) << left << Interest;
		cout << setw(13) << left << Total;
		cout << setw(13) << left << Payment;
		cout << setw(13) << left << NewBalance;
		cout << "\n";
		year++;
	}

	return 0;
}
