#include<iostream.h>
#include<conio.h>
#define MAX 10

class Queue
{
      int front,rear;
      int queue[MAX];

      public:

      Queue()
      {
	      front=rear=-1;
      }
       void qdisplay(void);
       void qpush(int item)
       {
	      if(rear==MAX-1)
	     {
		      cout<<"\nQUEUE OVERFLOW";
	     }
	     else if(front==-1 && rear==-1)
	     {
		      front=rear=0;
		      queue[rear]=item;
		      cout<<"\nITEM INSERTED: "<<item;
	     }
	     else
	     {
		      rear++;
		      queue[rear]=item;
		      cout<<"\nITEM INSERTED: "<<item;
	     }
       }

       void qpop()
       {
	      int item;

	      if(rear==-1)
	     {
		       cout<<"\nQUEUE UNDERFLOW";
	     }
	     else if(front==0 && rear==0)
	     {
		       item=queue[front];
		       front=rear=-1;
		       cout<<"\n\nITEM DELETED: "<<item;
	     }
	     else
	     {
		      item=queue[front];
		      front++;
		      cout<<"\n\nITEM DELETED: "<<item;
	     }
       }



};
      void Queue::qdisplay(void)
       {
	      if(front==-1)
	      {
		      cout<<"\n\nQUEUE IS EMPTY\n";
	      }
	      else
	      {
		      cout<<"\n\nQUEUE ITEMS\n";
		      for(int i=front;i<=rear;i++)
		      {
			       cout<<queue[i]<<" ";
		      }
		      cout<<endl;

	}
     }
void main()
{

	Queue q;
	int i,ch;
	clrscr();
	do{
		cout<<"\nQueue operations : \n1.Push\n2.Pop\n3.Display\n4.Exit";
		cout<<"\nEnter the option  :   ";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"\nEnter the item to be inserted : ";
				cin>>i;
				q.qpush(i);
				break;
			case 2:q.qpop();
				break;
			case 3:q.qdisplay();
				break;
			case 4:cout<<"\nThanks for using";
				break;
			default:cout<<"\nInvalid option ";
		}
	}while(ch!=4);
	getch();
}