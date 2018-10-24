#include<iostream.h>
#include<conio.h>
class stack{

	int a[100],top;
	public:void push();
		void pop();
		void display();
		stack();

};
stack::stack()
{
	top=0;


}
void stack ::push(){
	int item;
	if(top==99)
	{
		cout<<endl<<"Stack is full "<<endl;
	}
	else
	{
		cout<<endl<<"Enter the value to be pushed : ";
		cin>>item;
		cout<<endl<<"Position : "<<top<<endl<<"Pushed value : "<<item;
		top++;
		a[top]=item;
		cout<<endl<<"Pushed ";

	}
}
void stack :: pop(){

	if(top==-1)
	{
		cout<<endl<<"The stack is empty "<<endl;
	}
	else
	{
		cout<<endl<<"Popped value : "<<a[top];
		top--;
	}
}
void stack::display(){

	cout<<endl<<"\n Stack :\n";
	for(int i=top;i>0;i--)
	{
		cout<<endl<<a[i];
	}
}
void main()
{
	int choice,t=1;
	stack st;
	clrscr();
	do
	{
		cout<<"\n\nStack Operations \n";
		cout<<"\n1.Push\n2.Pop\n3.Display\n4.Exit \nEnter option : ";
		cin>>choice;
		switch(choice)
		{
			case 1:st.push();
				break;
			case 2:st.pop();
				break;
			case 3:st.display();
				break;
			default:t=0;

		}
	}while(t);
	getch();
}