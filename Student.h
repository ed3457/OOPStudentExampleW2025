#pragma once
#include <string>
#include <iostream>
using namespace std; 
class Student
{
	// Data
private: 
	string name;
	string id;	
	string major;
	
public: 
	// Mutators (set/get functions) 
	void setName(string n); 
	string getName();

	void setID(string i);
	string getID(); 

	void setMajor(string m);
	string getMajor();

	// define functions 
	void printStudentInfo();


};

