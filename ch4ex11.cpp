#include <iostream>
using namespace std;

bool game();

int main()
{
	//variables
	srand(time(0));

	int games = 0;
	int total = 0;
	int switching = 0;
	int staying = 0;

	while(games<10000)
	{
		if(game())
		{
			staying+=1;
		}
		else
		{
			switching+=1;
		}
		games += 1;
	}

	cout<< "You would win " << staying << " games by staying."<< endl;
	cout << "You would win " << switching << " games by switching. " <<endl;

}


bool game()
{
	int door_selected = rand() % 3 + 1;
	int prize = rand() % 3 + 1;

	

	if(door_selected == prize)
	{
		return true;
	}
	else
	{
		return false;
	}




}
