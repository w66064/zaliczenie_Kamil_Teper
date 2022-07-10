#pragma once
#include <iostream>
#include <xmemory>
using namespace std;

class Konto
{
	int numer_rachunku;
	string imie;
	string nazwisko;
	float stan_konta;

public:
	Konto(string imie, string nazwisko, int numer_rachunku);
	Konto(int numer_rachunku);
	Konto();
	~Konto();

	float getStanKonta();
	void  setStanKonta(float stan_konta);
	Konto(const Konto& o);
	int operator == (const Konto& por);
	void zmienNazwisko(string imie, string nazwisko);
	float oprocentowanie(float oprocentowanie);
};

