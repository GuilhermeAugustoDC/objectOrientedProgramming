#ifndef MIDIA_H
#define MIDIA_H

/* Headers */

/* Bibliotecas */
#include <iostream>
#include <string>
#include <deque>
#include <iterator>

using namespace std;

class MIDIA
{
private:
   string artista;
   string titulo;
   deque<string> faixas;
   int lancamento;
   string genero;
   deque<string> keywords;

public:
   MIDIA(string, string, deque<string>, int, string, deque<string>);

   /* Gatters e Setters */
   string getArtista();
   void setArtista(string);

   string getTitulo();
   void setTitulo(string);

   deque<string> getFaixa();
   void setFaixa(deque<string>);

   int getLancamento();
   void setLancamento(int);

   string getGenero();
   void setGenero(string);

   deque<string> getKeywords();
   void setKeywords(deque<string>);
};
#endif