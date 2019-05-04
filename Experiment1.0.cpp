
// PROBLEM 1 - INTERNET SERVICE BILL CALCULATOR



#include <iostream>
#include <iomanip>
//#include <cmath>
//#include <string>
#include <conio.h>

using namespace std;

int main()
{
    
    char Package;
    double h;
    
    cout << setprecision(2) << fixed << showpoint;
    
   // cout << fixed << showpoint << setprecision(2);
    cout << "INTERNET BALANCE CALCULATOR\n" << endl;
    cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr."<< endl;
    cout << "Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr."<< endl;
    cout << "Package C: For P1995/mo of unlimited access is provided."<< endl;
    cout << "Please choose a Package < 'A', 'B', 'C'>\n"<< endl;
  
  
    cout << "What Internet package are you subscribed to?\n";
    cin >> Package;
    
   

    
    const double BC = 1995.00;
    
   
   if ( Package == 'A' || Package == 'a' ) //||  || 
        {
			cout << "How many hours did you use your internet service?\n";
    		cin >> h;
    		
    			if (h >=10)
    				{
					double BA = (h-10)*20+(995);
					cout << "Your total Balance due is P" << BA;
					}
		        else
 		           {
		            cout << "INVALID INPUT\nPLEASE RESTART THE PROGRAM";
		            return 0;
		            } 
   		}
	else if (Package == 'B' || Package == 'b')
		{
			cout << "How many hours did you use your internet service?\n";
    		cin >> h;
    		
    			if (h >=20)
    				{
					double BB = (h-20)*10+(1495);
					cout << "Your total Balance due is P" << BB;
					}
		        else
 		           {
		            cout << "INVALID INPUT\nPLEASE RESTART THE PROGRAM";
		            return 0;
		            }
		}
	else if (Package == 'C' || Package == 'c')
		{
			cout << "Your subscription grants you unlimited\nhours of internet connection for the\nentire month. Therefore, your BALANCE DUE IS: P" << BC;


		}
		

    getch ();
    return 0;
}

