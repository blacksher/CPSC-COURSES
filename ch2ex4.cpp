#include <iostream>
using namespace std;
int main()
{
	bool prime = true; //set boolean to true
	for(int i = 3; i<=100; i+=1) //for numbers three to one hundred
	{	
		prime = true;
		for( int num = 2; num<=i-1; num +=1) //way to check if a number is prime
		{
			if(i%num==0)
			{
				//It is not prime
				prime = false;
				
			}
		}

		if(prime) //if prime number, print it
		{
			cout<<i<<endl;
		}
	}


}
