#include <iostream>
#include "kalkulator.h"

using namespace std;

void Calc :: suma(){
    
    cout << "Podaj dwie cyfry oddzielone spacja" << endl;
    cin >> x >> y;
    wynik = x + y;
    cout << "\nSuma cyfr "<< x << " i " << y << " wynosi: " << wynik << endl;
}

void Calc :: roznica(){
    
    cout << "Podaj dwie cyfry oddzielone spacja" << endl;
    cin >> x >> y;
    wynik = x - y;
    cout << "\nRoznica cyfr "<< x << " i " << y << " wynosi: " << wynik << endl;
    
}

void Calc :: iloczyn(){
    
    cout << "Podaj dwie cyfry oddzielone spacja" << endl;
    cin >> x >> y;
    wynik = x * y;
    cout << "\nIloczyn cyfr "<< x << " i " << y << " wynosi: " << wynik << endl;
    
}

void Calc :: iloraz(){
    
    cout << "Podaj dwie cyfry oddzielone spacja" << endl;
    cin >> x >> y;
    if (y <= 0){
        cout << "nie dziel przez 0 !!" << endl;
       }
    wynik = x / y;
    cout << "\nIloraz cyfr "<< x << " i " << y << " wynosi: " << wynik << endl;
    
}


