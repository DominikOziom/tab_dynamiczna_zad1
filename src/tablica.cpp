/*!
 * \file
 * \brief Definicje funkcji operujacych na tablicy
 */
#include <malloc.h>
#include "tablica.h"
using namespace std;


char * Alokuj_Tablice_Typu_Char(std::size_t rozmiar){
  char *Tablica = new char [rozmiar];
  for(unsigned int i=0; i<rozmiar; i++){
    Tablica[i]='0';
  }
  return Tablica;
}

char * Alokuj_Kopie_Tablicy_Typu_Char(char *tab, std::size_t rozmiar){
  char *Kopia = new char[rozmiar];
  for(unsigned int i=0; i < rozmiar; i++){
    Kopia[i]=tab[i]; }
  cout << "Skopiowano tablice" << endl;
  return Kopia;
}

void Zwolnij_Pamiec_Tablicy(char *tab){
  delete [] tab;
}

char * Zmien_Rozmiar_Tablicy(char *tab, std::size_t rozmiar, int o_ile){
  int j;
  if(o_ile >= 0){
    char *nowa_tab = new char [rozmiar + o_ile];
    for(unsigned int i=0; i<rozmiar;i++){
      nowa_tab[i]=tab[i];
      j++;
    }
        
    for(int i=1;i<=o_ile;i++){
      nowa_tab[j+i]='0';
    }
    Zwolnij_Pamiec_Tablicy(tab);
    return nowa_tab;
  }
  else if(o_ile<0){
    char *nowa_tab2 = new char [rozmiar - o_ile];
    int nowa = (rozmiar-o_ile);
    for(int i=0;i<nowa;i++){
      nowa_tab2[i]=tab[i];
    }
    Zwolnij_Pamiec_Tablicy(tab);
    return nowa_tab2;
  } 
  return 0;
}




char * Wczytaj(std::size_t  rozmiar, std::istream & in){

  char *Tablica = new char [rozmiar];
  for(unsigned int i=0;i<rozmiar;i++)
    in >> Tablica[i];

  return Tablica;
}

void Zapisz(char *tab, std::size_t rozmiar, std::ostream & out){
  for(unsigned int i=0; i < rozmiar ; i++){
    out << tab[i] << endl;
  }
}


void Wyswietl_Tab(char *tab, std::size_t rozmiar){
  for(unsigned int i=0; i < rozmiar ; i++){
    cout << tab[i] << endl;}
}


