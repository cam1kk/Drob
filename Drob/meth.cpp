#include <iostream>
#include "meth.h"
using namespace std;

void Drob::initialize()
{
	chislitel = 1;
	znamenatel = 1;
}
void Drob::showdrob() {
	cout << chislitel << "/" << znamenatel << endl;
}



int Drob::get_chis() {
	return chislitel;
}
int Drob::get_znam() {
	return znamenatel;
}



void Drob::set_chis(int chislitell) {
	chislitel = chislitell;
}
void Drob::set_znam(int znamenatell) {
	znamenatel = znamenatell;
}



Drob Drob::plus(Drob drob1, Drob drob2) {
	int resultChislitel{};
	int resiltZnamenatel{};

	int ch1 = drob1.get_chis();
	int zn1 = drob1.get_znam();

	int ch2 = drob2.get_chis();
	int zn2 = drob2.get_znam();

	resultChislitel = (ch1 * zn2) + (ch2 * zn1);
	resiltZnamenatel = zn1 * zn2;


	Drob newdrob;
	newdrob.initialize();
	newdrob.set_chis(resultChislitel);
	newdrob.set_znam(resiltZnamenatel);
	return newdrob;
}
Drob Drob::minus(Drob drob1, Drob drob2) {
	int resultChislitel{};
	int resiltZnamenatel{};

	int ch1 = drob1.get_chis();
	int zn1 = drob1.get_znam();

	int ch2 = drob2.get_chis();
	int zn2 = drob2.get_znam();

	resultChislitel = (ch1 * zn2) - (ch2 * zn1);
	resiltZnamenatel = zn1 * zn2;


	Drob newdrob;
	newdrob.initialize();
	newdrob.set_chis(resultChislitel);
	newdrob.set_znam(resiltZnamenatel);
	return newdrob;
}
Drob Drob::umnojeniye(Drob drob1, Drob drob2) {
	int resultChislitel{};
	int resiltZnamenatel{};

	int ch1 = drob1.get_chis();
	int zn1 = drob1.get_znam();

	int ch2 = drob2.get_chis();
	int zn2 = drob2.get_znam();

	resultChislitel = ch1 * ch2;
	resiltZnamenatel = zn1 * zn2;


	Drob newdrob;
	newdrob.initialize();
	newdrob.set_chis(resultChislitel);
	newdrob.set_znam(resiltZnamenatel);
	return newdrob;
}
Drob Drob::delenie(Drob drob1, Drob drob2) {
	int resultChislitel{};
	int resiltZnamenatel{};

	int ch1 = drob1.get_chis();
	int zn1 = drob1.get_znam();

	int ch2 = drob2.get_chis();
	int zn2 = drob2.get_znam();

	resultChislitel = ch1 * zn2;
	resiltZnamenatel = zn1 * ch2;


	Drob newdrob;
	newdrob.initialize();
	newdrob.set_chis(resultChislitel);
	newdrob.set_znam(resiltZnamenatel);
	return newdrob;
}