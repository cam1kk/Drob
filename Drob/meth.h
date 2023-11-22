#pragma once
class Drob
{
	int chislitel;
	int znamenatel;
public:
	void initialize(int,int);
	

	void set_chis(int);
	void set_znam(int);

	int get_chis();
	int get_znam();

	Drob plus(Drob,Drob);
};