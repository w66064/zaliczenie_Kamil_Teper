#include "Konto.h"

Konto::Konto(string imie, string nazwisko, int numer_rachunku)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->numer_rachunku = numer_rachunku;
	this->stan_konta = 0;
}

Konto::Konto(int numer_rachunku)
{
	this->imie = " ";
	this->nazwisko = " ";
	this->numer_rachunku = numer_rachunku;
	this->stan_konta = 0;
}

Konto::Konto()
{
}

Konto::~Konto()
{
}

float Konto::getStanKonta()
{
	return stan_konta;
}


void Konto::setStanKonta(float stan_konta)
{
	this->stan_konta = stan_konta;
}

Konto::Konto(const Konto& o)
{

}

int Konto::operator==(const Konto& por)
{
	if ((por.imie == imie) && (por.nazwisko == nazwisko) && (por.stan_konta == stan_konta)) return true;
	else return false;
}

void Konto::zmienNazwisko(string imie, string nazwisko)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
}



float Konto::oprocentowanie(float oprocentowanie)
{
	return this->stan_konta * (1 + oprocentowanie);
}


