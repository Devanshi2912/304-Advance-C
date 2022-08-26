#include<iostream.h>
#include<conio.h>
class A
{
	int a; //private
	public:
	A()
	{
		a=100;
		cout<<a;
	}
};
void main()
{
	clrscr();
	A obj;
	getch();
}