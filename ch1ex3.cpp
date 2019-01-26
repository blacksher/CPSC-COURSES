#include<iostream>
using namespace std;

int main()

{

	//variable declarations and assignments

	float previoussalary;
	int retroactivepay;
	float newsalary, newmonthsalary;
	float const payincrease = .076;

	//input and output statements

	cout<<"What was your previous salary?" ;
	cin>> previoussalary;

	//determine retroactive salary
	
	retroactivepay = payincrease * (previoussalary / 2);
	cout<< "Your retroactive pay is " << retroactivepay <<" dollars for six months."<< endl;

	//calculate new salary
	
	newsalary = retroactivepay + (previoussalary / 2) + previoussalary;
	cout<< "Your new annual salary is " << newsalary <<" dollars." << endl;
	
	//calculate monthly salary
	
	newmonthsalary = newsalary / 12;
	cout<<"Your new monthly salary is " << newmonthsalary << " dollars for six months."<< endl;


}
