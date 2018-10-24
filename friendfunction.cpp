#include<iostream.h>
#include<conio.h>
class abc
{
	int a;
	public: abc()
		{
			a=0;
		}
		void getdata(int x)
		{
			a=x;
		}
		friend void printvalue(abc);
};
void printvalue(abc z)
{
	cout<<"\nThe value is : "<<z.a;
}
void main()
{
	int p;
	clrscr();
	cout<<"\nEnter the value : ";
	cin>>p;
	abc A;
	A.getdata(p);
	printvalue(A);
	getch();

	clrscr();
}