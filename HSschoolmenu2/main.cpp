
#include <iostream>
#include <string.h>
#include "windows.h"
#include "admin.cpp"
#include "officer.cpp"
#include "teacher.cpp"
#include "student.cpp"
using namespace std;
int y;


int main()
{
teacher T;
student s;
officer  ofc[20];
char user[20];
char pass[10];
char pass2[10]={"1234"};
//staff s[20];
int choice,i;
char test;

while(1)
{
int count;

start:
	   cout<<"		**************************\n";
	   cout<<"		*:::::::MANAGEMENT:::::::*\n";
	   cout<<"		**************************\n";
	   cout<<"		[Menu]\n";
	   cout<<"		1)   Teachers\n";
	   cout<<"		2)   Administration\n";
	   cout<<"		3)   Exit\n";
	   cout<<"		Input:";
	   cin>>choice;
	   cout<<"\n\n\n\n";
switch(choice)
{
	//************************///
    //////////CASE1//////////////
	//************************///
case 1 :  
			system("CLS");
while(1)
{
	cout<<"		**************************\n";
	cout<<"		*:::::[Teachers Menu]::::*\n";
	cout<<"		**************************\n";
	cout<<"		1) Create\n";
	cout<<"		2) Display all record\n";
	cout<<"		3) Class\n";
	cout<<"		4) Timing class\n";
	cout<<"		5) Quiz marks\n";
	cout<<"		6) Display temp record\n";
	cout<<"		7) Jump to Main Menu\n";
	cout<<"		Input:";	
	cin>>choice;
 ///////////////////////////     
	switch(choice)
	{
	case 1 :{do{aa:
	
	cout<<endl;
	T.create();
	//count++;
	cout<<endl;


	cout<<"\n\nAre you Interested in entering data\n";
	cout<<"Enter y or n:-";
	cin>>test;
	if(test=='y' || test=='Y')
	goto aa;
	else goto out1;
			}while(test!='y');
			}
///////////////////////////
	 out1:			system("CLS");
	 break;					
/////////////////////////		 
	case 2 :
	{
			system("CLS");
	char ii;
	cout<<"Enter any key to continue" ;
	do{
			cout<<endl;
			T.DZSTAFF();
			cout<<endl;
			
cin>>ii;
	}while(ii=='y');
				system("CLS");
	}
	break;
///////////////////////////				
	case 3 :  
		{bb:
//	system("CLS");
	cout<<endl;
	T.startClass();
	//count++;
	cout<<endl;
	cout<<"\n\nRe-Entry:?\n";
	cout<<"[Y] or [N]:";
	cin>>test;
	if(test=='y' || test=='Y'){
		goto bb;}
	else goto out1;
	}
///////////////////////////
 	case 4 :  
		{cc:
	cout<<endl;
	T.calcClassTime();
	//count++;
	cout<<endl;
	cout<<"\n\nConfirm(enter [N] again)\n";
	cout<<"Input:";
	cin>>test;
	if(test=='y' || test=='Y'){
	system("CLS");
		goto cc;}
	else goto out1;
	}
///////////////////////////
	
	case 5 : {ee: 
	system("CLS");
	cout<<endl;
	T.EnterMarks();
	T.getMarks();	
	//count++;
	cout<<endl;
	cout<<"\n\nAre you Interested in entering data\n";
	cout<<"Enter y or n:-";
	cin>>test;
	if(test=='y' || test=='Y')
	goto ee;
	else goto out1;
			 }
///////////////////////////

	case 6 :
	{
			system("CLS");
	char ii;
	do{
			cout<<endl;
			T.dispstaff();
				cout<<"Enter any key to continue" ;
			cin>>ii;
	}while(ii=='y');
	}
	break;
//==========================
		case 7 :{system("CLS");
			goto start;}
///////////////////////////					
	 default:
	 cout<<"\nEnter choice is invalid\ntry again\n\n";
	 }

 }


	//************************///
    //////////CASE2//////////////
	//************************///
 case 2 :   
  cout<<"Enter Username and Password\n";
  cout<<"Username:" ;
  cin>>user;
  cout<<"Password:" ;
  cin>>pass;
  if(strcmp(user,pass)){cout<<"WRONG PASSWORD\n\n\n";}
  else {


	while(1)
    {
	cout<<"		*****************************\n";
	cout<<"		*:::[ADMINISTRATION MENU]:::*\n";
	cout<<"		*****************************\n";
	cout<<"		1) Student Registeration\n";
	cout<<"		2) Display\n";
	cout<<"		3) Create Pay-Structre\n";
	cout<<"		4) Pay-Structre\n";
	cout<<"		5) Display all records\n";
	cout<<"		6) Jump to Main Menu\n";
	cout<<"		Input:";
	cin>>choice;
		
	switch(choice)
	{
		case 1 :
		{	
		 for(count=0,i=0;i<10;i++)
		 {
		 cout<<endl;
		 ofc[i].create();
		 count++;
		 cout<<endl;
		 cout<<"\n\nAre you Interested in entering data\n";
		 cout<<"Enter y or n:-";
		 cin>>test;		
		  if(test=='y' || test=='Y')
			{
			continue;
			}	
		 else
			{
			goto out2;
			}                 
					
		 }
		}
//////////////////////
		out2:
		break;
//////////////////////
		case 2 : 
		{	
		ofc[1].distemp();
		 for(i=0;i<count;i++)
          {
		  ofc[i].display();
          cout<<endl;
          }
         break;
		}
//////////////////////
		case 3 :
			{	cv:

			 cout<<endl;
			 ofc[0].payStructre();
			 cout<<endl;
			 cout<<"\n\nPay set.If you wish to change enter [Y]\n";
			 cout<<"Enter y or n:-";
			 cin>>test;
			 	
				if(test=='y' || test=='Y')
					{
						goto cv;
					}
					
				else
					{system("CLS");
						goto out2;
					}                 
					
			
		}
///////////////////////////////
//***************************//
///////////////////////////////////////////
/*
                 out3:
                 break;
*/

				case 4 :
		{
			 cout<<"\n\n\n";
			 ofc[0].payCalc();
			 cout<<endl;
			 cout<<"\n\nContinue:\n";
			 cout<<"Enter:";
			 cin>>test;
			 system("CLS");
				if(test=='y' || test=='Y')
					{
						continue;		system("CLS");;
					}
				else
					{
						goto out2;
					}                 
					
			
		}
//////////////////////////
	case 5 : 
		{	
		ofc[1].distemp();
		 for(i=0;i<1;i++)
          {
		  ofc[i].DZSTAFF2();
          cout<<endl;
          }
         break;
		}


//////////////////////
		case 6 :
			{	system("CLS");
			goto start;
			}
//////////////////////
         default:
			 {
				cout<<"\nInvalid choice\ntry again\n\n";
			 }

	}
}

	//************************///
    //////////CASE4//////////////
	//************************///
           case 3 : goto end;
    }
 }
}
end:
 
 ;
 }
