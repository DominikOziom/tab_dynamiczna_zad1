#include <iostream>
#include <string>
#include "tablica.h"


using namespace std;
/*!
 *\brief
 * funkcja main() zawierajaca test poprawnosci dzialania funkcji
 * zawartych w pliku tablica.h
 */
int main(){ 
  cout << endl; 
  char * Tablica=Alokuj_Tablice_Typu_Char(6);
  char * Tablica2;
  fstream plik1;
  plik1.open( "plik1.txt");  
  if ( !plik1.is_open() ) {
    cerr << "Blad otwarcia pliku" << endl;
  }
  else{
    Tablica = Wczytaj(6,  plik1);
  }
  Wyswietl_Tab(Tablica,6);
  char * Kopia=Alokuj_Kopie_Tablicy_Typu_Char(Tablica, 6);
  cout << endl;
  cout << "Skopiowana tablica:" << endl;
  Wyswietl_Tab(Kopia,6);

  cout << endl <<" dodanie 3 miejsc w tablicy:" << endl;
  Tablica = Zmien_Rozmiar_Tablicy(Tablica, 6, 3);
  Wyswietl_Tab(Tablica,9);
  cout << endl <<" zabranie 6 miejsc w tablicy:" << endl;
  Tablica2 = Zmien_Rozmiar_Tablicy(Tablica, 9, -6);
  Wyswietl_Tab(Tablica2,3);
  cout << "Zwolniono pamieci tablicy w funkcji zmiany rozmiaru. Efekt:" << endl;
  Wyswietl_Tab(Tablica,3);


  fstream plik2;
  plik2.open("plik1_2.txt");
  if ( !plik2.is_open() ) {
    cerr << "Blad otwarcia pliku do zapisu" << endl;
  }
  else{
    Zapisz(Tablica2, 3, plik2);
  }
  cout << "Zapisano zmiany w pliku: plik1_2.txt" << endl;

  Zwolnij_Pamiec_Tablicy(Tablica2);
  cout<< endl;

  // Nie wiem czemu, ale funkcjia Zwolnij_Pamiec_Tablicy nie dziala poprawnie,
  // jeśli jest wywołana w funkcji main, natomiast dziala bez zarzutow, kiedy
  // uzywana jest na przyklad wewnatrz funkcji zmieniajacej ilosc elementow tablicy.
  return 0;
}

