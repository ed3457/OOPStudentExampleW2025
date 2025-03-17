#include <iostream>
using namespace std; 
#include "Student.h"
int main()
{

	try
	{
		Student student1("Jack", "", "CS");

		student1.printStudentInfo();

	}
	catch (int errorCode)
	{

		switch (errorCode)
		{

		case 1:// handle empty input 
		{
			cout << "You can't insert empty input!\n";
		}
		break; 

		case 2:
		{
			cout << "Wrong major input!\n";
		}
		break; 
		}


	}
	catch (string errorCode)
	{



	}



}

