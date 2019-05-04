
// PROBLEM 5 - FIBONACCI SEQUENCE COUNTER.

/* 
The total terms here are 22 since it includes the first 0 and 1 and then the succeeding 20 terms.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	
	int Maru;
	int x = 1;

	do
	{
			
	cout << "Enter a number: ";
	cin >> Maru;
	
	
		if (Maru >= 1)
			{
				int sum = 0;
					for ( x=1 ; x <= Maru ; x++)
						{
							sum += x;	
						}
				
				cout << "The sum of all whole numbers from 1 to "<< Maru << " is " << sum << ".\n";
			
			}
		else
			break;
			
	}	while (x > 0);
	
	
	
	getch ();
	return 0;
}

