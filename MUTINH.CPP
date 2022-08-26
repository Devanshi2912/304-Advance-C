#include<iostream.h>
#include<conio.h>
class A
{
	public:
		void display()
		{
			cout<<"class A";
		}
};
class B
{
	public:
	void print()
	{
		cout<<"\nclass B";
	}
};
class C:public A,public B
{
};
int main()
{
	clrscr();
	C obj;
	obj.display();
	obj.print();
	getch();
	return 0;
}