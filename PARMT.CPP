#include<iostream.h>
#include<conio.h>
class cabe
{
	int side,x;
	public:
		cabe (int x) //perametered constructor
		{
			side=x;
		}
		void display();
};
int main()
{
	cabe c(10); //implicit call
	c.display();
	cout<<"Enter value of x:";
	cin>>x;
	cabe s=cabe(x) //explicit call
	s.display();
	getch();
}
void cabe::display()
{
	cout<<"cabe side:"<<side;
}