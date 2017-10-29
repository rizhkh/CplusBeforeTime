#pragma once
#include <iostream>
#include <string.h>
#include "windows.h"
#include "admin.cpp"
using namespace std;

class officer : public staff
{
       char grade;
	   int syp;
	  int marks[20];
	  char studentname[20];
	  int id;
	  int Stclass;

   public:

		officer()
		{
syp=0;
		}

	void Registeration()
	{

	}


    void create()
    {
       getstaff2();
       cout<<"Enter Grade/Class :-";
       cin>>grade;
	   	/////////////////////////////////////////////
		outfile.open( "D:\\Computer Programming docs from pk\\3rd Semester\\OOP\\PROJECT\\282017\\pp\\record22222.txt",ios::app);
			if (!outfile){cout<<"Error";}
				{
				outfile<<"Grade/Class : "<<grade;
				outfile<<"\n---\n";
				}
		outfile.close();
    }

	void distemp()
	{
	cout<<"\nID			Name 		 GRADE      \n";
	}
    void display()
    {
	cout<<code<<"			   "<<name<<"		     "<<grade;
    }

	void payStructre()
	{
	cout<<"Enter yearly pay for teachers:";
	cin>>syp;
	}


		void payCalc()
	{int t=0;
	int	io=0;
		t=syp/12;
		cout<<"Monthly-Pay:"<<t;
		cout<<endl;
	io=t/30;
	cout<<"Daily-Pay:"<<io;
		}


	void DZSTAFF2()
    {ifstream infile;
	infile.open( "D:\\Computer Programming docs from pk\\3rd Semester\\OOP\\PROJECT\\282017\\pp\\record22222.txt");
	char output[100];
		if ( infile.is_open() )
		{
		 while (!infile.eof()) 
		 {
		 infile.getline (output,100);
		 cout<<output<<"\n";
		 }
		 cout<<"zzzzzzzzzzzzzzz";
		 //cout<<output<<"\n";
		 cout<<"zzzzzzzzzzzzzzzz";
		}
	////////////////////
	}


		~officer()
		{

		}
};
