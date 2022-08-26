//The following example illustrates single inheritance.
#include<iostream.h>
#include<conio.h>
//using namespace std;
class electronicdevice //base class
{
	public:   //constructor of the base class
		electronicdevice()
		{
			cout<<"i am electronic device.\n\n";
		}
};
//derived class
class computer:public electronicdevice
{
	public: //constructor of the derived class
		computer()
		{
			cout<<"i am a computer\n\n";
		}
};
int main()
{
	//create object of the derived class
	clrscr();
	computer obj;
	//constructor of the base class
	//derived class will be called
	getch();
	return 0;
}


