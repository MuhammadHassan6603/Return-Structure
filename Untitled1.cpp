#include<stdio.h>
#include<string.h>
struct Student
{
	int rollNo;
	char name[20];
	float marks;	
};
struct Student myFun()
{
	struct Student s1 ={338,"Hassan",34.6f};
	return s1;
}

int main()
{
	struct Student s2;
	s2=myFun();
	printf("\n\nS2 Roll No = %d \nS2 Name = %s \nS2 Marks = %.1f ",s2.rollNo,s2.name,s2.marks);
}
