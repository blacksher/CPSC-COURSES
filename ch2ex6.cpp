#include <iostream>
using namespace std;

main()
{
	//variables and assignments
	
	float pounds;
	float radius;
	const float y = 62.4;
	float v;
	float force;

	//prompting

	cout<<"What is the weight in pounds: " << endl;
	cin>>pounds;
	cout<<"What is the radius in feet: " <<endl;
	cin>>radius;

	v = (4/3)*3.14159*(radius*radius*radius); //volume equation
	force = v * y; //amount of force to be compared to the pounds

	if(force >= pounds)
	{
		cout<<"This object will float."<< endl;

	}
	else
	{
		cout<<"This object will sink." << endl;
	}


}
