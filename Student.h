#pragma once
#include <string>
using namespace std; 
class Student
{
	// Data
private: 
	string name;
	string id;	
	string major;
	// Mutators (set/get functions) 
public: 
	void setName(string n); 
	string getName();

	void setID(string i);
	string getID(); 

	void setMajor(string m);
	string getMajor();


	// define functions 
	void printStudentInfo();


};

