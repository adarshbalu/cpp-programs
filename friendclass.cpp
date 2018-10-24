#include<iostream.h>
#include<conio.h>
class ABC;
class XYZ
{
	int x;
	public:XYZ()
		{
			x=0;
		}
		void getdata(int b)
		{
			x=b;
		}
		friend void large(XYZ,ABC);
};
class ABC
{
	int a;
	public:ABC()
		{
			a=0;
		}
		void getdata(int c)
		{
			a=c;
		}
		friend void large(XYZ,ABC);
};
void large(XYZ m,ABC n)
{
	if(m.x>=n.a)
	{
		cout<<m.x<<" is large ";
	}
	else
	{
		cout<<n.a<<" is large ";
	}
}
void main()
{
	int i,j;
	clrscr();
	ABC abc;
	cout<<"\nEnter the 1st number : ";
	cin>>i;
	abc.getdata(i);
	XYZ xyz;
	cout<<"\nEnter 2nd number : ";
	cin>>j;
	xyz.getdata(j);
	large(xyz,abc);
	getch();
}