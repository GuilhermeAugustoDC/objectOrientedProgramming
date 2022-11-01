#include "MIDIA.h"

// Construtor padrão
MIDIA::MIDIA(string nomeArtista, string nomeTitulo, deque<string> fx, int lanc, string gen, deque<string> kw)
{
    artista = nomeArtista;
    titulo = nomeTitulo;
    faixas = fx;
    lancamento = lanc;
    genero = gen;
    keywords = kw;
}

/* Encapsulamento */
string MIDIA::getArtista()
{
    return (this->artista);
};
void MIDIA::setArtista(string name)
{
    this->artista = name;
};

string MIDIA::getTitulo()
{
    return (this->titulo);
};
void MIDIA::setTitulo(string name)
{
    this->titulo = name;
};

deque<string> MIDIA::getFaixa()
{
    return (this->faixas);
};
void MIDIA::setFaixa(deque<string> name)
{
    this->faixas = name;
};

int MIDIA::getLancamento()
{
    return (this->lancamento);
};
void MIDIA::setLancamento(int n)
{
    this->lancamento = n;
};

string MIDIA::getGenero()
{
    return (this->genero);
};
void MIDIA::setGenero(string name)
{
    this->genero = name;
};

deque<string> MIDIA::getKeywords()
{
    return (this->keywords);
};
void MIDIA::setKeywords(deque<string> kw)
{
    this->keywords = kw;
};
