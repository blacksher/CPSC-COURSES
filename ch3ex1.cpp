#include <iostream>
using namespace std;

int main()

{	
	char options = 'y';
	while(options == 'y' || options == 'Y')
	{
	//variables
	
	double const gallon = 0.264179;
	float liters;
	float milestraveled;
	float milespergallon;

	//read liters and miles traveled
	
		cout << "How many liters were consumed by your car?" << endl;
		cin >> liters;

		cout << "How many miles have you traveled?" << endl;
		cin >> milestraveled;


	// gallon equation: liters * one gallon
	
		milespergallon = milestraveled / (liters * 0.264179);

		cout << "The number of miles per gallon the car delivered is " << milespergallon << " ." << endl;

		cout << "Enter 'Y' if you wish to continue: "<< endl; //loop
		cin>> options;
	}
}
	




