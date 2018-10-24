#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
class book{
	char publisher[20];
	float price;
	int stock;
	char title[20];
	char author[20];
	public:int find(char[],char[]);
		void show_book();
		void stock_check(int);
		void add_book();
		book();



};
book::book(){
	char *author=new char[50];
	char *title=new char[50];
	char *publisher=new char[50];
	price=0;
	stock=0;


}
void book::add_book(){
	cout<<endl<<"ADD BOOK DETAILS : "<<endl;
	cout<<"Enter the title : ";
	gets(title);
	cout<<endl<<"Enter the author : ";
	gets(author);
	cout<<endl<<"Enter the publisher : ";
	gets(publisher);
	cout<<endl<<"Enter the price : ";
	cin>>price;
	cout<<endl<<"Enter the stock : ";
	cin>>stock;
	cout<<endl;
}

int book::find(char bt[],char ba[]){
	if(strcmp(title,bt)&&strcmp(author,ba))
	{
		return 0;

	}
	else
	{
		return 1;

	}

}
void book::show_book(){

		cout<<endl<<"BOOK DETAILS "<<endl<<endl<<"Book Title : "<<title;
		cout<<endl<<"Author : "<<author<<endl<<"Publisher : "<<publisher;
		cout<<endl<<"Price : "<<price<<endl<<"Books available : "<<stock<<endl;
		cout<<endl;

}
void book::stock_check(int copy){
	if(stock>=copy)
	{
		cout<<endl<<"Books are ready "<<endl;
		cout<<"Cost of "<<copy<<" books are "<<(price*copy)<<endl;
	}
	else
	{
		cout<<endl<<"The copies are not available"<<endl;
	}
}

void main()
{
	int ch,n=0,i,flag=0,b_id=0,num,opt;
	book b[100];
	char b_name[50],b_title[50],b_author[50];
	clrscr();
	do
	{
		cout<<"\n\n\t\t********BOOK SHOP*********";
		cout<<"\n1.Add book\n2.Find book\n3.Buy Book";
		cout<<"\n4.Exit\nSelect option :  ";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"\nHow many books to add : ";
				cin>>n;
				for(i=0;i<n;i++)
					b[i].add_book();
				break;
		/*	case 87:for(i=0;i<n;i++)
			     {
					b[i].show_book();
					cout<<"\n************\n";

			       }
			       break;           */
			case 2:cout<<"\nEnter the book title : ";
				gets(b_title);
				cout<<"\nEnter the author : ";
				gets(b_author);
				for(i=0;i<n;i++)
				{
					if(b[i].find(b_title,b_author))
					{
						flag=1;
						b[i].show_book();
						b_id=i;
						cout<<"The book is found ...... Book id is : "<<b_id<<" .Use this to buy book \n";

					}

				 }
				 break;
			case 3:cout<<"\nBuy Book ";
				cout<<"\nEnter Book id : ";
				cin>>opt;
				if(b_id<=n)
				{
					if(flag==1)
					{
						cout<<"\nBook is available \nEnter the no of copies : ";
						cin>>num;
						b[b_id].stock_check(num);
						flag=0;
					}
					else
					{
					cout<<"\nEntered copies not available ";
					}
				}
				break;
			case 4:cout<<"\nThanks for using ";
				break;
			default:cout<<"\Invalid option ";
		       }
		}while(ch!=4);
		getch();

}