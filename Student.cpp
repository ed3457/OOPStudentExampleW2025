#include "Student.h"

void Student::setName(string n)
{
	//TODO: validation + exception handling  

	name = n; 
}

string Student::getName()
{
	return name; 

}

void Student::setID(string i)
{
	id = i;
}

string Student::getID()
{
	return id; 
}

void Student::setMajor(string m)
{
	major = m;
}

string Student::getMajor()
{
	return major;
}

void Student::printStudentInfo()
{
	cout << getName() << endl;
	cout << getID() << endl;
	cout << getMajor() << endl;
}