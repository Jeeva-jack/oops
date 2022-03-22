#include<iostream>
using namespace std;
class Car
{
	public:
		string brand;
		string model;
		int year;
		car(string x,string y,int z)
	{
		brand=x;
		model=y;
		year=z;
}
};
int main()
{
	Car obj1;
	Car obj2;
	obj2.car("bmw","x5",1999);
	obj1.car("ford","maustang",1969);
	cout<<obj1.brand<<"\n"<<obj1.model<<"\n"<<obj1.year<<"\n";
	cout<<obj2.brand<<"\n"<<obj2.model<<"\n"<<obj2.year<<"\n";
	return 0;
}
