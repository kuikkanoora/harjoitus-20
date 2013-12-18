/*************************************************************************************************************************************************************
*Tehtävä: Harjoitus20
*Tekijä: Noora Kuikka
*PVM: 10.11.2013
*Kuvaus:
*Kuten harjoitus 19, mutta toteuta kayttaen taulukkoa ja osoitinta
*tiedon käsittelyyn
*Versio 1.0 H4719 10.11.2013
**************************************************************************************************************************************************************/

#include <iostream>
using namespace std;

const int SPEED_ARRAY = 5;

int main()
{
	int speed[SPEED_ARRAY] = {0,0,0,0,0};
	int sum;
	int med;
	int i = 0;
	int input;
	int *sp;
	sp = &speed[i];


	cout << "\nThis program acts as a car's speed meter.\nEnter a negative integer to quit the program.\n" << endl;

	do
	{
		cout << "Enter your speed: ";
		cin >> speed[i];
		input = *sp;
		sum = speed[0]+speed[1]+speed[2]+speed[3]+speed[4];
		med = sum/SPEED_ARRAY;
		if (input >=0)
		{
			cout << " ---> " << med << "km/h" << endl;
		}

		i++;
		if (i>4)
		{
			i=0;
		}
	}
	while(input >= 0);
}
