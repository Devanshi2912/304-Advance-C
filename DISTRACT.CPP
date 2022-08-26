#include<iostream.h>
#include<conio.h>
class test
{
	private:
	int n;
	public:
	test()
	{
		n=10;
		cout<<n;
	}
	~ test()
	{
		cout<<"object destroyed";
	}
};
void main()
{
	clrscr();
	test obj;
	getch();
}