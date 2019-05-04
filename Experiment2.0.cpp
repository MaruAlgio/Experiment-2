
// PROBLEM 2 - WATER BILL CALCULATOR



#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
	double gal;
	
	cout << "Based on the meter reading, how many gallons did you consume for this month?\n";
	cin >> gal;
	
		if ( gal > 0 )
			{
				/* 
				Ldue = Last month due
				TotC = Total Charge
				DemC = Demand Charge
				ConC = Consumption Charge
				TotLC = Total Late Charge
				*/
				double Ldue;
				int Lc = 20;
				double DemC = 35;
				double ConC = 1.10;
				double TotC	= (DemC + (gal*ConC));
				
				cout << setprecision(2) << fixed << showpoint;
				
				cout << "\nHow much is your unpaid balance for last month?\n";
				cin >> Ldue;
				
					if (Ldue > 0)
						{
							cout << "Your total Water Bill for this month is:\nP" << Ldue + (DemC + (ConC*gal)) + Lc << "\n\nNote: Due to the unpaid balance for last month, you have also been\ncharged for an additional P20.00 for the late charge." << endl;
							cout << "\nPlease pay your Water Bill on time to avoid inconveniences and extra charges. Thank You!";
						}
				
					else if (Ldue == 0)
						{
							cout << "\nYour total Water Bill for this month is P" << TotC;
						}
				
				
			}
		else
			{
				cout << "INVALID INPUT\nPLEASE RESTART THE PROGRAM AND INPUT A VALID AMOUNT";
				return 0;
			
			}
			
		
		
		



	getch ();
	return 0;

}
