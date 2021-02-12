#include "Survey.h"
#include <iostream>
#include "People.h"
#include <string>
#include <ctime>

void Survey::Process(Person** participant, int NumParticipants)
{
	//Ranzomize
	participant = new Person * [NumParticipants];
	srand(time(0));
	for (int i = 0; i < NumParticipants; i++)
	{
		m_isGaming = rand() % 2;
		if (m_isGaming)
		{
			participant[i] = new GamingStudent(FirstName[rand() % 10] + " " + LastName[rand() % 10],
				rand() % 21 + 16, cName[rand() % 5], pName[rand() % 5],
				rand() % 9 + 1, gName[rand() % 7], rand() % 37 + 4);
		}
		else if (!m_isGaming)
		{
			participant[i] = new NonGamingStudent(FirstName[rand() % 10] + " " + LastName[rand() % 10],
				rand() % 21 + 16, cName[rand() % 5], pName[rand() % 5],
				rand() % 9 + 1, sName[rand() % 6], rand() % 37 + 4);
		}
	}

	//process the info
	for (int i = 0; i < NumParticipants; i++)
	{
		if (participant[i]->IsGaming())
		{
			//count the number of Gaming students and non gaming students and their total age and total hours
			m_NumberOfGamingStudents++;
			m_gTotalAge += participant[i]->GetAge();
			m_gTotalHours += dynamic_cast<GamingStudent*>(participant[i])->GetHours();

			//count up the preferred gaming device
			if (dynamic_cast<GamingStudent*>(participant[i])->GetGamingDevice() == "PS4")
			{
				m_PS4++;
			}
			else if (dynamic_cast<GamingStudent*>(participant[i])->GetGamingDevice() == "PS5")
			{
				m_PS5++;
			}
			else if (dynamic_cast<GamingStudent*>(participant[i])->GetGamingDevice() == "Xbox One")
			{
				m_XboxOne++;
			}
			else if (dynamic_cast<GamingStudent*>(participant[i])->GetGamingDevice() == "Xbox Series X")
			{
				m_XboxSeriesX++;
			}
			else if (dynamic_cast<GamingStudent*>(participant[i])->GetGamingDevice() == "Nintendo Switch")
			{
				m_NintendoSwitch++;
			}
			else if (dynamic_cast<GamingStudent*>(participant[i])->GetGamingDevice() == "Wii")
			{
				m_Wii++;
			}
			else if (dynamic_cast<GamingStudent*>(participant[i])->GetGamingDevice() == "PC")
			{
				m_PC++;
			}
		}
		else if (!participant[i]->IsGaming())
		{
			//count the number of Gaming students and non gaming students and their total age
			m_NumberOfNonGamingStudents++;
			m_nTotalAge += participant[i]->GetAge();
			m_nTotalHours += dynamic_cast<NonGamingStudent*>(participant[i])->GetHours();

			//count up the preferred streaming service
			if (dynamic_cast<NonGamingStudent*>(participant[i])->GetStreamingSerivce() == "Netflix")
			{
				m_Netflix++;
			}
			else if (dynamic_cast<NonGamingStudent*>(participant[i])->GetStreamingSerivce() == "Hulu")
			{
				m_Hulu++;
			}
			else if (dynamic_cast<NonGamingStudent*>(participant[i])->GetStreamingSerivce() == "Crave")
			{
				m_Crave++;
			}
			else if (dynamic_cast<NonGamingStudent*>(participant[i])->GetStreamingSerivce() == "Amazon Prime Video")
			{
				m_AmazonPrime++;
			}
			else if (dynamic_cast<NonGamingStudent*>(participant[i])->GetStreamingSerivce() == "Disney+")
			{
				m_DisneyPlus++;
			}
			else if (dynamic_cast<NonGamingStudent*>(participant[i])->GetStreamingSerivce() == "HBO")
			{
				m_HBO++;
			}
		}
	}
	//assign streaming services to an array for comparison to see which is the preferred one
	m_sArr[0] = m_HBO;
	m_sArr[1] = m_DisneyPlus;
	m_sArr[2] = m_Netflix;
	m_sArr[3] = m_AmazonPrime;
	m_sArr[4] = m_Crave;
	m_sArr[5] = m_Hulu;
	//assign gaming devices to an array for comparison to see which is the preferred one
	m_gArr[0] = m_Wii;
	m_gArr[1] = m_NintendoSwitch;
	m_gArr[2] = m_XboxSeriesX;
	m_gArr[3] = m_XboxOne;
	m_gArr[4] = m_PC;
	m_gArr[5] = m_PS5;
	m_gArr[6] = m_PS4;
	// determine most preferred streaming service
	for (int i = 0; i < 6; i++)
	{
		if (m_sArr[i] > m_sTemp)
		{
			m_sTemp = m_sArr[i];
		}
	}
	if (m_sTemp == m_Netflix)
	{
		m_sPreferred = "Netflix";
	}
	else if (m_sTemp == m_Hulu)
	{
		m_sPreferred = "Hulu";
	}
	else if (m_sTemp == m_Crave)
	{
		m_sPreferred = "Crave";
	}
	else if (m_sTemp == m_HBO)
	{
		m_sPreferred = "HBO";
	}
	else if (m_sTemp == m_DisneyPlus)
	{
		m_sPreferred = "Disney+";
	}
	else if (m_sTemp == m_AmazonPrime)
	{
		m_sPreferred = "Amazon Prime Video";
	}
	//determine most preferred gaming device
	for (int i = 0; i < 7; i++)
	{
		if (m_gArr[i] > m_gTemp)
		{
			m_gTemp = m_gArr[i];
		}
	}
	if (m_gTemp == m_PS4)
	{
		m_gPreferred = "PS4";
	}
	else if (m_gTemp == m_PS5)
	{
		m_gPreferred = "PS5";
	}
	else if (m_gTemp == m_XboxOne)
	{
		m_gPreferred = "Xbox One";
	}
	else if (m_gTemp == m_XboxSeriesX)
	{
		m_gPreferred = "Xbox Series X";
	}
	else if (m_gTemp == m_NintendoSwitch)
	{
		m_gPreferred = "Nintendo Switch";
	}
	else if (m_gTemp == m_Wii)
	{
		m_gPreferred = "Wii";
	}
	else if (m_gTemp == m_PC)
	{
		m_gPreferred = "PC";
	}
	cout << "*" << m_NumberOfGamingStudents << " Gaming Students" << endl;
	cout << "	- Average age of Gaming Students: " << m_gTotalAge / m_NumberOfGamingStudents << endl;
	cout << "	- Most preferred gaming device: " << m_gPreferred << endl;
	cout << "	- Average hours spent consuming gaming entertainment a week: " << m_gTotalHours / m_NumberOfGamingStudents << endl;
	cout << "*" << m_NumberOfNonGamingStudents << " Non Gaming Students" << endl;
	cout << "	- Average age of Non Gaming Students: " << m_nTotalAge / m_NumberOfNonGamingStudents << endl;
	cout << "	- Most preferred streaming service: " << m_sPreferred << endl;
	cout << "	- Average hours spent consuming streaming entertainment a week: " << m_nTotalHours / m_NumberOfNonGamingStudents << endl;
}