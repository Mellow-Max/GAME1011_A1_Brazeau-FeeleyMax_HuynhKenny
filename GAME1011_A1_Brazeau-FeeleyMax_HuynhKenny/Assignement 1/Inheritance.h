#pragma once
#include <string>
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



class Person
{
private:
	string m_name;
	int m_age{};
public:
	virtual int Age() const = 0;
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
	Student(string name, string college, string program, int semester)
	{
		SetName(name);
		SetCollege((college));
		SetProgram((program));
		SetSemester(semester);
	}
	void SetCollege(string college)
	{
		m_nameOfCollege = college;
	}
	void SetProgram(string program)
	{
		m_nameOfProgram = program;
	}
	void SetSemester(int semester)
	{
		m_semester = semester;
	}
};

class GamingStudent : public Student
{
private:
	GamingDevice m_console;
	double m_hours;
public:
	virtual int Age() const
	{
		return GetAge();
	}
	void SetGamingDevice(GamingDevice console)
	{
		m_console = console;
	}
	GamingDevice GetGaming()
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
	StreamingService m_service;
	double m_hours;
public:

	virtual int Age() const
	{
		return GetAge();
	}
	
	
	void SetStreamingService(StreamingService console)
	{
		m_service = console;
	}
	StreamingService GetGaming()
	{
		return m_service;
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

class Survey : Person
{
private:
	
public:
	void Process(Person* arr[])
	{
		
	}
	
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