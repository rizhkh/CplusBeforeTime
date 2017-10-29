#pragma once
#include <iostream>
#include <fstream>
#include "windows.h"
#include <string.h>
using namespace std;


class staff
{
  protected:
      int code;
      char name[20];
	  char *Name;

	 ifstream infile;
     ofstream outfile;
public:

	  staff()
	  {		code=NULL;
		  for(int i=0;i<20;i++)
		  {name[i]=0;}
	  }

     void getstaff2()
      {
		cout<<"\n\nEnter code :";
		cin>>code;
		cout<<"Enter name :";
		cin.ignore();
		cin.getline(name,20);

		outfile.open( "D:\\Computer Programming docs from pk\\3rd Semester\\OOP\\PROJECT\\282017\\pp\\record22222.txt",ios::app);
			if (!outfile){cout<<"Error";}
				{
				outfile<<"code : "<<code;
				outfile<<"\n";
				outfile<<"Name : "<<name;
				outfile<<"\n";
				}
		outfile.close();
	  }

      void getstaff()
      {
		cout<<"\n\nEnter code :";
		cin>>code;
		cout<<"Enter name :";
		cin.ignore();
		cin.getline(name,20);

		outfile.open( "D:\\Computer Programming docs from pk\\3rd Semester\\OOP\\PROJECT\\282017\\pp\\record22222.txt",ios::app);
			if (!outfile){cout<<"Error";}
				{
				outfile<<"code : "<<code;
				outfile<<"\n";
				outfile<<"Name : "<<name;
				outfile<<"\n\n\n";
				}
		outfile.close();
	  }

	  void setName(char *n=NULL)
	  {
		Name=new char[strlen(n)+1];
		Name= strcpy(Name,n);
		cout<<"   "<<n;
	  }

	  void getName()
	  {
		cout<<name;
	  }
      
      void dispstaff()
      {
		cout<<"NAME : ";
		getName();
		cout<<endl;
    	cout<<"CODE : "<<code;
      }

	void DZSTAFF()
    {
	ifstream infile;
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
	}
	 ~staff()
	  {

	  }
};
