#include <iostream>
#include "meth.h"
using namespace std;


int main() {
	Drob drob;
	drob.initialize(1, 1);
	int chislitel, znamenatel;
	cout << "Vvedite chislitel" << endl;
	cin >> chislitel;
	cout << "Vvedite znamenatel" << endl;
	cin >> znamenatel;
	drob.set_chis(chislitel);
	drob.set_znam(znamenatel);
}