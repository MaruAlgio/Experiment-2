
// PROBLEM 5 - FIBONACCI SEQUENCE COUNTER.

/* 
The total terms here are 22 since it includes the first 0 and 1 and then the succeeding 20 terms.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int x = 0;
	int y = 1;
	int z = 0;
	
	cout << "The Fibonacci Sequence's first 22 terms\n(including the first 0 and 1)\n\n";
	
	// 22 because it includes the first 0 and 1
	for (int i = 1; i <= 22; ++i)
    {

        if(i == 1)
        {
            cout << " " << x << " ";
            continue;
        }
        if(i == 2)
        {
            cout << y << " ";
            continue;
        }
    	
		// set of formulas that produce the succeeding terms
		z = x + y; x = y; y = z;
        
        cout << z << " ";
	}
	return 0;
}
