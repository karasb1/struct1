#include <iostream>
using namespace std;

//Реалізувати структуру "Автомобіль"
//(довжина, кліренс (висота посадки), об'єм двигуна, потужність двигуна, діаметр коліс, колір, тип коробки передач).
//Створіть функції для задавання значень, відображення значень, пошуку значень.

struct Car
{
	double length;
	double clearance;
	double engine_capacity;
	double engine_power;
	double wheel_diameter;
	string color;
	string type_of_gearbox;
};
void setting_length(Car& car)
{
	double new_length = 0;
	cin >> new_length;
	car.length = new_length;
}
void setting_clearance(Car& car)
{
	double new_clearance = 0;
	cin >> new_clearance;
	car.clearance = new_clearance;
}
void setting_engine_capacity(Car& car)
{
	double new_engine_capacity = 0;
	cin >> new_engine_capacity;
	car.engine_capacity = new_engine_capacity;
}
void setting_engine_power(Car& car)
{
	double new_engine_power = 0;
	cin >> new_engine_power;
	car.engine_power = new_engine_power;
}
void setting_wheel_diameter(Car& car)
{
	double new_wheel_diameter = 0;
	cin >> new_wheel_diameter;
	car.wheel_diameter = new_wheel_diameter;
}
void setting_color(Car& car)
{
	string new_color = "";
	cin >> new_color;
	car.color = new_color;
}
void setting_type_of_gearbox(Car& car)
{
	string new_type_of_gearbox = "";
	cin >> new_type_of_gearbox;
	car.type_of_gearbox = new_type_of_gearbox;
}
void print_values(Car& car)
{
	cout << "1.length = " << car.length << endl;
	cout << "2.clearance = " << car.clearance << endl;
	cout << "3.engine_capacity = " << car.engine_capacity << endl;
	cout << "4.engine_power = " << car.engine_power << endl;
	cout << "5.wheel_diameter = " << car.wheel_diameter << endl;
	cout << "6.color = " << car.color << endl;
	cout << "7.type_of_gearbox = " << car.type_of_gearbox << endl;
}
void finding_length(Car& car)
{
	cout << car.length << endl;
}
void finding_clearance(Car& car)
{
	cout << car.clearance << endl;
}
void finding_engine_capacity(Car& car)
{
	cout << car.engine_capacity << endl;
}
void finding_engine_power(Car& car)
{
	cout << car.engine_power << endl;
}
void finding_wheel_diameter(Car& car)
{
	cout << car.wheel_diameter << endl;
}
void finding_color(Car& car)
{
	cout << car.color << endl;
}
void finding_type_of_gearbox(Car& car)
{
	cout << car.type_of_gearbox << endl;
}
int main()
{
	Car car = { 4.5, 0.2, 5.0, 400, 20, "white", "automatic" };
	print_values(car);
	setting_length(car);
	setting_clearance(car);
	setting_engine_capacity(car);
	setting_engine_power(car);
	setting_wheel_diameter(car);
	setting_color(car);
	setting_type_of_gearbox(car);
	print_values(car);
	finding_length(car);
	finding_clearance(car);
	finding_engine_capacity(car);
	finding_engine_power(car);
	finding_wheel_diameter(car);
	finding_color(car);
	finding_type_of_gearbox(car);
		
	return 0;
}