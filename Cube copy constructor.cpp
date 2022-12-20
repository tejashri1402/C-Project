#include<iostream>
using namespace std;
class cube
{
	int side;
	public:
		cube(int s)
		{
			side=s;
		}
		cube(cube &obj)
		{
			side=obj.side*obj.side*obj.side;
		}
		void display()
		{
			cout<<"\n Volume of cube: "<<side;
		}
};
main()
{
	cube c1(3);
	c1.display();
	cube c2(c1);
	c2.display();
}
