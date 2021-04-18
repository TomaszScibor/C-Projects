//Tomasz Ścibor D1 143904

#include <iostream>
#include <stdio.h>
#include "kalkulator.h"
#include <conio.h>

using namespace std;


int main(){
    
 while (true){
     
    char wybor;
    
    cout << "\nWitaj w kalkulatorze, wybierz opcje: " << endl;
    cout << "1. Dodawanie. " << endl;
    cout << "2. Odejmowanie " << endl;
    cout << "3. Mnozenie " << endl;
    cout << "4. Dzielenie " << endl;
    cout << "5. Zakoncz " << endl;
    

   wybor = getch();

    
    switch(wybor){
        
        
        case '1':
            Calc skladniki;
            skladniki.suma();
            break;
        case '2':
            Calc odjemna_i_odjemnik;
            odjemna_i_odjemnik.roznica();
            break;
        case '3':
            Calc czynniki;
            czynniki.iloczyn();
            break;
        case '4':
            Calc dzielna_i_dzielnik;
            dzielna_i_dzielnik.iloraz();
            break;
        case '5':
            exit(0);
            break;
        default:
            cout << "Niestety ta opcja jest niewspierana przez aktualna wersje kalkulatora :(, Prosze wybrac opcje od 1 do 5. " << endl;
            break;
    }
    
    
    
 }
 
    return 0;
}