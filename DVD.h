#ifndef DVD_H
#define DVD_H

/* Headers */
//#include "CD.h"
#include "MIDIA.h"

/* Bibliotecas C++ */
#include <iostream>
#include <string>
#include <deque>
#include <iterator>

using namespace std;

class DVD : public MIDIA
{
private:
   deque<string> formatoAudio;
   deque<string> formatoTela;
   deque<string> legendas;

public:
   DVD(deque<string>, deque<string>, deque<string>, string, string, deque<string>, int, string, deque<string>);

   deque<string> getFormatoAudio();
   void setFormatoAudio(deque<string>);

   deque<string> getFormatoTela();
   void setFormatoTela(deque<string>);

   deque<string> getLegendas();
   void setColetanea(deque<string>);
};
#endif