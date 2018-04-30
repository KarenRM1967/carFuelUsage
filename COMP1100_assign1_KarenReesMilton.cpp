#include <iostream>
#include <iomanip> 
#include <string> 
using namespace std;

/*****************************************************************
Karen Rees-Milton
COMP1100 Assignment#1
A program to analyze a car's fuel usage
*****************************************************************/
int main()
{
	/***************************************************************************
	Housekeeping: Declare all variables and constant. Set output rules
	****************************************************************************/
	const double PRICEPERLITRE = 1.12;
	string carType;
	double litresPerTank, fuelEfficiency, costPerTank, distancePerTank;

	cout << fixed;
	
	/************************************************************************
	Input: 	Prompt and obtain user input as required
	*************************************************************************/
	cout << "What is the model of your car? ";
	getline(cin, carType);
	cout << "Enter number of litres of gas per tank: ";
	cin >> litresPerTank;
	cout << "Enter fuel efficiency in km per litre: ";
	cin >> fuelEfficiency;
	cout << endl;

	/**************************************************************************
	Processing: Code arithmetic
	****************************************************************************/
	costPerTank = litresPerTank * PRICEPERLITRE;
	distancePerTank = fuelEfficiency * litresPerTank;

	/**********************************************************************
	Output
	************************************************************************/
	cout << "Model: " << carType << endl;
	cout << right << setw(18) << "Litres per tank"
		<< setw(18) << "Kms per litre"
		<< setw(18) << "Price per litre"
		<< setw(18) << "Cost per tank"
		<< setw(18) << "Distance per tank"
		<< endl << endl;
	cout << setprecision(0) << setw(18) << litresPerTank
		<< setw(18) << fuelEfficiency
		<< setprecision(2) << setw(18) << PRICEPERLITRE
		<< setw(18) << costPerTank
		<< setprecision(0) << setw(18) << distancePerTank
		<< endl << endl;

	/************************************************************************
	Print ending message and allow user to view output
	*****************************************************************************/
	cout << "Program ended successfully" << endl;
	system("pause");
}
/***************************************************************************
Program output as appears in console
****************************************************************************/
/*
What is the model of your car? Volvo V70
Enter number of litres of gas per tank: 70
Enter fuel efficiency in km per litre: 7.87

Model: Volvo V70
   Litres per tank     Kms per litre   Price per litre     Cost per tank Distance per tank

                70                 8              1.12             78.40               551

Program ended successfully
Press any key to continue . . .
*/