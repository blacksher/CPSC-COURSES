#include <iostream>
#include <cmath>
using namespace std;


//function prototype

void triangle(double a, double b, double c, double& area, double& perimeter);


int main()

{
	//variables
	
	double area;
	double a;
	double b;
	double c;
	double perimeter;
	
	triangle(a,b,c,area,perimeter);
	cout <<"Perimeter: " << perimeter << endl;
	cout<< "Area: " << area << endl;




}
	//prompting for sides
	
void triangle(double a, double b, double c, double& area, double& perimeter)
{

	cout<<"Enter value for side a: " <<endl;
	cin>>a;
	cout<<"Enter value for side b: " <<endl;
	cin>>b;
	cout<<"Enter value for side c: " <<endl;
	cin>>c;



	//calculate perimeter
	
	perimeter = a+b+c;


	//calculate semiperimeter
	
	double s = (a+b+c)/2;


	//calculate area
	
	area = sqrt(s*(s-a)*(s-b)*(s-c));
}	



