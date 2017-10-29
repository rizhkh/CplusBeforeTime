#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include "windows.h"
#include "admin.cpp"
using namespace std;


class student : public staff
{
 
  int marks[20];
  char studentname[20];
  int id;
  int Stclass;
  public:

	student()
	{
	}

	void StudentName()
	{
		cout<<"Enter Name:";
		cin>>studentname;
	}

	void StudentID()
	{
		cout<<"Enter I.D:";
		cin>>id;
	}

	int getID()
	{
		return id;
	}



	void StudentClass()
	{
		cout<<"Enter class/grade:";
		cin>>Stclass;
	}

	int getStudentClass()
	{
		return Stclass;
	}

	void StudentRegisteration()
	{
		StudentName();
		StudentID();
		StudentClass();
	}

	void StudentDisplay()
	{
		cout<<"ID		 Student		Class/Grade";
		cout<<endl;
		cout<<getID()<<"		  "<<studentname<<"			  "<<getStudentClass();
		cout<<endl;
	}
	
/*	void Sdisplay()
	{
	cout<<"ID		 Student		Class/Grade";
	cout<<endl;
	cout<<getID()<<"		  "<<studentname<<"			  "<<getStudentClass();
	cout<<endl;
	}
*/

	~student()
	{
	}

};
















/*
class student : public staff
{
 
	  int marks[20];
	  char studentname[20];
	  int id;
	  int Stclass;
	  int y;
  public:

	student()
	{

		for(int i=0;i<20;i++)
		{
		marks[i]=0;
	  studentname[i]=NULL;
		}


	}

	void StudentName()
	{
	cout<<"Enter Name:";
	cin.ignore();
	cin.getline(studentname,20);
	}

	void StudentID()
	{
	cout<<"Enter I.D:";
	cin>>id;
	}




	void StudentClass()
	{
	cout<<"Enter class/grade:";
	cin>>Stclass;
	}


	void StudentRegisteration()
	{
	cout<<"Enter how many students you wish to add?";
	cin>>y;
	for(int i=0;i<y;i++)
	{
	StudentName();
	StudentID();
	StudentClass();
	}
	}

	void StudentDisplayALLRECORDS()
	{
	cout<<"ID		 Student		Class/Grade";
	cout<<endl;
	outfile.open( "D:\\PROOOJECT\\pp\\STUDENT.txt",ios::app);
	for(int i=0;i<y;i++)
	{
	cout<<endl;
			if (!outfile){cout<<"Error";}
				{
				outfile<<"code : "<<code<<"\n";
			outfile<<id<<"		  "<<studentname[i]<<"			  "<<Stclass<<"\n";
				}
	}
		outfile.close();

	}


	void StudentDisplay()
	{
	cout<<"ID		 Student		Class/Grade";
	cout<<endl;
	for(int i=0;i<y;i++)
	{
	cout<<endl;
	outfile<<id<<"		  "<<studentname[i]<<"			  "<<Stclass<<"\n";
				
	}

	}
	
/*	void Sdisplay()
	{
	cout<<"ID		 Student		Class/Grade";
	cout<<endl;
	cout<<getID()<<"		  "<<studentname<<"			  "<<getStudentClass();
	cout<<endl;
	}

  //////////////////////
/ 

~student()
	{
	}

};

*/
