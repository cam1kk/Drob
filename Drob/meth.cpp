#include <iostream>
#include "meth.h"
using namespace std;

void Drob::initialize(int chislitell = 1, int znamenatell = 1)
{
	chislitel = chislitell;
	znamenatel = znamenatell;
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
Drob plus(Drob drob1, Drob drob2) {
	int resultChislitel{};
	int resiltZnamenatel{};

	int ch1 = drob1.get_chis();
	int zn1 = drob1.get_znam();

	int ch2 = drob2.get_chis();
	int zn2 = drob2.get_znam();

	resultChislitel = (ch1 * zn2) + (ch2 * zn1);
	resiltZnamenatel = zn1 * zn2;


	Drob newdrob;
	newdrob.set_chis(resultChislitel);
	newdrob.set_znam(resiltZnamenatel);
	return newdrob;
}