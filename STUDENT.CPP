#include<iostream.h>
#include<conio.h>
class student
{
	private:
		int id;
		char name[30];
	public:
		void get();
		void put();
};
	void student::get()
	{
		cout<<"Enter your id:";
		cin>>id;
		cout<<"Enter your name:";
		cin>>name;
	}
	void student::put()
	{
		cout<<"your id is "<<id;
		cout<<"your name is "<<name;
	}
int main()
{
	student s;
	clrscr();
	s.get();
	s.put();
	getch();
	return 0;
}