#pragma once
#include <string>
#include <iostream>
#include <ctime>
using namespace std;


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