#pragma once
#include <string>
#include <iostream>
#include <ctime>
using namespace std;

//Person class characteristics
enum FirstName { Verdell, Sook, Xavier, Lise, Hanna, Lester, Amal, Candance, Edith, Lauren };
enum LastName { Lasley, Nix, Armstrong, Morency, Amico, Bankston, Hawbaker, Wickham, Eisenmann, Winzer };

//Student class characteristics
enum NameOfCollege {GEORGE_BROWN, SENECA, CENTENNIAL, HUMBER, SHERIDAN };
enum NameOfProgram {COMPUTER_SCIENCE, BIOLOGY, ART, BUSINESS, HOSPITALITY};

//non-gaming student characteristics
enum StreamingService { NETFLIX, HULU, CRAVE, DISNEY_PLUS, HBO, AMAZON_PRIME_VIDEO };

//gaming student characteristics 
enum GamingDevice {PS4, PS5, XBOX_ONE, XBOX_SERIES_X, NINTENDO_SWITCH, WII, PC };

const string FirstName[] = { "Verdell", "Sook", "Xavier", "Lise", "Hanna", "Lester", "Amal", "Candance", "Edith", "Lauren" };
const string LastName[] = { "Lasley", "Nix", "Armstrong", "Morency", "Amico", "Bankston", "Hawbaker", "Wickham", "Eisenmann", "Winzer" };
const string sName[] = { "Netflix", "Hulu", "Crave", "Disney+" , "HBO", "Amazon Prime Video" };
const string gName[] = { "PS4", "PS5", "Xbox One", "Xbox Series X", "Nintendo Switch", "Wii", "PC" };
const string cName[] = { "George Brown", "Seneca", "Centennial", "Humber", "Sheridan" };
const string pName[] = { "Computer Science", "Biology", "Art", "Business", "Hospitality" };



class Person
{
private:
	string m_name;
	int m_age{};
public:
	virtual bool IsGaming() const = 0;
	Person()
	{
		SetName("");
	}
	Person(string name, int age)
	{
		SetName(name);
		SetAge(age);
	}
	void SetName(string name)
	{
		this->m_name = name;
	}
	string GetName()const
	{
		return m_name;
	}
	void SetAge(int age)
	{
		this->m_age = age;
	}
	int GetAge() const
	{
		return m_age;
	}
};

class Student : public Person
{
private:
	string m_nameOfCollege;
	string m_nameOfProgram;
	int m_semester{};
public:
	Student()
	{
		SetName("");
		SetAge(0);
		SetCollege("");
		SetProgram("");
		SetSemester(0);
	}
	Student(string name, int age, string college, string program, int semester) : Person(name, age)
	{
		SetCollege((college));
		SetProgram((program));
		SetSemester(semester);
	}
	virtual bool IsGaming() const
	{
		return false;
	}
	void SetCollege(string college)
	{
		this->m_nameOfCollege = college;
	}
	void SetProgram(string program)
	{
		this->m_nameOfProgram = program;
	}
	void SetSemester(int semester)
	{
		this->m_semester = semester;
	}
};

class GamingStudent : public Student
{
private:
	string m_console;
	double m_hours{};
public:
	GamingStudent(string name, int age, string college, string program, int semester, string console, double hours) : Student(name, age, college, program, semester)
	{
		SetGamingDevice(console);
		SetHours(hours);
	}
	virtual bool IsGaming() const
	{
		return true;
	}
	void SetGamingDevice(string console)
	{
		this->m_console = console;
	}
	string GetGamingDevice()
	{
		return m_console;
	}
	void SetHours(double hours)
	{
		m_hours = hours;
	}
	double GetHours()
	{
		return m_hours;
	}
};

class NonGamingStudent : public Student
{
private:
	string m_service;
	double m_hours;
public:
	NonGamingStudent(string name, int age, string college, string program, int semester, string service, double hours) : Student(name, age, college, program, semester)
	{
		SetStreamingService(service);
		SetHours(hours);
	}
	virtual bool IsGaming() const
	{
		return false;
	}
	void SetStreamingService(string service)
	{
		this->m_service = service;
	}
	string GetStreamingSerivce()
	{
		return m_service;
	}
	void SetHours(double hours)
	{
		this->m_hours = hours;
	}
	double GetHours()
	{
		return m_hours;
	}
};

class Survey
{
private:
	int NumberOfGamingStudents = 0;
	int NumberOfNonGamingStudents = 0;
	Person** participants;
	int NUM_PARTICIPANTS;
	bool isGaming;
public:
	void SetNumParticipants(int num)
	{
		NUM_PARTICIPANTS = num;
	}
	void Randomize()
	{
		srand(time(0));
		for(int i = 0; i< NUM_PARTICIPANTS;i++)
		{
			isGaming = rand() % 2;
			if (isGaming)
			{
				participants[i] = new GamingStudent(FirstName[rand() % 9] + " " + LastName[rand() % 9],
					rand() % 36 + 16, cName[rand() % 4], pName[rand() % 4],
					rand() % 8 + 1, gName[rand() % 6], (rand() % 40 + 4));
			}
			else if (!isGaming)
			{
				participants[i] = new NonGamingStudent(FirstName[rand() % 9] + " " + LastName[rand() % 9],
					rand() % 36 + 16, cName[rand() % 4], pName[rand() % 4],
					rand() % 8 + 1, gName[rand() % 5], (rand() % 40 + 4));
			}
		}
		for(int i = 0; i < NUM_PARTICIPANTS; i++)
		{
			cout << participants[i]->GetName();
			cout << participants[i]->GetAge();
		}
	}

	
	//void Process(Survey* participant[], int arraysize)
	//{
	//	for(int i = 0; i < arraysize; i++)
	//	{
	//		if(participant[i]->participants->IsGaming())
	//		{
	//			NumberOfGamingStudents++;
	//		}
	//		else if(!participant[i]->participants->IsGaming())
	//		{
	//			NumberOfNonGamingStudents++;
	//		}
	//	}

	//	cout << NumberOfGamingStudents << endl;
	//	cout << NumberOfNonGamingStudents << endl;
	//}
	
};



//how to calculate average age
//for (int i = 0; i < NUM_Peoples; i++)
//{
//	total_age += arr[i]-getage
//}
//
//total_age/num_peoples


//how to calculate the most preffered streaming service
//int NETFLIX, HULU, CRAVE, DISNEY_PLUS, HBO, AMAZON_PRIME_VIDEO = 0;
//for (int i = 0; i < NUM_Peoples; i++)
//{
//	if(arr[i]->getStreamingservice = 0)
//	{
//		netflix++
//	}
//}

//how to calculate average hours
//for (int i = 0; i < NUM_Peoples; i++)
//{
//	total_hours += arr[i]-gethours
//}
//
//total_hours/num_peoples