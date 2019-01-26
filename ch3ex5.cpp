#include <iostream>
using namespace std;

//function prototypes
float hats(float height, float weight);
float jackets(float height, float weight, int age);
float waist(float height, float weight, int age);

int main()

{
	//loop

	char options = 'y';
	while(options == 'y' || options == 'Y')
	{
	
	
	//variables
	
	float height;
	float weight;
	int age;
	
	//prompts
	

		cout << "What is your height: " << endl;
		cin >> height;
		cout << "What is your weight: " << endl;
		cin >> weight;
		cout << "What is your age: " << endl;
		cin >> age;

		cout << "Your hat size is: " << hats(height, weight) << endl;
		cout << "Your jacket size is: " << jackets(height, weight, age)<< endl;
		cout << "Your waist size is: " << waist(height, weight, age) << endl;
		cout<<"Type 'y' to restart the program: "<< endl;
		cin>> options;

	}


}
	
float hats(float height, float weight) //function for hatsize
{
	float hatsize;
	hatsize =(weight / height) * 2.9;
	return hatsize; //return hatsize value
}

float jackets(float height, float weight, int age) //function for jacketsize
{
	float jacketsize;
	jacketsize = (height * weight) / 288;
		if(age >= 30)
		{
			jacketsize+=(age-30)/10*0.125; //jacketsize plus the one eighth over a full ten years
			return jacketsize;
	return jacketsize; //return jacketsize value
		}
}
float waist(float height, float weight, int age) //function for waistsize	
{		
	float waistsize;
	waistsize = weight / 5.7;	
		if(age>= 28)
		{
			waistsize+=(age-28)/2*0.1; //waistsize plus one tenth over full two years
			return waistsize; //return waistsize value
	return waistsize;
		}

}

