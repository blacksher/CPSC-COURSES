#include <iostream>
using namespace std;


//deleteRepeat variables inside an array

//function prototyping

char deleteRepeats(char a[], int size);
void displayarray(char a[], int size);


int main()
{
	char a[10] = {'a','b','a','c'};
	int size = 4;
	char repeated = deleteRepeats(a,size);
	displayarray(a,size);

}


	//sorting the array
char deleteRepeats(char a[], int size)
	
{

	for(int i = 0; i < size; i++) //outer loop, loop through entire array
	{

		char letter = a[i]; //first element variable
		for(int o = 1; o < size; o++) // inner loop, where o is the element after i
		{
			if(letter == a[o]) //if element after i is same as element after
			{

				a[o] = '0';
				a[o] = a[o+1];
				a[o+1] = '0'; // how to delete the zero?
				return letter;
			}	

		}
	}	

}
		
void displayarray(char a[], int size)
{
	for(int i =0; i<size; i++)
	{
		if(a[i] !='0')
		{
			
		cout<< "[ " << a[i] << " ]" <<endl;
	
		}
	
	}


}
