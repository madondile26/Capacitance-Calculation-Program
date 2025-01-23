/* Test  3 Capacitance Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
   Name: X - Nardo
   Surname : Madondile
   Occupation : Programming Agent
   Rank : General
   Place of Work : Skhotheni Empire University of Artifitial and Criminal Intellegence
   For More Info on How to Become a Programming Lord Contact Me at This Phone Number : 0646621730
   If My Phone Goes to Voicemail Then SORRY!!!....Try Again Next Year....
*/

#include <iostream>
#include<math.h>
#include <iostream>
using namespace std;

double totalParallelCapacitance(double capacitors[], int size) {
	// Declare and initialise variables.
	double total_P = 0;
	double totalParallel = 0.0;

	for (int i = 0; i < size; i++)
	{
		totalParallel = capacitors[i]; // Total series capacitance calculation.
	}

	total_P += totalParallel; // Append the total series capacitance result to the total variable using the addition compound operator.

	// Write all your results in table format to the file.txt file.
	cout << "-------------------------------------" << endl;
	cout << "Capacitance Values\t\tParallel Total" << endl;
	cout << "-------------------------------------" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << capacitors[i] << "\t\t\t\t\t" << total_P << endl;
	}
	cout << "-------------------------------------" << endl;

	return total_P;
}

double totalSeriesCapacitance(double capacitors[], int size)
{
	// Declare and initialise variables.
	double total_S = 0;
	double totalSeriesCapacitance = 0.0;

	for (int i = 0; i < size; i++)
	{
		totalSeriesCapacitance = 1 / (1 / capacitors[i]); // Total series capacitance calculation.
	}

	total_S += totalSeriesCapacitance; // Append the total series capacitance result to the total variable using the addition compound operator.

	// Write all your results in table format to the file.txt file.
	cout << "-------------------------------------" << endl;
	cout << "Capacitance Values\t\tSeries Total" << endl;
	cout << "-------------------------------------" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << capacitors[i] << "\t\t\t\t\t" << total_S << endl;
	}
	cout << "-------------------------------------" << endl;

	return total_S;
}


int main()
{
    // Declare and initialise variables.
    double capacitors[4];
    double total_S = 0.0;
	double total_P = 0.0;
    int Option = 0;

    while (Option != 5)
    {
        cout << "\nPlease enter the number of your choice out of the following options:\n" << endl;
        cout << "(1) Enter four capacitance values." << endl;
        cout << "(2) Calculate the value of the total parallel capacitance." << endl;
        cout << "(3) Calculate the value of the total series capacitance." << endl;
        cout << "(4) Dispay all the calculated values." << endl;
        cout << "(5) EXIT THE PROGRAM...!!!" << endl;
        cin >> Option;

		if (Option == 1)
		{
			// Prompt the user to enter seven capacitance values.
			cout << "\nEnter four capacitance values:\n" << endl;

			for (int i = 0; i < 4; i++)
			{
				cout << "Capacitance value # " << i + 1 << ": ";
				cin >> capacitors[i];

				while (capacitors[i] < 0) // Input validation while loop to check whether the user has entered a positive value or not.
				{
					cout << "Error!!!...The capacitance value you've just entered does not satisfy validation..." << endl;
					cout << "Please enter a positive capacitance value: ";
					cin >> capacitors[i];
				}
			}
		}

		if (Option == 2)
		{
			// Call the total parallel capacitance fuction while passing as argument the capacitors array.
			total_P = totalParallelCapacitance(capacitors, 4);
		}

		if (Option == 3)
		{
			// Call the total series capacitance fuction while passing as argument the capacitors array.
			total_S = totalSeriesCapacitance(capacitors, 4);
		}

		if (Option == 4)
		{
			//Dispaly the values.

			cout << "\nThe capacitance values are: " << endl;
			for (int i = 0; i < 4; i++)
			{
				cout << capacitors[i] << endl;
			}

			cout << "\nThe total parallel capacitance is: " << total_P << endl;
			cout << "The total series capacitance is: " << total_S << endl;
		}

		if (Option == 5)
		{
			// Provides the only point of exit from the program.
			cout << "-------------------------YOU'VE JUST EXITED THE PROGRAM!!!...-------------------------" << endl;
		}
    }

}

