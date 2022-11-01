#include "CD.h"

CD::CD(int dr, float vl, bool clt, string artista, string titulo, deque<string> faixas, int lancamento, string genero, deque<string> keywords) : MIDIA(artista, titulo, faixas, lancamento, genero, keywords)
{
    duracao = dr;
    volume = vl;
    coletanea = clt;
}

int CD::getDuracao()
{
    return (this->duracao);
};
void CD::setDuracao(int n)
{
    this->duracao = n;
};

float CD::getVolume()
{
    return (this->volume);
};
void CD::setVolume(float n)
{
    this->volume = volume;
};

bool CD::getColetanea()
{
    return (this->coletanea);
};
void CD::setColetanea(bool n)
{
    this->coletanea = n;
};
