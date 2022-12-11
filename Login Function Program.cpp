#include<iostream>
#include<string>
#include<conio.h>
#define ENTERKEY 13
#define TAB 9
#define BKSP 8
#define SPACE 32
using namespace std;
string Login_Function()
{
	string FirstName,SecondName;
	char pswd[100],password[9]="12345678",ch;
    int count=0,i,flag=0;
    for(;;)
    {
	cout<<"                            ================================================================\n";  
    cout<<"                            |             Enter user name and password for login           |\n";
	cout<<"                            ================================================================\n";
	{
	i=0;
	cout<<"\t\t\t\t\t\tFirst Name :";
    cin>>FirstName;
    cout<<"\t\t\t\t\t\tLast Name  :";
    cin>>SecondName;
    cout<<"\t\t\t\t\t\tPassword   :";
    while(1)
    {
	ch=getch();
	if(ch==ENTERKEY)
	{
	   pswd[i]='\0';
	   if(i>=6)
	   {
	   break;
		}
		}
		else if(ch==BKSP)
		{
			if(i>0)
			{
				i--;
				cout<<"\b \b";
			}
		}
		else if(ch==TAB||ch==SPACE)
		{
			continue;
		}
		else
		{
			pswd[i]=ch;
			cout<<"*";
			i++;
		}
	}
	for(int j=0;j<i;j++)
	{
		if(i<=8)
		{	
		if(pswd[j]==password[j])
		{
			count++;
		}
	    }
	}
	if((FirstName=="Ahsan"||FirstName=="Rajput")&&(SecondName=="Abdul"||SecondName=="Wahab"||SecondName=="Satti")&&count==8)
	{
		if(FirstName=="Ahsan")
		{
			return FirstName;
		}
		else
		{
			return SecondName;
		}
		break;
		system("cls");
		flag=1;	
	}
	else
	{
		if((flag==0)&&(count!=8))
		{
		cout<<"\n\t\t\t\t\t\tSorry incorrect username and password : Try again"<<endl;
	
		}
		else if(count==8)
		{
		cout<<"\n\t\t\t\t\t\tSorry incorrect username : Try again"<<endl;
	
	    }
	    else if(count!=8)
	    {
		
	    cout<<"\n\t\t\t\t\t\tSorry incorrect password :Try again"<<endl;
	
		}
		
	    }
	
       }
	    count=0;
		cout<<"\t\t\t\t\t\tPress any key to continue...........";
		getch();
		system("cls");
  }  
}

