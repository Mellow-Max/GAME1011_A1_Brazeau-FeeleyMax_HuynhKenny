#include "People.h"
#include "Survey.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main()
{
	Survey survey;
	Person** participant = nullptr;
	int NUM_PEOPLES;

	cout << "Welcome to the entertainment consumption habits of college students Survey" << endl;
	cout << "How many participants would you like to survey (Max participants is 500)" << endl;
	cin >> NUM_PEOPLES;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Please enter a valid number\n";
	}
	else if(NUM_PEOPLES >=1 && NUM_PEOPLES <=500)
	{
		survey.Process(participant, NUM_PEOPLES);
	}
	else
	{
		cout << "Please enter a valid number between 1 and 500" << endl;
	}
	
	return 0;
}
