#include <iostream>
using namespace std;
//������� ���������, �� ����� ������� ���. ��������� ���������� �������� � �������: ����, ������, ��������, ������.
//��������� ��������� ���������� ����� � ����������� � ������������� ����� � �������.

struct MyStruct
{
	double num;
	double den;
};
void sum(MyStruct& fraction1, MyStruct& fraction2, int result_num = 0, int result_den = 0)
{
	result_num = fraction1.num * fraction2.den + fraction2.num * fraction1.den;
	result_den = fraction1.den * fraction2.den;
	if (result_den % 2 == 0 && result_den % 6 != 0 || result_den % 5 == 0)
	{
		cout re
	}
}


int main()
{
	MyStruct fraction1 = { 5.0, 10.0 };
	MyStruct fraction2 = { 2.0, 3.0 };
	sum(fraction1, fraction2);

	return 0;
}