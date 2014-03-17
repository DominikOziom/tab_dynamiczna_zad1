#ifndef TABLICA_H
#define TABLICA_H
/*!
 * \file
 * \brief Deklaracje funkcji operujacych na tablicy.
 */

#include <fstream>
#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <stddef.h>
#include <stdlib.h>


using namespace std;

/*! 
 * \brief Tworzy tablice dynamiczna o okreslonym rozmiarze i wypelnia ja zerami.
 */
char * Alokuj_Tablice_Typu_Char(std::size_t rozmiar);

/*! 
 * \brief kopiuje tablice ktorej wskaznik i rozmiar sa podane w argumentach wywolania.
 */
char * Alokuj_Kopie_Tablicy_Typu_Char(char *tab, std::size_t rozmiar);

/*! 
 * \brief czysci zawartosc tablicy podanej w argumencie.
 */
void Zwolnij_Pamiec_Tablicy(char *tab);

/*! 
 * \brief Modeluje wielkosc tablicy w zaleznosci od wartosci zmiennej o_ile.
 */
char * Zmien_Rozmiar_Tablicy(char *tab, std::size_t rozmiar, int o_ile);

/*! 
 * \brief wczytuje tablice z wejscia podanego w zmiennej istream & in.
 */
char * Wczytaj(std::size_t  rozmiar, std::istream & in);

/*! 
 * \brief Zapisuje tablice do scieszki podanej w zmiennej ostream & out.
 */
void Zapisz(char *tab, std::size_t rozmiar, std::ostream & out);

/*! 
 * \brief wyswietla tablice na stdout.
 */
void Wyswietl_Tab(char *tab, std::size_t rozmiar);



#endif
