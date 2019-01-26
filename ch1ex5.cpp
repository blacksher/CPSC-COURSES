#include <iostream>
using namespace std;

int main()

{
	
	//variables
	
	int roomcapacity;
	int numtoattend;
	int numtoleave;
	int numtocome;

	//prompt for capacity
	
	cout << "What is the room's maximum capacity?" << endl;
	cin >> roomcapacity;
	

	//prompt for number of people attending
	
	cout << "How many people are attending?" << endl;
	cin >> numtoattend;


	//if capacity is not exceeded
	
	if (roomcapacity >= numtoattend)
	{
		cout << "It is legal to hold the meeting. " << (roomcapacity - numtoattend) << " can still attend.";
	}
		else if (roomcapacity < numtoattend)
		{
			cout << "It is illegal to hold this meeting. " << (numtoattend - roomcapacity) << " must leave.";
		}

}
