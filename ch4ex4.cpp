#include <iostream>
using namespace std; //not working

	//functions
void input(float& feet, float& inches);
float calculatemeters(float feet);
float calculatecent(float feet);
float calculateincent(float inches); 
float calculateinmeters(float inches);
void output(float inches, float feet); //double incentimeters, double fmeters, double fcentimeters);


int main()
{
	float feet;
	float inches;
	input(feet,inches);
	output(inches,feet);	
}

void input(float& feet, float& inches)
	//variables and prompting
{	

	cout << "What is the length in feet: " << endl;
	cin >> feet;
	cout << "What is the length in inches: " << endl;
	cin >> inches;
}

// calculations

	//feet to meters
float calculatemeters(float feet)
{
	float fmeters;
	fmeters = feet * 0.3048;
	return fmeters;
}
	//feet to centimeters
float calculatecent(float feet)
{
	float fcentimeters;
	fcentimeters = feet * 30.48;
	return fcentimeters;

}
	//inches to meters
float calculateinmeters(float inches)
{
	float inmeters;
	inmeters = inches * 0.0254;
	return inmeters;
}	


	//inches to centimeters
float calculateincent(float inches)
{
	float incentimeters;
	incentimeters = inches * 2.54;
	return incentimeters;
}
		//output function
void output(float inches, float feet) //error thrown
{
	cout << "Conversion from inches to meters: " << calculateinmeters(inches) << endl;
	cout << "Conversion from inches to centimeters: " << calculateincent(inches) << endl;
	cout << "Conversion from feet to meters: " << calculatemeters(feet) << endl;
	cout << "Conversion from feet to centimeters: " << calculatecent(feet) << endl;

	//expected initializer before token?
}
