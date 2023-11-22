#pragma once
class Drob
{
	int chislitel;
	int znamenatel;
public:
	void initialize();
	void showdrob();
	int get_chis();
	int get_znam();
	void set_chis(int);
	void set_znam(int);
	Drob plus(Drob, Drob);
	Drob minus(Drob, Drob);
	Drob umnojeniye(Drob, Drob);
	Drob delenie(Drob, Drob);
};