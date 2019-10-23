#include<conio.h>
#include<iostream.h>
void main()
{       clrscr();
	int n,item,a[21], flag=1,first,last,middle;
	cout<<"\nEnter no.of elements:";
	cin>>n;
	cout<<"\nEnter the elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nenter element to be searched:";
	cin>>item;
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(a[middle]<item)
		{
			first=middle+1;
		}
		else if(a[middle]==item)
		{
			cout<<"\n element found at pos:"<<middle+1;
			flag=0;
			break;

		}
		else
		{
			last=middle-1;
		}
		middle=(first+last)/2;
	}
	if(flag==1)
	{
		cout<<"\nelement not found" ;
	}
	getch();
}