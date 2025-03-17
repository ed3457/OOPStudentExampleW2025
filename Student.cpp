#include "Student.h"

void Student::setName(string n)
{
	//TODO: validation + exception handling  
	if (n == "")
		throw 1; // means empty name 
	name = n; 
}

string Student::getName()
{
	return name; 

}

void Student::setID(string i)
{
	if (i == "")
		throw 1; // means empty ID 
	id = i;
}

string Student::getID()
{
	
	return id; 
}

void Student::setMajor(string m)
{
	if (m == "")
		throw 1; // means empty name 
	if (m != "CS" && m != "Eng") // invalid major 
		throw 2; 
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

Student::Student(string n, string i, string m)
{
	setName(n);
	setID(i);
	setMajor(m);

}

Student::Student()
{
	setName("not set yet");
	setID("not generated");
	setMajor("not set yet");

}

Student::Student(string n, string i)
{
	setName(n);
	setID(i);
}