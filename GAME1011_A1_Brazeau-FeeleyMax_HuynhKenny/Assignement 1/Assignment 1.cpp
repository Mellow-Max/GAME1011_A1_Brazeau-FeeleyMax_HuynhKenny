#include "Inheritance.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;



int main()
{
	Survey participants;
	int NUM_PEOPLES;

	cout << "Welcome to the entertainment consumption habits of college students Survey" << endl;
	cout << "How many participants would you like to survey" << endl;
	cin >> NUM_PEOPLES;
	
	participants.SetNumParticipants(NUM_PEOPLES);
	participants.Randomize();
}








//int main()
//{
//	shared_ptr<Person> pp;
//	shared_ptr<Student> ps;
//	shared_ptr<NonGamingStudent> psn;
//	shared_ptr<GamingStudent> psg;
//
//	
//	Survey* surveyPtr;
//	int NUM_PEOPLES;
//	bool isGaming;
//
//	cout << "Welcome to the entertainment consumption habits of college students Survey" << endl;
//	cout << "How many participants would you like to survey" << endl;
//	cin >> NUM_PEOPLES;
//
//	surveyPtr = new Survey[NUM_PEOPLES];
//	srand(time(0));
//	for(int i = 0; i< NUM_PEOPLES; i++)
//	{
//		//randomly generate participants info
//		isGaming = rand() % 2;
//		if(isGaming)
//		{
//			surveyPtr[i].participants = new GamingStudent(FirstName[rand() % 9] + " " + LastName[rand() % 9],
//			                                              rand() % 36 + 16, cName[rand() % 4], pName[rand() % 4],
//			                                              rand() % 8 + 1, gName[rand() % 6], rand() % 40 + 4);
//		}
//		else if(!isGaming)
//		{
//			surveyPtr[i].participants = new NonGamingStudent(FirstName[rand() % 9] + " " + LastName[rand() % 9],
//				rand() % 36 + 16, cName[rand() % 4], pName[rand() % 4],
//				rand() % 8 + 1, gName[rand() % 5], rand() % 40 + 4);
//		}
//		
//	}
//
//	for(int i = 0; i < NUM_PEOPLES; i++)
//	{
//		cout << surveyPtr[i].participants->GetName() << endl;
//		cout << surveyPtr[i].participants->IsGaming() << endl;
//		cout << surveyPtr[i].participants->GetAge() << endl;
//		if(surveyPtr[i].participants->IsGaming())
//		{
//			cout << static_pointer_cast<GamingStudent> (pp)->GetHours() << endl;
//		}
//		else if(!surveyPtr[i].participants->IsGaming())
//		{
//			cout << static_pointer_cast<NonGamingStudent> (pp)->GetHours() << endl;
//		}
//		
//	}
//
//	const int NUM = 5;
//	
//	Person* ptr[NUM] = { new GamingStudent(FirstName[rand() % 9] + " " + LastName[rand() % 9], rand() % 36 + 16, cName[rand() % 4], pName[rand() % 4], rand() % 8 + 1, gName[rand() % 6], rand() % 40 + 4) };
//
//	//cout << ptr[0]->GetHours();
//	
//	//surveyPtr->Process(&surveyPtr, NUM_PEOPLES);
//
//	//processing participants info and displays findings	
//}