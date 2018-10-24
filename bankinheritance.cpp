#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class account
{
	char name[20];
	float ac_no;

	public:
		void get_info()
		{
			cout<<"\n\nEnter your Name : ";
			gets(name);
			cout<<"\nEnter your Account number : ";
			cin>>ac_no;
			cout<<"\nData succesfully Stored \n";
		}

		void show_data()
		{
			cout<<"\nName : "<<name;
			cout<<"\nAccount number : "<<ac_no;

		}
};

class savings :public account
{
	float balance;
	public:savings()
		{
			balance=200;
		}
		void check_balance()
		{
			cout<<"\n\nBalance : "<<balance;
		}
		void deposit()
		{
			float deposit,interest;
			cout<<"\nEnter the amount to be deposited : ";
			cin>>deposit;
			balance+=deposit;
			interest=(balance*2)/100;
			balance+=interest;
			cout<<"\nBalance after Deposit : "<<balance;
		}
		void withdraw()
		{
			float amt;
			cout<<"\nEnter the amount to be withdrawn : ";
			cin>>amt;
			if(amt>10000)
				cout<<"\Unable to Withdraw ";
			else
			{       if(balance>0)
				{
					balance-=amt;
					cout<<"\nNew balance : "<<balance;
				}
				else
					cout<<"\nInsufficient Funds ";
			}
		}
  //		int find(int ,char);
};
/*int savings::find(int num,char ac[]){
	if(strcmp(ac_type,ac)&& ac==ac_no)
	{
		return 0;
	}
	else
	{
		return 1;
	}
} */
class current : public account
{
	float balance;
	public:current()
		{
			balance=2000;
		}
	       //	int find(int,char);
		void check_balance()
		{
			cout<<"\n\nBalance is : "<<balance;

		}
		void deposit()
		{
			float amt;
			cout<<"\nEnter the amount to deposit : ";
			cin>>amt;
			balance+=amt;
			cout<<"\nNew balance after balance : "<<balance;
		}
		void withdraw()
		{
			float amt;
			cout<<"\nEnter the Amount to withdraw : ";
			cin>>amt;
			if(amt>9999)
				cout<<"\nUse cheque book \n";
			else
			{
				balance-=amt;
				if(balance<2000)
				{
					cout<<"\nA fine of rs 500 is taken ";
					balance-=500;
					cout<<"\nNew Balance is : "<<balance;

				}
				else
					cout<<"\nNew balance is : "<<balance;
			}
		}
		void cheque()
		{
			float amt;
			cout<<"\nEnter the amount : ";
			cin>>amt;
			balance-=amt;
			cout<<"\nThe balance is : "<<balance;
		}

};
/*int current::find(int num,char ac[]){
	if(strcmp(ac_type,ac)&& ac_no==num)
	{
		return 0;
	else
	{
		return 1;
	}
} */

void main()
{
	clrscr();
	savings s;
	current c;
	int menu,select,ch,type=0,ac_type=0;
	do{
		cout<<"\n\nBank Main Menu ";
		cout<<"\n1.Create Account \n2.Select Account\n3.Exit";
		cout<<"\nSelect the option : ";
		cin>>menu;

				if(menu==1)
				{
				     do{
						cout<<"\nEnter the type of account : \n";
						cout<<"1.Savings \n2.Current \n3.Return : ";
						cin>>type;
						if(type==1)
						{
						clrscr();
						s.get_info();


						}
						else if(type==2)
						{
						clrscr();
						c.get_info();


						}
						else
							cout<<"\Exit";
					}while(type==1 || type==2);
			}
			else if(menu==2)
			{
				clrscr();

				cout<<"\nEnter account type : \n1.Savings\n2.Current : ";
				cin>>ac_type;
				if(ac_type==1)
				{               clrscr();
						ch=0;
					     do{

						s.show_data();
						cout<<"\nSavings account Options : ";
						cout<<"\n1.Display Balance\n2.Deposit\n3.Withdraw\n4.Exit ";
						cout<<"\nSelect option : ";
						cin>>ch;
						switch(ch)
						{
							case 1:s.check_balance();
								break;
							case 2:s.deposit();
								break;
							case 3:s.withdraw();
								break;
							case 4:cout<<"\nReturn to Main Menu ";
								break;
							default :cout<<"\n Invalid option ";
						}
					      }while(ch!=4);

				}

				else if(ac_type==2)
				{       ch=0;
					clrscr();
				  do{
					c.show_data();
					cout<<"\n\nCurrent account options ";
					cout<<"\n1.Display Balance \n2.Deposit\n3.Withdraw\n4.Cheque Book\n5.Exit";
					cout<<"\nEnter option : ";
					cin>>ch;
					switch(ch)
					{
						case 1:c.check_balance();
							break;
						case 2:c.deposit();
							break;
						case 3:c.withdraw();
							break;
						case 4:c.cheque();
							break;
						case 5:cout<<"\nReurn to main menu ";
							break;
						default:cout<<"\nInvalid option ";
					}
				}while(ch!=5);
			      }
			      }
		      else
		      {		cout<<"\nExiting ";
				break;
		       }



		      }while(menu!=3);





	getch();
}