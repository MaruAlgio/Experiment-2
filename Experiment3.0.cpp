
// PROBLEM 3 - ALGEBRA CALCULATOR - FIND V


/*
	NOTES FOR Prof. Geslani
		With the parameters given, the negative values were not mentioned, although, it was said that for any other values of
		x or y will be put under the x + y + z Formula. Thus, a sample of x=1 and y=-3 will be subject to the said x+y+z formula.
		Any other case that does not follow the parameters as mentioned is presumed to be subject to that formula, thereof.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{

	int x, y;
	double z = 2.5;
	
	
	cout << "This calculator depends on the values of x and y to assign which operation/algebraic\nformula to be used for the input values of x and y, thereof.\n";
	cout << "What is the Value of X\n";
	cin >> x;
		

	cout << fixed << showpoint << setprecision(2);


// Discarded the flow of letting the formulas outside because they "don't work as I've observed
	/*
	double V1 = x*y*z;
	double V2 = x + (y/z);
	double V3 = (abs((x-y)/(z)));
	double V4 = x - (sqrt(y+z));
	double V5 = x + y + z;
	*/
	
		 switch (x)
        {
            case 1:
            	cout << "\nWhat is the Value of y?\n";
            	cin >> y;
            	
				if (y > 1 && y < 5)
					{
						cout << setw (10);
						cout << "\nThe Answer is\n" << x*y*z;
					}
					
				else if (y >= 5)
					{
					cout << setw (10);
					cout << "\nThe Answer is\n" << x + (y/z);	
					}

				else
					{
					cout << setw (10);
					cout << "\nThe Answer is\n" << x + y + z;
					}	       
            break;
        
            case 2:
            	cout << "\nWhat is the Value of y?\n";
            	cin >> y;
            	
				if ( y <= 5)
					{
					cout << setw (10);
					cout << "\nThe Answer is\n" << (abs((x-y)/(z)));
					}
					
				else if (y > 5)
					{
					cout << setw (10);
					cout << "\nThe Answer is\n" << x - (sqrt(y+z));
					}
					
				else
					{
					cout << setw (10);
					cout << "\nThe Answer is\n" << x + y + z;
					}            
        
            break;
       

            default:
            	{
				
					cout << "\nWhat is the Value of y?\n";
            		cin >> y;
            		cout << setw (10);
            		cout << "\nThe Answer is\n" << x + y + z;
            	}
			
				
        }




	getch ();
	return 0;
	
	
}
