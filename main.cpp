#include <iostream>
#include <cmath>
using namespace std;

struct MyStruct
{
	int x;
	int y;

};
void distance(MyStruct& pointA, MyStruct& pointB, int result = 0)
{
	result = sqrt(pow((pointA.x - pointB.x), 2) + pow((pointA.y - pointB.y), 2));
	cout << result << endl;
}

int main()
{
	MyStruct pointA = {5, 5 };
	MyStruct pointB = { 5, 10 };
	distance(pointA, pointB);
	

	return 0;
}