#pragma once
#include <iostream>
#include "People.h"
#include <string>
#include <ctime>

//Name
const string FirstName[] = { "Verdell", "Sook", "Xavier", "Lise", "Hanna", "Lester", "Amal", "Candance", "Edith", "Lauren" };
const string LastName[] = { "Lasley", "Nix", "Armstrong", "Morency", "Amico", "Bankston", "Hawbaker", "Wickham", "Eisenmann", "Winzer" };
//Streaming Service Name
const string sName[] = { "Netflix", "Hulu", "Crave", "Disney+" , "HBO", "Amazon Prime Video" };
//Gaming Device Name
const string gName[] = { "PS4", "PS5", "Xbox One", "Xbox Series X", "Nintendo Switch", "Wii", "PC" };
//College Name
const string cName[] = { "George Brown", "Seneca", "Centennial", "Humber", "Sheridan" };
//Program Name
const string pName[] = { "Computer Science", "Biology", "Art", "Business", "Hospitality" };

class Survey
{
private:
	bool m_isGaming = false;
	//number of students
	int m_NumberOfGamingStudents = 0;
	int m_NumberOfNonGamingStudents = 0;
	//total age of students
	int m_nTotalAge = 0;
	int m_gTotalAge = 0;
	//total hours
	double m_nTotalHours = 0;
	double m_gTotalHours = 0;
	//preferred streaming service
	int m_Netflix = 0;
	int m_DisneyPlus = 0;
	int m_Hulu = 0;
	int m_Crave = 0;
	int m_HBO = 0;
	int m_AmazonPrime = 0;
	int m_sArr[6] = { m_Netflix, m_DisneyPlus, m_Hulu, m_Crave,  m_HBO, m_AmazonPrime };
	int m_sTemp=0;
	string m_gPreferred;
	//preferred gaming device
	int m_PS4 = 0;
	int m_PS5 = 0;
	int m_XboxOne = 0;
	int m_XboxSeriesX = 0;
	int m_NintendoSwitch = 0;
	int m_Wii = 0;
	int m_PC = 0;
	int m_gArr[7] = { m_PS4, m_PS5, m_XboxOne, m_XboxSeriesX,  m_NintendoSwitch, m_Wii, m_PC };
	int m_gTemp=0;
	string m_sPreferred;
public:
	void Process(Person** participant, int NumParticipants);
};