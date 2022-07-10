#include <iostream>
using namespace std;
#include "Konto.h"


int main()
{
    Konto k1("Kamil", "Teper", 1), k2(2), k3("Jan", "Kowalski", 3);
    cout << "domyslny stan konta: " << k2.getStanKonta() << endl;
    k1.setStanKonta(1000);
    k2.setStanKonta(2000);
    k3.setStanKonta(3000);
    cout << "stan konta: " << k1.getStanKonta() << endl;
    cout << "stan konta: " << k3.getStanKonta() << endl;
    cout << "oprocentowanie k1: " << k1.oprocentowanie(10) << endl;
    cout << "oprocentowanie k2: " << k2.oprocentowanie(20) << endl;
    cout << "oprocentowanie k3: " << k3.oprocentowanie(30) << endl;
}


