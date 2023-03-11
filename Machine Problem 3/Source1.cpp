//Justin Ritchey Machine Learning Problem 3. Maximizing Profit for rental units. 6/15/2020


#include <iomanip>
#include <iostream>

using namespace std;

int main()

{
	double apartment = 0;                                               //Amount of total apartments avaiable
	double rent = 0;                                                    //Price of rent when all units are rented
	double raise = 0;                                                   //Increase in rent for each vacancy
	double maint = 0;                                                   //Price of Maintence per apartmnet
	double profit = 0;                                                  //Maximum Profit for rental units
	double profit1;                                                     //Checking profits for each amount of units rented in loop
	int units = 0;                                                      //Number of units to rent for maximum profits
	int vacant = 0;                                                     //NUmber of empty units

	cout << "Enter total number of apartments: ";                       //Asking user for total amount of apartments and assiging
	cin >> apartment;

	cout << "Enter rent to occupy all the units: ";                     //Asking user for price of rent and assinging
	cin >> rent;

	cout << "Enter increase in rent: ";                                 //Asking for increase in rent and assinging
	cin >> raise;

	cout << "Enter amount to maintain a rented unit: ";                 //Asking for cost of maintence per apartment and assinging
	cin >> maint;

	while((apartment - vacant) > 0)                                     //Starting loop to calculate best number of units for maxiumum profit
	{
		profit1 = (apartment - vacant) * (rent - maint);                //Calculate rent for each number of apartment to vacacny rates

		if(profit1 > profit)                                            //Will check to see if the profit has decreased from previous number of apartment to vacancy rate
		{
			profit = profit1;                                           //Assinging profit from loop to check if the profit has decresased
			units = (apartment - vacant);                               //Assinging number of apartments to what wil be the final amount of apartments
		}
		rent += raise;                                                  //Will increase the rent by the raise for each loop

		vacant++;                                                       //Used to check vacancy rates by adding 1 per loop
	}

	cout << "\nThe number of units to be rented to maximize the profit = " << units << "\n";     //Print out final amount of units

	system("PAUSE");

	return 0;

}