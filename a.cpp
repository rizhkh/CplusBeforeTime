
#include <iostream>
#include <string.h>
#include "windows.h"

using namespace std;
int y;

int main()
{
	int x,y,z;
	
	a:
	
	cout<<"Press 1 for Laptop"<<endl;
	cout<<"Press 2 for Mobile"<<endl;
	cout<<"Press 3 for Shirts"<<endl;
	cout<<"Press 4 for Jeans"<<endl;
	cout<<"Press 5 for Tie"<<endl;
	cin>>x;

	if(x==1)
	{
		cout<<"Dell Laptop\nInspiron"<<endl;
		cout<<"Do you want to buy it press 1 otherwise 0"<<endl;
		cin>>y;
		if(y==1)
		{
			cout<<"Laptop buyed"<<endl;
			cout<<"Do you want to continue press 1 otherwise 0"<<endl;
			cin>>z;
			if(z==1)
			{
				goto a;
			}
			else
			{
				cout<<"Good Byee"<<endl;
			}
		}
		else
		{
			cout<<"Do you want to continue press 1 otherwise 0"<<endl;
			cin>>z;
			if(z==1)
			{
				goto a;
			}
			else
			{
				cout<<"Good Byee"<<endl;
			}
		}
	}
	
	else if(x==2)
	{
		cout<<"Dell Laptop\nInspiron"<<endl;
		cout<<"Do you want to buy it press 1 otherwise 0"<<endl;
		cin>>y;
		if(y==1)
		{
			cout<<"Laptop buyed"<<endl;
			cout<<"Do you want to continue press 1 otherwise 0"<<endl;
			cin>>z;
			if(z==1)
			{
				goto a;
			}
			else
			{
				cout<<"Good Byee"<<endl;
			}
		}
		else
		{
			cout<<"Do you want to continue press 1 otherwise 0"<<endl;
			cin>>z;
			if(z==1)
			{
				goto a;
			}
			else
			{
				cout<<"Good Byee"<<endl;
			}
		}
	}

	else if(x==3)
	{
		cout<<"Dell Laptop\nInspiron"<<endl;
		cout<<"Do you want to buy it press 1 otherwise 0"<<endl;
		cin>>y;
		if(y==1)
		{
			cout<<"Laptop buyed"<<endl;
			cout<<"Do you want to continue press 1 otherwise 0"<<endl;
			cin>>z;
			if(z==1)
			{
				goto a;
			}
			else
			{
				cout<<"Good Byee"<<endl;
			}
		}
		else
		{
			cout<<"Do you want to continue press 1 otherwise 0"<<endl;
			cin>>z;
			if(z==1)
			{
				goto a;
			}
			else
			{
				cout<<"Good Byee"<<endl;
			}
		}
	}
	
	else if(x==4)
	{
		cout<<"Dell Laptop\nInspiron"<<endl;
		cout<<"Do you want to buy it press 1 otherwise 0"<<endl;
		cin>>y;
		if(y==1)
		{
			cout<<"Laptop buyed"<<endl;
			cout<<"Do you want to continue press 1 otherwise 0"<<endl;
			cin>>z;
			if(z==1)
			{
				goto a;
			}
			else
			{
				cout<<"Good Byee"<<endl;
			}
		}
		else
		{
			cout<<"Do you want to continue press 1 otherwise 0"<<endl;
			cin>>z;
			if(z==1)
			{
				goto a;
			}
			else
			{
				cout<<"Good Byee"<<endl;
			}
		}
	}
	
	else if(x==5)
	{
		cout<<"Dell Laptop\nInspiron"<<endl;
		cout<<"Do you want to buy it press 1 otherwise 0"<<endl;
		cin>>y;
		if(y==1)
		{
			cout<<"Laptop buyed"<<endl;
			cout<<"Do you want to continue press 1 otherwise 0"<<endl;
			cin>>z;
			if(z==1)
			{
				goto a;
			}
			else
			{
				cout<<"Good Byee"<<endl;
			}
		}
		else
		{
			cout<<"Do you want to continue press 1 otherwise 0"<<endl;
			cin>>z;
			if(z==1)
			{
				goto a;
			}
			else
			{
				cout<<"Good Byee"<<endl;
			}
		}
	}

	else
	{
		cout<<"Invalid Entry"<<endl;
	}
	return 0;
}
