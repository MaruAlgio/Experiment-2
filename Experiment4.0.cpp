
// PROBLEM 4 - COUNTER NUMBERS WITH COMMAS

/* Due to inexperience, I played it safe and used two different variables
to represent the two different series of numbers. */

#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	
	int x;
	
	cout << "Counting...\n";
	
	for ( x=1 ; x <= 10 ; x++ )
		{
			cout << x << ", ";
		} 
	
	int y = 10;
	
	for (y = 12 ; y < 30 ; y+=2 )
		{
			cout << y << ", ";
				if (y == 28)
					cout << y+2 << ".";
				else
					continue;
		}


	getch ();
	return 0;
	
	
}

