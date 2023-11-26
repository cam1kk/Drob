#include <iostream>
#include "meth.h"
using namespace std;

int main() {
	Drob drob1;
	drob1.initialize();
	int chislitel1{}, znamenatel1{};
	cout << "Vvedite chislitel" << endl;
	cin >> chislitel1;
	cout << "Vvedite znamenatel" << endl;
	cin >> znamenatel1;
	if (znamenatel1 == 0) {
		cout << "Error" << endl;
		return 0;
	}
	drob1.set_chis(chislitel1);
	drob1.set_znam(znamenatel1);
	cout << "Drob1: " << endl;
	drob1.showdrob();

	Drob drob2;
	drob2.initialize();
	int chislitel2{}, znamenatel2{};
	cout << "Vvedite chislitel" << endl;
	cin >> chislitel2;
	cout << "Vvedite znamenatel" << endl;
	cin >> znamenatel2;
	if (znamenatel2 == 0) {
		cout << "Error" << endl;
		return 0;
	}
	drob2.set_chis(chislitel2);
	drob2.set_znam(znamenatel2);
	cout << "Drob2: " << endl;
	drob2.showdrob();

	cout << "\n\n\n";

	// +
	Drob res1;
	res1.initialize();
	res1 = res1.plus(drob1, drob2);
	cout << "Plus result: " << endl;
	res1.showdrob();

	// -
	Drob res2;
	res2.initialize();
	res2 = res2.minus(drob1, drob2);
	cout << "Minus result: " << endl;
	res2.showdrob();

	// *
	Drob res3;
	res3.initialize();
	res3 = res3.umnojeniye(drob1, drob2);
	cout << "Umnojeniye result: " << endl;
	res3.showdrob();

	// /
	Drob res4;
	res4.initialize();
	res4 = res4.delenie(drob1, drob2);
	cout << "Deleniye result: " << endl;
	res4.showdrob();

}