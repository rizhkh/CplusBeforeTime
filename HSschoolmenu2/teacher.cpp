#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include "windows.h"
#include "admin.cpp"
using namespace std;


class teacher : public staff
{
char sub[20];
char pub[20];
int stdmarks;
int *marks;
int tmarks;
int classtime2[20];
  	  
public:
int classtime;

teacher()
{		 
	for(int i=0;i<20;i++)
	{
		sub[i]=0;pub[i]=0;
	}
	
	classtime=0;
	sub[20]=0;
}

void create()
{
	getstaff();
	cout<<"Enter Subject :";
	cin>>sub;
	//cin.getline(sub,20,'\n');
}


int getClasstime()
{
	return classtime;
}

void startClass()
{
	char strt;	
	cout<<"Start class(Enter [Y] to start)?:";
	cin>>strt;
	
	if(strt=='y' || strt=='Y')
	{
		cout<<"Class can only be started\n";
		cout<<"between 7 to 16 hours(Till 4 P.M)\n";
		cout<<"Enter class time:";
		cin>>classtime;
	
	//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
	//                   ** MAKE THIS MORE CLEAR
	//
	//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
	
	
	//while(classtime>7 || classtime<16 || classtime)
		if (classtime<7 || classtime>16)
		{
			cout<<"Invalid";
			classtime=0;
		}
		/*	
		else if(classtime==13 || classtime==14 || classtime==15 || classtime==16)
		{
			if(classtime==13){classtime==1;cout<<"proceeding";}
			if(classtime==14){classtime==2;cout<<"proceeding";}
			if(classtime==15){classtime==3;cout<<"proceeding";}
			if(classtime==16){classtime==4;cout<<"proceeding";}
		}

			else if(classtime==1 || classtime==2 || classtime==3 || classtime==4)
		{
			if(classtime==1){classtime==13;cout<<"proceeding";}
			if(classtime==2){classtime==14;cout<<"proceeding";}
			if(classtime==3){classtime==15;cout<<"proceeding";}
			if(classtime==4){classtime==16;cout<<"proceeding";}
		}*/

	}
	
	else 
	{	 
		cout<<"proceeding...";
	}
}


void calcClassTime()
{
    //int calctime;
	char op;
	for(int i=0,calc=90;i<91;i++,calc--)
	{
		system("cls");
		Sleep(100);
		classtime2[1]=calc;
		cout<<"Started				Timeleft		starttime\n";
		//calctime=90;
		//calctime=calctime-1;
		cout<<"90					"<</*calc*/classtime2[1]<<"		   "<<getClasstime();
		cout<<"\n";
		cout<<"\n\n\n\n(Enter n to go back)\nInput:" ;
		cin>>op;
		if(op=='n')break;
	}
}

void EnterMarks()
{
	cout<<"Enter number of students who's marks will be entered :";
	cin>>stdmarks;
	cout<<"Enter Subject :";
	cin>>sub;
	cout<<"Total marks:";
	cin>>tmarks;
	marks=new int[stdmarks];
	
	for(int i=0;i<stdmarks;i++)
	{
		cout<<"Enter Marks:";
		cin>>marks[i];
		
		if(marks[i]>tmarks)
		cout<<"invalid\n" ;
	}

}


void getMarks()
{
	for(int i=0;i<stdmarks;i++)
	{
		if(marks[i]==NULL)cout<<"No quiz taken" ;
		
		else
		{
			cout<<" Marks:"<<marks[i];
							//	if(marks[i]>tmarks)cout<<"invalid entered.\n" ;
							//	else{ cout<<marks[i];}
			cout<<endl;
		}
	}

	outfile.open("D:\\Computer Programming docs from pk\\3rd Semester\\OOP\\PROJECT\\282017\\pp\\record22222.txt",ios::app);
	if (!outfile)cout<<"Error";
	
	
	{
		outfile<<"Quiz Info : \n";
		outfile<<"[QUIZ ADDED]\n";
		outfile<<"subjects : "<<sub<<"\n";
		for(int i=0;i<stdmarks;i++)
		{
			if(marks[i]==NULL)cout<<"No quiz taken" ;
			else
			{
				outfile<<"\n Marks:"<<marks[i];
				outfile<<"\n---\n";
			}
		}
	}
	outfile.close();
/*
	outfile.open( "D:\\pp\\record22222.txt",ios::app);
	if (!outfile){cout<<"Error";}

			for( i=0;i<stdmarks;i++)
			{
			outfile<<"Quiz Info:\n" ;
			outfile<<"Subject :"<<sub ;
				if(marks[i]>tmarks)
					{outfile<<"invalid entered.\n" ;
					}
				else
					{ 
					outfile<<"Marks :"<<marks[i];
					outfile<<"\n";
					}
			}
	outfile.close();*/
}

void display()
{
	dispstaff();
	cout<<"\nSUBJECT : "<<sub;
	cout<<endl;
	cout<<"Quiz info :\n";
	getMarks();
}

~teacher()
{
}

};
