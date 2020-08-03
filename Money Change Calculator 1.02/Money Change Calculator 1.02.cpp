#include <iostream>

using namespace std;

int main()
{
	const int dollar{ 100 };
	const int quater{ 25 };
	const int dime{ 10 };
	const int nickle{ 5 };
	const int penny{ 1 };

	int num_of_dollars{ 0 };
	int num_of_quaters{ 0 };
	int num_of_dimes{ 0 };
	int num_of_nickles{ 0 };
	int num_of_pennys{ 0 };

	cout << "Enter the number of cents: ";
	int cents{ 0 };
	cin >> cents;

	num_of_dollars = cents / dollar; //Calculates number of dollars
	cents = cents % dollar;         //Calculates the leftover cents

	num_of_quaters = cents / quater; //Calculates number of quaters
	cents = cents % quater;        //Calculates the leftover cents

	num_of_dimes = cents / dime;     //Calculates number of dimes
	cents = cents % dime;           //Calculates the leftover cents

	num_of_nickles = cents / nickle; //Calculates number of nickles
	cents = cents % nickle;         //Calculates the leftover cents

	num_of_pennys = cents / penny;   //Calculates number of pennys
	cents = cents % penny;          //Calculates the leftover cents

	cout << "Dollars: " << num_of_dollars << endl;
	cout << "Quaters: " << num_of_quaters << endl;
	cout << "Dimes: " << num_of_dimes << endl;
	cout << "Nickles: " << num_of_nickles << endl;
	cout << "Pennys: " << num_of_pennys << endl;

}