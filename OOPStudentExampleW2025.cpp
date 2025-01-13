#include <iostream>
using namespace std; 
#include "Student.h"
int main()
{
	Student student1;
	Student student2;

	student1.setID("12345");
	student1.setName("Jack");
	student1.setMajor("Math");

	student1.printStudentInfo();

}

