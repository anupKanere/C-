#include <iostream>
using namespace std;
/*
			student
			   |
		   -----------
		   |	      |
		 Test 		Sports
		  |			  |
		  -------------
				|
			  Result
because of creating virtual class we will get only one copy of roll no in result class 
so basically it solves the ambiguity problem of inheriting multiple same variables
*/

class Student
{
protected:
	int rollNo;

public:
	void setRoll(int a) // constructor
	{
		rollNo = a;
	}
	void printRoll()
	{
		cout << "Your roll no is : " << rollNo << endl;
	}
};

class Test : public virtual Student
{
protected:
	float maths, physics;

public:
	void setMarks(float a, float b)
	{
		maths = a;
		physics = b;
	}
	void printMarks()
	{
		cout << "Your Marks are : " << endl
			 << "Maths : " << maths << endl
			 << "Physics : " << physics << endl;
	}
};

class Sports : public virtual Student
{
protected:
	float score;

public:
	void setScore(float a)
	{
		score = a;
	}
	void printScore()
	{
		cout << "Your Sports marks are : " << score<< endl;
	}
};

class Result : public virtual  Test, public virtual Sports
{
	protected :
	float percentage;
	public :
	void displayResult(){
		percentage = (maths + physics + score) / 3;
		printRoll();
		printMarks();
		printScore();
		cout << "You got "<< percentage << " %"<<endl; 

	}
};

int main()
{
	Result ak;
	ak.setRoll(1);
	ak.setMarks(75.7 , 85.35);
	ak.setScore(95.5);
	ak.displayResult();


	return 0;
}
