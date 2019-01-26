#include <iostream>
using namespace std;

int main()
{
	//variables
	
	int months= 0; //total months
	const float interest= 0.015; 
	float debt=1000;
	const float payment = 50;
	double leftover;
	double runningtotal=0; //total interest

	while(debt>0)
	{
		leftover = payment - (debt * interest) ; //money to be subtracted by debt
		runningtotal+=debt*interest; //total amount of interest paid
		debt-= leftover; //new debt
		months += 1; //keep track of months
		


	}
	cout<< "It took " << months << " months to pay off your debt." << endl;
	cout << "The amount of interest paid is: " <<runningtotal<< "." <<endl;
}
