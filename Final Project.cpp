#include<iostream>
#include<fstream>
#include<windows.h>
#define NUM 10

using namespace std;

int R[20],price=0,price1=0;
void tofile(int j);
int o=0,p=0;
void fromfile();
int fromfile1(char ch[],int &num,int &mob,int &room,char date[]);
void tofile1(char ch[],int num,int mob,int room,char date[]);

int main ()
{

fromfile();			//function calling

int choice1,choice2,choice3,choice4,choice5,choice6,choice7;

string name1,name2,name3,name4;

char name5[20];

int room,book,table,mobile;

string user1;

int c_num1[NUM],c_num2[NUM], c_num3, c_num4, c_num5;

string na,pass;

	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\n\t\t";
	cout<<"                         ================================================================\n";  
    cout<<"                   \t\t         |             Enter user name and password for login           |\n";
	cout<<"                       \t\t\t ================================================================\n";
main:	
	cout<<"\n\n\t\t\t\t\tEnter your Name please : ";
	getline(cin,na);
	cout<<"\n\t\t\t\t\tEnter Your Password : ";
	getline(cin,pass);
	
	if((na=="I"||na=="AMNA ZAMEER"||na=="UBAID-UR-REHMAN")&&(pass=="**"))
    {
	cout<<"\n\n\n\t\t\t\t\t";
 	 cout<<"\t\t\t\n\t\t\t\t\t\tPlease Wait.....\n";
	 cout<<"\n\n\t\t\t\t\t\t";
	 cout<<"Loading";
 	Sleep(500);
 	cout<<".";
 	Sleep(500);
 	cout<<".";
 	Sleep(500);
 	cout<<".";
 	Sleep(500);
 	cout<<".";
 	Sleep(500);
 	cout<<".";
 	Sleep(500);
 	cout<<".";
 	Sleep(500);
 	cout<<".";
 	system("cls"); 	
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@@!---------------------------------------------------------------------------------------!@@@\n";
cout<<"\t\t\t\t\t@@@!                                           		                                   !@@@\n";
cout<<"\t\t\t\t\t@@@!                                           		                                   !@@@\n";
cout<<"\t\t\t\t\t@@@!                                           		                                   !@@@\n";
cout<<"\t\t\t\t\t@@@!                                           		                                   !@@@\n";
cout<<"\t\t\t\t\t@@@!                     ************************************************                  !@@@\n";
cout<<"\t\t\t\t\t@@@!                     * ******************************************** *                  !@@@\n";
cout<<"\t\t\t\t\t@@@!                     * *            WELCOME TO                    * *                  !@@@\n";
cout<<"\t\t\t\t\t@@@!                     * *                                          * *                  !@@@\n";
cout<<"\t\t\t\t\t@@@!                     * *     RESTAURANT MANAGEMENT SYSTEM         * *                  !@@@\n";
cout<<"\t\t\t\t\t@@@!                     * ******************************************** *                  !@@@\n";
cout<<"\t\t\t\t\t@@@!                     ************************************************                  !@@@\n";
cout<<"\t\t\t\t\t@@@!                                                                                       !@@@\n";
cout<<"\t\t\t\t\t@@@!                                                                                       !@@@\n";
cout<<"\t\t\t\t\t@@@!                                                                                       !@@@\n";
cout<<"\t\t\t\t\t@@@!                                                                                       !@@@\n";
cout<<"\t\t\t\t\t@@@!---------------------------------------------------------------------------------------!@@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";

system("color 2e");

cout<<"Enter 1 To Continue : \t";
op:	cin>>user1;

if(user1=="1")
{
system("cls");

cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  RESTAURANT MANAGEMENT SYSTEM \n\n";
cout<<"\t\t\t\t\t\t\t\t--------------------------------";
cout<<"\n\n\t\t\t\t\t\t\t          LOGIN BY USER NAME & PASSWORD \n";

cout<<endl<<endl<<endl;


system("cls");

int i;

	c:
		
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  RESTAURANT MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t|+++----------------------------------------------------------------+++|\n";
cout<<"\t\t\t\t\t\t|             1. >> Information About The Restaurant                   |\n";
cout<<"\t\t\t\t\t\t|             2. >> Online Booking                                     |\n";
cout<<"\t\t\t\t\t\t|             3. >> Online Menu For Home Delivery                      |\n";
cout<<"\t\t\t\t\t\t|             4. >> Parking Areas For Vehicles                         |\n";
cout<<"\t\t\t\t\t\t|             5. >> Add Or Delete Record Of Rooms                      |\n";
cout<<"\t\t\t\t\t\t|             6. >> Refreshment(Canteen)                               |\n";
cout<<"\t\t\t\t\t\t|             7. >> Customer Complaints                                |\n";
cout<<"\t\t\t\t\t\t|             8. >> Exit The Program                                   |\n";
cout<<"\t\t\t\t\t\t|+++----------------------------------------------------------------+++|\n\n";

cout<<"\t\t\t\t\t\tEnter your choice: ";

a:	cin>>i;

if(i<1||i>8)
{
	cout<<"\t\t\t\t\t\tInvalid Input!Try Again.\n";
	goto a;
}
	else
	{
		switch(i)
		{
				
			//case 1 main menu	
				
			case 1:  
			{
			
				    system("cls");
					
					cout<<"Restaurant was established on 1st of January in 2015 at Rawalpindi.\n\n"<<"This is to inform you that we are now officially in your neighborhood,at your service.\n\n"<<"We have some of the finest workers & staff employed in our establishment.\n\n"<<"We gurantee you the best experience of eating out-only at Eat Out!.\n\n\n";
				
					system("pause");
					system("cls");
					goto c;
				    break;
					
			}   //case 1 close main menu
			
			//case 2 main menu
			
			case 2:
				{
				
				    system("cls");

cout<<endl<<endl<<endl;					                      		                                   
cout<<"\n\n\n\n\n\n\n";					  				                      		                   

	m:

cout<<"\t\t\t\t\t\t               ********************************************                      \n";
cout<<"\t\t\t\t\t\t               &      1.> Online Room Booking             &                      \n";
cout<<"\t\t\t\t\t\t               &      2.> Book Table For Dinner           &                      \n";
cout<<"\t\t\t\t\t\t               &      3.> Cancel Booking                  &                      \n";
cout<<"\t\t\t\t\t\t               &      4.> Back To Main Menu               &                      \n";
cout<<"\t\t\t\t\t\t               ********************************************                      \n";
					
					cout<<"\n Enter Your Choice\n";
				i:	cin>>choice1;
		
				int days,ch123;
				
				char card[20];
				
					switch(choice1)
					{
					
							
						case 1:
							{
							
							cout<<"\n Enter Your CNIC Number\n";
							cin>>c_num2[o];
                            cout<<"\n Enter Your Name\n";
                            cin>>name3;
                            cout<<"\n Which Room You Want To Book\n";
							cout<<"\n\t 1. AC Room\n";
							cout<<"\n\t 2. Non AC Room\n";
							cin>>room;
							cout<<"Number of days\n";
							cin>>days;
							
							o++;
							
							if(room==1)
							{
								cout<<"\n Rent Of This Room Is 5000 Per Night\n";
								cout<<"\n Do You Want To Book This Room?\n";
								cout<<"\n\t 1. Yes         2. No\n";
                                        
								cin>>book;
								if(book==1)
								{
									cout<<"Chose paying method(1.Cash"<<"\t"<<"2.Debit Card)\t";
									cin>>ch123;
									
								if(ch123==2)
									{
										cout<<"Enter Your debit card number:\t";
										cin>>card;
									}
									cout<<"\n You have successfuly book this room.Thank You\n";
	   								cout<<"Your total bill="<<5000*days;                             
									cout<<endl;
									
									system("pause"); 						
									system("cls");
							        goto m;
								}
								else
								{
									cout<<"You have not book this room.\n";
									cout<<"\n----------";
								
									system("pause");
									system("cls");
									goto m;
								}
							}
							else if(room==2)
							{
								cout<<"\n Rent Of This Room Is 2500 Per Night\n";
								cout<<"\n\t Do You Want To Book This Room?\n";
								cout<<"\n\t 1. Yes         2. No\n";
								cin>>book;
								
								if(book==1)
								{
									cout<<"Chose paying method(1.Cash"<<"\t"<<"2.Debit Card)\t";
									cin>>ch123;
	
								if(ch123==2)
									{
										cout<<"Enter Your Debit Card Number:\t";
										cin>>card;
									}
										
										cout<<"\n You have successfuly book this room.Thank You\n";
										
										cout<<"Your total bill="<<2500*days;	
									cout<<endl;	
									system("pause");
							    	system("cls");
							    	goto m;
								}
							else
								{
									cout<<"You have not book this room.\n";
									cout<<"\n----------";
									system("pause");
									system("cls");
									goto m;
								}
							}
							
							break;
						}
							case 2:
							{
				
								cout<<"\n Enter Your CNIC Number\n";
							    cin>>c_num1[p];
                                cout<<"\n Enter Your Name\n";
                                cin>>name4;

								cout<<"\n Kindly Select Table & We Will Book That Table For You\n";
								cout<<"\n1. 2 Chairs         2. 4 Chairs\n";
								cout<<"\n3. 6 Chairs         4. Random  \n";
								cin>>table;
								p++;				
					if(table==1||table==2||table==3)
								{
								
								cout<<"Chose paying method(1.Cash"<<"\t"<<"2.Debit card)\t";
								cin>>ch123;
								
								if(ch123==2)
									{
										cout<<"Enter Your Debit Card Number:\t";
										cin>>card;	
									}		
									cout<<"\n\t You have successfully book this table.Thank You\n";
									
									system("pause");
									system("cls");
									goto m;
								}
								else if(table==4)
								{
									cout<<"\n How Many Chairs You Want To Set On This Table\n";
									cin>>choice2;
									
									cout<<"\n OK  We Will Set  "<< choice2  <<  " Chairs On This Table\n";
									cout<<"Chose paying method(1.Cash\t"<<"2.Debit Card)\t";
									cin>>ch123;
									if(ch123==1)
											{
												cout<<"\n\t You have successfully book this table.Thank You\n";
												system("pause");
												system("cls");
												goto m;
											}
									else if(ch123==2)
											{
												cout<<"Enter Your Debit Card Number:\t";
												cin>>card;
												
												cout<<"\n\t You have successfully book this table.Thank You\n";
												system("pause");
												system("cls");
												goto m;
												
											}
									else
										{
											cout<<"Invalid Input\n";
											goto m;
										}			
								
									system("pause");
									system("cls");
									goto m;
								}
							
								break;
							
								}
							
								case 3:
							{
									
									
									int c_num;
									
									cout<<"\n Do you Want To Cancel Your Room Booking Or Table Booking\n";
									cout<<"\n\t1. Room       2. Table\n";
									h:cin>>choice3;
									
									if(choice3==1)
									{
										cout<<"\n Enter Your CNIC Number \n";
								we:		cin>>c_num;
										
										int i;
										
										for( i=0;i<o;i++)
										if(c_num==c_num2[0])
										{
											cout<<"\n Your Booking For Room Has Been Cancelled & Your Money Is Sent Back\n";
											
											system("pause");
											
											o--;
											
											system("cls");
										
										break;
										
										}
										
									else if (i==o)
									{
										cout<<"Your CNIC number does not match.Please enter your CNIC Number again.\n";
										goto we;
									}
										system("cls");
										goto m;
									}
									else if(choice3==2)
									{ 
										cout<<"\n Enter Your CNIC Number \n";
										n:cin>>c_num3;
										
										for(i=0;i<p;i++)
										 if(c_num3==c_num1[i])
										{								
											cout<<"\n Your Booking For Table Has Cancelled & Your Money Is Sent Back\n";
											system("pause");
											p--;
											
										system("cls");
										goto m;
										}
										
									else
									{
										cout<<"Your CNIC number does not match.Please enter your CNIC Number again.\n";
										goto n;
									}
									
									}
									else
									{
										cout<<"Invalid choice!.Enter your choice again.\n";
										goto h;
									}
							
									break;
						}
								case 4:
							
									system("cls");
									goto c;
									break;
					
									default:
									system("cls");
								    cout<<"Invalid Input.Try Again! ";
									goto i;				
					}
					
									break;
									
				}   //close case 2 main menu
			
			//case 3 main menu
										
			case 3:
					{
													
								system("cls");
				
cout<<endl<<endl<<endl;					                      		                                   
cout<<"\n\n\n\n\n\n\n";
					  				                      		                   
								int piz=0,bug=0,shm=0,bir=0;	
			v:
											    
cout<<"\t\t\t\t\t\t               ============================================                      \n";
cout<<"\t\t\t\t\t\t               *       1.>> Available Fast Food           *                      \n";
cout<<"\t\t\t\t\t\t               *       2.>> Bill pay                      *                      \n";
cout<<"\t\t\t\t\t\t               *       3.>> Back To Main Menu             *                      \n";
cout<<"\t\t\t\t\t\t               ============================================                      \n";
				
				cout<<"Enter Your Choice\n";
		    q:	cin>>choice5;
						
					if(choice5==1)
                    {
                    	system("cls");
						cout<<endl<<endl<<endl;					                      		                                   
						
						price=0;
						
						me:	

cout<<"\n\n\n\n\n\n\n";					  				                      		                             	
cout<<"\t\t\t\t\t\t               ============================================                      \n";
cout<<"\t\t\t\t\t\t               *                                          *                      \n";
cout<<"\t\t\t\t\t\t               *       1.>> Pizza       (Rs.230)          *                      \n";
cout<<"\t\t\t\t\t\t               *       2.>> Burger      (Rs.150)          *                      \n";
cout<<"\t\t\t\t\t\t               *       3.>> Shawarma    (Rs.130)          *                      \n";
cout<<"\t\t\t\t\t\t               *       4.>> Biryani     (Rs.70)           *                      \n";
cout<<"\t\t\t\t\t\t               *       5.>> Back To Order Menu            *                      \n";
cout<<"\t\t\t\t\t\t               *                                          *                      \n";
cout<<"\t\t\t\t\t\t               ============================================                      \n";	
					
					
						int ch;
						
						cout<<"Enter Your Choice Please\n";
						cin>>ch;
						
				switch(ch)
				{
					
				case 1:
				
				{
					int cnum;
					
					cout<<"Enter quantity: ";
					cin>>piz;
						
					price1=price1+(230*piz);
					
					cout<<"\nEnter Credit Card Number: ";
					cin>>cnum;

							
					cout<<"You have successfully ordered your dish.Thank you\n";	
					
					system("pause");
					system("cls");
					goto me;
				}
					case 2:
				
					{
						int cnum1;
						
						cout<<"Enter quantity: ";
						cin>>bug;

						price1=price1+(150*bug);
						
						cout<<"\nEnter Credit Card Number: ";
						cin>>cnum1;
								
						cout<<"You have successfully ordered your dish.Thank you\n";	
						
						system("pause");
						system("cls");
						goto me;
					
					}
						case 3:
				
						{
						
						int cnum2;
							
						cout<<"Enter quantity: ";
						cin>>shm;

						price1=price1+(130*shm);
						
						cout<<"\nEnter Credit Card Number: ";
						cin>>cnum2;
							
						cout<<"You have successfully ordered your dish.Thank you\n";
								
						system("pause");
						system("cls");
						goto me;
						
						}
						case 4:
				
						{
							
						int cnum3;
							
						cout<<"Enter quantity: ";
						cin>>bir;

						price1=price1+(70*bir);
						
						cout<<"\nEnter Credit Card Number: ";
						cin>>cnum3;
							
						cout<<"You have successfully ordered your dish.Thank you\n";
													
						system("pause");
						system("cls");
						goto me;
				
						}
							case 5:
								
							{
								system("cls");
								goto v;
							}
							
								default:
								{
									cout<<"Invalid option.Enter your choice again!:\t";
									goto q;
								}	
				}   
				

					}
					
					else if(choice5==2)
						{
							
							cout<<"Number of pizza "<<piz;
							cout<<"\nNumber of burger "<<bug;
							cout<<"\nNumber of shawarma "<<shm;
							cout<<"\nNumber of biryani "<<bir;
							
							cout<<"\nYour Total Bill=\t"<<price1;
							
							cout<<endl;
							system("pause");			
							system("cls");
							
							goto v;
							
						}
					else if(choice5==3)
						{
							system("cls");
							goto c;
							break;
						}
						else 
						{
							cout<<"Invalid Input.Input Again\n";
							goto q;
				    	}
				    	
				    	break;
				    	
					}   //close case 3 main menu
				
				//case 4 main menu
				
				case 4:
					{
						
						system("cls");

cout<<endl<<endl<<endl;					                      		                                   
cout<<"\n\n\n\n\n\n\n";					  				                      		                   

	z:
							
cout<<"\t\t\t\t\t\t               @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                      \n";
cout<<"\t\t\t\t\t\t               !                                          !                      \n";
cout<<"\t\t\t\t\t\t               !      1.> Ground 1                        !                      \n";
cout<<"\t\t\t\t\t\t               !      2.> Ground 2                        !                      \n";
cout<<"\t\t\t\t\t\t               !      3.> Back To Main Menu               !                      \n";
cout<<"\t\t\t\t\t\t               !                                          !                      \n";
cout<<"\t\t\t\t\t\t               @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                      \n";
						
					int a;
					
					cout<<"Enter Your Choice\n";
					cin>>a;
					
					if(a==1)
					{
						cout<<"In Ground 1 parking is available for Foreigners.Park vehicles here.\n ";
						system("pause");
						system("cls");
					goto z;
					}
					else if(a==2)
					{
						cout<<"In Ground 2 parking is available  for Local Travellors.Park Vehicles here.\n";
						system("pause");
						system("cls");
						
						goto z;
					}
					else
					{
						system("cls");
						goto c;
					}
					
					system("cls");
					
					break;
						
					}   //close case 4 main menu
					
			//case 5 main menu
			
			int r; 
			
			case 5:
					{
						
						system("cls");

cout<<endl<<endl<<endl;					                      		                                   
cout<<"\n\n\n\n\n\n\n";					  				                      		                   
						call:
cout<<"\t\t\t\t\t\t               ###------------------------------------------###                      \n";
cout<<"\t\t\t\t\t\t               =                                              =                      \n";
cout<<"\t\t\t\t\t\t               =      1.>> Add Record                         =                      \n";
cout<<"\t\t\t\t\t\t               =      2.>> Delete Record                      =                      \n";
cout<<"\t\t\t\t\t\t               =      3.>> Check Record                       =                      \n";
cout<<"\t\t\t\t\t\t               =      4.>> Back To Main Menu                  =                      \n";
cout<<"\t\t\t\t\t\t               =                                              =                      \n";
cout<<"\t\t\t\t\t\t               ###------------------------------------------###                      \n";
					
					cout<<"Enter your choice\n";
					cin>>r;
					
					switch(r)
					{
						case 1:
							{
								int ro;char date[10];
								
								cout<<"Enter Your Name\n";
								cin>>name5;
								
								if(fromfile1(name5,c_num4,mobile,ro,date)==1)
								{
								
								cout<<"File alredy exist\n";
								}
								else
								{
								
								cout<<"Enter Your CNIC Number\n";
								cin>>c_num4;
								cout<<"Enter your mobile number\n";
								cin>>mobile;
								cout<<"Enter date ";
								cin>>date;
								
								for(int i=0;i<20;i++)
								{
									if(R[i]==1)
									cout<<i+1<<" Room is available\n";
									else 
									cout<<i+1<<" Room is already booked\n";
								}					
									
								cout<<"Which room you want to book(1-20)\n";								
								cin>>ro;
								
								while(ro>20||ro<=0)
								{
									cout<<"Invalid input\nEnter again(1-20) ";
									cin>>ro;
								}
									while(R[ro-1]==0)
								{
									cout<<"Room is already booked\n";
									cin>>ro;
								}
								
								tofile1(name5,c_num4,mobile,ro,date);	
								
								R[ro-1]=0;
								
								cout<<"Room is successfully booked for you\n";
								tofile(ro-1);	//Function Calling
								}
								system("pause");
																								
								system("cls");
								goto call;
								break;
							}
						case 2:
							{
								int room;	
								char name6[20],date[10];
						okk:	cout<<"Enter Your Name\n";
								cin>>name6;
								
								if(fromfile1(name6,c_num5,mobile,room,date)==0)
								{
								cout<<"Record doesn't exist\n";
								}
								else
								{
								remove(name6);
								R[room-1]=1;
								tofile(room-1);	//Function calling
								cout<<"\nRoom Is Successfully Evacuated\n";
							    }
								system("pause");
								system("cls");
								goto call;
								break;
							}

						case 3:
							{
								char name6[20],date[10];int room;
								
								cout<<"Enter name: ";
								cin>>name6;

								if(fromfile1(name6,c_num5,mobile,room,date)==0)
								{
								cout<<"Data doesn't exist\n";
								system("pause");
								system("cls");
								goto call;
								}
								else
								{
								cout<<"\nData\n";
								cout<<"CNIC: ";
								cout<<c_num5;
								cout<<"\nMobile: ";
								cout<<mobile;
								cout<<"\nRoom Number: ";
								cout<<room;
								cout<<"\nDate: ";
								cout<<date;
								cout<<endl;
								}
								system("pause");
								system("cls");
								goto call;
								break;
							}
							
						case 4:
							{
								system("cls");
								goto c;
								break;
							}
							
					}
					
								break;
								
					}   //case 5 close main menu
				
				//case 6 main menu
									
				case 6:
					{
						system("cls");
						
						int u3=0,r3=0,e3=0,u4=0,r4=0,e4=0;
						
cout<<endl<<endl<<endl;					                      		                                   
cout<<"\n\n\n\n\n\n\n";					  				                      		                   
	k:					
cout<<"\t\t\t\t\t\t               ###++++++++++++++++++++++++++++++++++++++++++###                      \n";
cout<<"\t\t\t\t\t\t               @                                              @                      \n";
cout<<"\t\t\t\t\t\t               @      1.> Dishes Available                    @                      \n";
cout<<"\t\t\t\t\t\t               @      2.> Bill To Be Paid By Customer         @                      \n";
cout<<"\t\t\t\t\t\t               @      3.> Back To Main Menu                   @                      \n";
cout<<"\t\t\t\t\t\t               @                                              @                      \n";
cout<<"\t\t\t\t\t\t               ###++++++++++++++++++++++++++++++++++++++++++###                      \n";	
					
						cout<<"\n\t Enter Your Choice\n";
						cin>>choice6;
					
					switch (choice6)
					{
						case 1:
		{				
					y:	system("cls");
						
cout<<"\t\t\t\t\t\t               ============================================                      \n";
cout<<"\t\t\t\t\t\t               *                                          *                      \n";
cout<<"\t\t\t\t\t\t               *       1.>> Vegetarian                    *                      \n";
cout<<"\t\t\t\t\t\t               *       2.>> Non-Vegetarian                *                      \n";
cout<<"\t\t\t\t\t\t               *       3.>> Back To Order Menu            *                      \n";
cout<<"\t\t\t\t\t\t               *                                          *                      \n";
cout<<"\t\t\t\t\t\t               ============================================                      \n";	
					
					    cout<<"\n\t Enter your choice\n";
					    cin>>choice4;
						if(choice4==1)		
					{				
					
					j:	system("cls");
							
cout<<"\t\t\t\t\t\t               ============================================                      \n";
cout<<"\t\t\t\t\t\t               *                                          *                      \n";
cout<<"\t\t\t\t\t\t               *       1.>> AALU KARAHI(Rs.100)           *                      \n";
cout<<"\t\t\t\t\t\t               *       2.>> AALU TIKKI(Rs.200)            *                      \n";
cout<<"\t\t\t\t\t\t               *       3.>> CHANA DAL KARELA(Rs.300)      *                      \n";
cout<<"\t\t\t\t\t\t               *       4.>> BACK TO LAST MENU             *                      \n";
cout<<"\t\t\t\t\t\t               *                                          *                      \n";
cout<<"\t\t\t\t\t\t               ============================================                      \n";

int ch;

e:cout<"Enter your choice: ";
cin>>ch;

if(ch==1)
{

cout<<"Enter quantity: ";
cin>>e3;

price=price+(100*e3);

cout<<"You have successfully ordered your dish.Thank you\n";
system("pause");

goto j;

}
else if(ch==2)
{

cout<<"Enter quantity: ";
cin>>u3;

price=price+(200*u3);

cout<<"You have successfully ordered your dish.Thank you\n";
system("pause");

goto j;

}
else if(ch==3)
{

cout<<"Enter quantity: ";
cin>>r3;

price=price+(300*r3);

cout<<"You have successfully ordered your dish.Thank you\n";
system("pause");

goto j;

}
else if(ch==4)
{
goto y;
}
else 
{
	cout<<"Invalid option.\n";
	goto e;
}
					}
		
			else if(choice4==2)

{
	u:				     system("cls");
									
cout<<"\t\t\t\t\t\t               ============================================                      \n";
cout<<"\t\t\t\t\t\t               *                                          *                      \n";
cout<<"\t\t\t\t\t\t               *     1.>> KARELA CHICKEN ROAST(Rs.500)    *                      \n";
cout<<"\t\t\t\t\t\t               *     2.>> BHUNA KALEJI(Rs.700)            *                      \n";
cout<<"\t\t\t\t\t\t               *     3.>> HALF TANDORI CHICKEN(Rs.1000)   *                      \n";
cout<<"\t\t\t\t\t\t               *     4.>> BACK TO LAST MENU               *                      \n";
cout<<"\t\t\t\t\t\t               *                                          *                      \n";
cout<<"\t\t\t\t\t\t               ============================================                      \n";	

int ch;

o:	cout<"Enter your choice: ";
	cin>>ch;

if(ch==1)
{

cout<<"Enter quantity: ";
cin>>e4;

price=price+(500*e4);

cout<<"You have successfully ordered your dish.Thank you\n ";
system("pause");

goto u;

}
else if(ch==2)
{
cout<<"Enter quantity: ";
cin>>u4;

price=price+(700*u4);

cout<<"You have successfully ordered your dish.Thank you\n ";
system("pause");

goto u;

}
else if(ch==3)
{

cout<<"Enter quantity: ";
cin>>r4;

price=price+(1000*r4);

cout<<"You have successfully ordered your dish.Thank you\n ";
system("pause");

goto u;

}
else if(ch==4)
{
goto y;
}
else
{
	cout<<"Invalid choice\n";
	goto o;
}
	
					system("pause");
					system("cls");	
}
			else
				{
					system("cls");
					goto k;
				}
			break;
		}
			case 2:
					{
						cout<<"Number of Dish(AALU KARAHI)"<<"\t"<<e3;
						cout<<"\nNumber of Dish(AALU TIKKI)"<<"\t"<<u3;
						cout<<"\nNumber of Dish(CHANA DAL KARELA)"<<"\t"<<r3;	
						cout<<"\nNumber of Dish(KARELA CHICKEN ROAST)"<<"\t"<<e4;
						cout<<"\nNumber of Dish(BHUNA KALEJI)"<<"\t"<<u4;
						cout<<"\nNumber of Dish(HALF TANDORI CHICKEN)"<<"\t"<<r4;
						cout<<"\nTotal bill=";
						cout<<price;
						cout<<endl;
						system("pause");
						system("cls");
						goto k;
						break;
					}
			case 3:
				{
					system("cls");
					goto c;
					break;
				}
}   //cloe of switch in case 6
		        
		        break;
		        
}   //case 6 close main menu

			//case 7 main menu

			case 7:
					{
                        system("cls");
exe:
cout<<endl<<endl<<endl;					                      		                                   
cout<<"\n\n\n\n\n\n\n";					  				                      		                   
						
cout<<"\t\t\t\t\t\t               @@@--------------------@@--------------------@@@                      \n";
cout<<"\t\t\t\t\t\t               %                                              %                      \n";
cout<<"\t\t\t\t\t\t               %      1.>> About Food                         %                      \n";
cout<<"\t\t\t\t\t\t               %      2.>> About Waiter Mis-Behviour          %                      \n";
cout<<"\t\t\t\t\t\t               %      3.>> Back To Main Menu                  %                      \n";
cout<<"\t\t\t\t\t\t               %                                              %                      \n";
cout<<"\t\t\t\t\t\t               @@@--------------------@@--------------------@@@                      \n";

							
					int choi;
					cout<<"Enter your choice\n";
					ad:cin>>choi;
					switch(choi)
					{
						case 1:
							{
								string n;
								system("cls");
								cin.ignore();
								cout<<"\n\n\n\n\n\t\t\t\tEnter your complain so that we can tell to our food making factory for their proper preparation for next time.\n";
								getline(cin,n);
								cout<<"\n\n\t\t\t\tFrom Manager : Soory Sir/Madam.Next I assure you that there will held no complain from us again.\n";
								system("pause");
								system("cls");
								goto exe;
							}
							case 2:
								{
									system("cls");
									cout<<"\n\n\n\n\n\t\t\tFrom Manager : Soory Sir/Madam.We are guilty for our waiters behaviour.\n";
									system("pause");
									system("cls");
									goto exe;
								}
								case 3:
									{
										system("cls");
										goto c;
										system("cls");
									}
									default:
										{
											cout<<"Invalid Option\n";
											goto ad;
										}
					}
						
				    break;
				 	
					}   //close of case 7 main menu
		
		//case 8 of main menu
	
		case 8:
				{
					
					system("cls");
					cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t";
	cout<<"\t\t\t\n\n\n\t\t\t\tThankyou...\n";
	cout<<"\n\n\t\t\t\t\t";
	cout<<"Ending Program";
	Sleep(500);
	cout<<".";
	Sleep(500);
	cout<<".";
	Sleep(500);
	cout<<".";
	Sleep(500);
	cout<<".";
	Sleep(500);
	cout<<".";
	Sleep(500);
	cout<<".";
	Sleep(500);
	cout<<".";
		
					break;
			    
				}   //close of case 8 main menu
	
}   //main menu switch condition

}   //else of above if of main menu

}	//else of if condition above	
else
{
	cout<<endl;
	
	cout<<"You have not entered 1.Press again!!\n";
	goto op;
}	//else of wrong input of 1

}   //close of if in password
else
{
	cout<<"\n\t\t\t\t\tUser Name or Password Is Invalid.Enter Again.\n";
	goto main;
}
return 0;
}    //close of int main
	void tofile(int j)
	{
		ofstream obj;
		obj.open("Rooms.txt");
		for(int i=0;i<20;i++)
		obj<<R[i]<<endl;    //we are giving data to file              (cout<<)		
	}
	void fromfile()
	{
		int i=0;
		ifstream obj;
		obj.open("Rooms.txt");
		while(!obj.eof())
		{
				obj>>R[i];    //we are getting data from file         (cin>>)
				i++;
		}
	}
	void tofile1(char ch[],int num,int mob,int room,char date[])
	{
		ofstream obj;
		obj.open(ch);
		obj<<num<<endl;
		obj<<mob<<endl;
		obj<<room<<endl<<date;
	}
	int fromfile1(char ch[],int &num,int &mob,int &room,char date[])
	{
		ifstream obj;
		obj.open(ch);
	if(!obj)
	return 0;
		obj>>num;
		obj>>mob;
		obj>>room;
		obj>>date;
		return 1;
	}
