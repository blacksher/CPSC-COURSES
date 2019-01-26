#include <iostream>
using namespace std;

int main()

{
	//declarations and assignments

	int numofboxes;
	double const metrictons = 35273.92;
	double packageweight;
	double metricweight;
	
	//prompt for ounce weight of cereal

	cout<< "What is the ounce weight of the breakfast cereal?" << endl ;
	cin>>packageweight;
	
	//conversion from ounces to metric tons equation

	metricweight = packageweight * .0000283495231;

	//output metric weight

	cout<< metricweight << endl;
 
	//calculate the number of boxes needed to yield one metric ton

	numofboxes = packageweight / metricweight;
	cout<< "You need " << numofboxes << " boxes to reach one metric ton." << endl;
}
