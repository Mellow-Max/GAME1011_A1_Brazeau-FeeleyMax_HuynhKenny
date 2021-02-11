#include "Inheritance.h"
#include <iostream>
using namespace std;


NonGamingStudent streamingService();

const string sName[] = { "Netflix", "Hulu", "Crave", "Disney+" , "HBO", "Amazon Prime Video" };
const string gName[] = { "PS4", "PS5", "Xbox One", "Xbox Series X", "Nintendo Switch", "Wii", "PC" };

int main()
{
	int NUM_PEOPLES;

	cout << "Welcome to the entertainment consumption habits of college students Survey" << endl;
	cout << "How many participants would you like to survey" << endl;
	cin >> NUM_PEOPLES;

	int gamingStudent = 0;
	int nonGamingStudent = 0;

	
	
	Person arr[NUM_PEOPLES];
	Survey survey;

	for(int i = 0; i< NUM_PEOPLES; i++)
	{
		//randomly generate participants info
	}

	//processing participants info and displays findings
	survey.Process(arr[]);

	
}