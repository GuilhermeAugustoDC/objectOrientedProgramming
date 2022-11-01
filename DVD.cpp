#include "DVD.h"

DVD::DVD(deque<string> formA, deque<string> formTl, deque<string> leg, string artista, string titulo, deque<string> faixas, int lancamento, string genero, deque<string> keywords) : MIDIA(artista, titulo, faixas, lancamento, genero, keywords)
{
    formatoAudio = formA;
    formatoTela = formTl;
    legendas = leg;
}

deque<string> DVD::getFormatoAudio()
{
    return (this->formatoAudio);
};
void DVD::setFormatoAudio(deque<string> name)
{
    this->formatoAudio = name;
};
deque<string> DVD::getFormatoTela()
{
    return (this->formatoTela);
};
void DVD::setFormatoTela(deque<string> name)
{
    this->formatoTela = name;
};
deque<string> DVD::getLegendas()
{
    return (this->legendas);
};
void DVD::setColetanea(deque<string> name)
{
    this->legendas = name;
};