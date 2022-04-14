#include "Bus.h"

int main() {
	Car car("audi", 12, 30);
	Bus bus(car, 8);
	cout << bus;
	cin >> bus;
	cout << bus;
	bus++;
	++bus;
	cout << bus;
	cout << "amount of bus = " << bus.get_count() << endl;
	cout << "amount of car = " << car.get_count() << endl;
}