#include<iostream.h>
#include<conio.h>
//using namespace std;
//class_a
class electronicdevice
{
	public: //constructor of the base class 1
		electronicdevice()
		{
			cout<<"i am an electronic device.\n\n";
		}
};
//class_b inheritance class_a
class computer:public electronicdevice
{
	public:
		//constructor of the base class 2
		computer()
		{
			cout<<"i am a computer/\n\n";
		}
};
//class_c inheritance class_b
class linux_based:public computer
{
	public:
		//constructor of the derived class
		linux_based()
		{
			cout<<" a run on linux.\n\n";
		}
};
int main()
{
	//create objet of the derived class
	clrscr();
	linux_based obj;
	//constructor of the base class 1
	//base class 2 derived class will be called
	getch();
	return 0;
}