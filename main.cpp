#include <algorithm>
#include <deque>
#include <iostream>

#include "DRIVER.h"

int main()
{
    /* LISTA DE MIDIAS */
    /* CDS */
    deque<CD> colecaoCD;

    /* ROCK */
    /* PINK FLOYD */
    colecaoCD.push_front(*(new CD(42, 1.1, true, "Pink Floyd", "The Dark Side Of The Moon", deque<string>{"Speak To Me", "Breathe (In The Air)", "On The Run", "Time", "The Great Gig In The Sky", "Money", "Us And Them", "Any Colour You Like", "Brain Damage", "Eclipse"}, 1973, "Rock", deque<string>{"Rock", "Classic", "Anos 70"})));
    /* EQUAL TEST */ colecaoCD.push_front(*(new CD(42, 1.1, true, "Pink Floyd", "The Dark Side Of The Moon Ao Vivo", deque<string>{"Wish you where here", "Breathe (In The Air)", "On The Run", "Shine On You Crazy Diamond Pt.I e V", "The Great Gig In The Sky", "Money", "Us And Them", "Any Colour You Like", "Brain Damage", "Eclipse"}, 1973, "Rock", deque<string>{"Rock", "Classic", "Anos 70"})));

    /* BUCKETHEAD */
    colecaoCD.push_front(*(new CD(1, 1.3, true, "Buckethead", "Eletric Tears", deque<string>{"All in the Waiting", "Sketches of spain", "Padmasana", "Mustang", "The Way to Heaven", "Baptism of Solitude", "Kansas Storm", "Datura", "Mantaray", "Witches on the Heath", "Angel Monster", "Eletric Tears", "Spell of the Gypsies"}, 2002, "Rock", deque<string>{"Rock", "Instrumental", "Anos 2000"})));
    /* EQUAL TEST */colecaoCD.push_front(*(new CD(1, 1.3, true, "Buckethead", "Eletric Tears Ao Vivo", deque<string>{"All in the Waiting", "Sketches of spain", "Doomride", "Mustang", "The Way to Heaven", "WarWeb", "Kansas Storm", "Datura", "Mantaray", "Witches on the Heath", "Angel Monster", "Aquabot", "Spell of the Gypsies"}, 2002, "Rock", deque<string>{"Rock", "Instrumental", "Anos 2000"})));

    /* MPB */
    /* DJAVAN */
    colecaoCD.push_front(*(new CD(35, 1.1, true, "Djavan", "A voz e o violão", deque<string>{"Flor de Lis", "Na Boca do Beco", "Maçã do Rosto", "Pára-Raio", "E Que Deus Ajude", "Quantas Voltas Dá Meu Mundo", "Maria Das Mercedes", "Muito Obrigado", "Embola a Bola(Cateretê)", "Fato Consumado", "Magia", "Ventos Do Norte"}, 1975, "MPB", deque<string>{"Brasileira", "Classic", "Anos 70"})));
    /* EQUAL TEST */colecaoCD.push_front(*(new CD(35, 1.1, true, "Djavan", "A voz e o violão Ao Vivo", deque<string>{"Flor de Lis", "Na Boca do Beco", "Uma Brasileira", "Pára-Raio", "E Que Deus Ajude", "Quantas Voltas Dá Meu Mundo", "Maria Das Mercedes", "Solitude", "Embola a Bola(Cateretê)", "Fato Consumado", "Magia", "Orquídea"}, 1975, "MPB", deque<string>{"Brasileira", "Classic", "Anos 70"})));
    
    /* CAZUZA */
    colecaoCD.push_front(*(new CD(35, 1.2, true, "Cazuza", "Exagerado", deque<string>{"Exagerado", "Medieval li", "Cúmplice", "Mal Nenhum", "Balada de um Vagabundo", "Codinome Beija-Flor", "Desastre Mental", "Boa Vida", "Só As Mãe São Felizes", "Rock Da Descerebração"}, 1985, "MPB", deque<string>{"Brasileira", "Classic", "Anos 80"})));
    /* EQUAL TEST */colecaoCD.push_front(*(new CD(35, 1.2, true, "Cazuza", "Exagerado Ao Vivo", deque<string>{"Exagerado", "Medieval li", "Ideologia", "Mal Nenhum", "Balada de um Vagabundo", "O Tempo não pára", "Desastre Mental", "Boa Vida", "Só As Mãe São Felizes", "Faz Parte Do Meu Show"}, 1985, "MPB", deque<string>{"Brasileira", "Classic", "Anos 80"})));

    /* RAP */
    /* DJONGA */
    colecaoCD.push_front(*(new CD(35, 1.1, true, "Djonga", "O MENINO QUE QUERIA SER DEUS", deque<string>{"ATÍPICO", "JUNHO DE 94", "UFA", "1010", "SOLTO", "CANÇÃO PRO MEU FILHO", "CORRA", "ESTOURO", "DE LÁ", "ETERNO(Remake)"}, 2018, "RAP", deque<string>{"Nacional", "Rap", "Anos 2000"})));
    /* EQUAL TEST */colecaoCD.push_front(*(new CD(35, 1.1, true, "Djonga", "O MENINO QUE QUERIA SER DEUS Ao Vivo", deque<string>{"Corre Das Notas", "JUNHO DE 94", "UFA", "1010", "Eu Não Sou Tão Bom Assim", "CANÇÃO PRO MEU FILHO", "CORRA", "Geminiano", "DE LÁ", "ETERNO(Remake)"}, 2018, "RAP", deque<string>{"Nacional", "Rap", "Anos 2000"})));

    /* RACIONAIS */
    colecaoCD.push_front(*(new CD(1, 1.8, true, "Racionais MC's", "Sobrevivendo no Inferno", deque<string>{"Jorge da Capadócia", "Genesis", "Capitulo 4, Versículo 3", "Tô Ouvindo Alguem Me Chamar", "Rapaz Comum", "...", "Diario De Um Detento", "Periferia É Periferia", "Qual Mentira Vou Acreditar", "Mágico de Oz", "Formula Mágica de Paz", "Salve"}, 1997, "RAP", deque<string>{"Rap", "Classico", "Nacional", "Anos 90"})));
    /* EQUAL TEST */colecaoCD.push_front(*(new CD(1, 1.8, true, "Racionais MC's", "Sobrevivendo no Inferno Ao Vivo", deque<string>{"Jorge da Capadócia", "Genesis", "Vida Loka Pt1", "Tô Ouvindo Alguem Me Chamar", "Rapaz Comum", "Jesus Chorou", "Diario De Um Detento", "Periferia É Periferia", "Vida Loka Pt2", "Mágico de Oz", "Formula Mágica de Paz", "Salve"}, 1997, "RAP", deque<string>{"Rap", "Classico", "Nacional", "Anos 90"})));

    cout << colecaoCD[0].getArtista() << endl;
    showAllCds("Buckethead", colecaoCD);

    /* DVDS */
    deque<DVD> colecaoDVD;

    /* ROCK */
    /* PINK FLOYD */
    colecaoDVD.push_front(*(new DVD(deque<string>{"MP4"}, deque<string>{"HD"}, deque<string>{"PT-BR"}, "Pink Floyd", "The Division Bell", deque<string>{"Cluster One", "What Do You Want from Me", "Poles Apart", "Marooned", "A Great Day For Freedom", "Wearing the Inside Out", "Take It Back", "Coming Back to Life", "Keep Talking", "Lost for Words", "High Hopes"}, 1994, "Rock", deque<string>{"Rock", "Classic", "Anos 90"})));
    /* EQUAL TEST */colecaoDVD.push_front(*(new DVD(deque<string>{"MP4"}, deque<string>{"HD"}, deque<string>{"PT-BR"}, "Pink Floyd", "The Division Bell Ao Vivo", deque<string>{"Dogs", "What Do You Want from Me", "Poles Apart", "Marooned", "Sheep", "Wearing the Inside Out", "Take It Back", "Pings On The Wing 2", "Keep Talking", "Lost for Words", "High Hopes"}, 1994, "Rock", deque<string>{"Rock", "Classic", "Anos 90"})));

    /* BUCKETHEAD */
    colecaoDVD.push_front(*(new DVD(deque<string>{"MP4"}, deque<string>{"HD"}, deque<string>{"PT-BR"}, "Buckethead", "Colma", deque<string>{"Whitewash", "For Mom", "Ghost", "Hills Of Eternity", "Big Sur Moon", "Machete", "Wishing Well", "Lone Sal Bug", "Santum", "Wondering", "Watching The Boats With My Dad", "Ghost/Part2", "Colma"}, 1998, "Rock", deque<string>{"Rock", "Instrumental", "Anos 90"})));
    /* EQUAL TEST */colecaoDVD.push_front(*(new DVD(deque<string>{"MP4"}, deque<string>{"HD"}, deque<string>{"PT-BR"}, "Buckethead", "Colma Ao Vivo", deque<string>{"King James", "For Mom", "Ghost", "Soothsayer", "Big Sur Moon", "Machete", "Wishing Well", "Lone Sal Bug", "Santum", "Wondering", "Mecha Gigan", "Ghost/Part2", "Colma"}, 1998, "Rock", deque<string>{"Rock", "Instrumental", "Anos 90"})));

    /* MPB */
    /* DJAVAN */
    colecaoDVD.push_front(*(new DVD(deque<string>{"MP4"}, deque<string>{"HD"}, deque<string>{"PT-BR"}, "Djavan", "Coisa de Acender", deque<string>{"A Rota Do Individuo(Ferrugem)", "Boa Noite", "Se...", "Linha do Equador", "Violeiros", "Andaluz", "Outono", "Alívio", "Baile"}, 1992, "MPB", deque<string>{"Nacional", "Classic", "Anos 90"})));
    /* EQUAL TEST */colecaoDVD.push_front(*(new DVD(deque<string>{"MP4"}, deque<string>{"HD"}, deque<string>{"PT-BR"}, "Djavan", "Coisa de Acender Ao Vivo", deque<string>{"Meu", "Milagreiro", "Se...", "Linha do Equador", "Violeiros", "Ladeirinha", "Infinitude", "Alívio", "Baile"}, 1992, "MPB", deque<string>{"Nacional", "Classic", "Anos 90"})));
    
    /* CAZUZA */
    colecaoDVD.push_front(*(new DVD(deque<string>{"MP4"}, deque<string>{"HD"}, deque<string>{"PT-BR"}, "Cazuza", "Só Se For A Dois", deque<string>{"Só Se For A Dois", "Ritual", "O Nosso Amor A Gente Inventa(Estória Romântica)", "Culpa De Estimação", "Solidão Que Nada", "Completamente Blue", "Vai À Luta", "Quarta-Feira", "Heavy Love", "O Lobo Mau Da Ucrânia", "Balada Do Esplanada"}, 1987, "MPB", deque<string>{"Nacional", "Classic", "Anos 80"})));
    /* EQUAL TEST */colecaoDVD.push_front(*(new DVD(deque<string>{"MP4"}, deque<string>{"HD"}, deque<string>{"PT-BR"}, "Cazuza", "Só Se For A Dois Ao Vivo", deque<string>{"Só Se For A Dois", "Ritual", "Por Ai", "Culpa De Estimação", "Burguesia", "Completamente Blue", "Down Em Mim", "Quarta-Feira", "Heavy Love", "O Lobo Mau Da Ucrânia", "Tudo é amor"}, 1987, "MPB", deque<string>{"Nacional", "Classic", "Anos 80"})));

    /* RAP */
    /* DJONGA */
    colecaoDVD.push_front(*(new DVD(deque<string>{"MP4"}, deque<string>{"HD"}, deque<string>{"PT-BR"}, "Djonga", "NU", deque<string>{"Nós", "Ó Quem Chega", "Xapralá", "Me dá a Mão", "Vírgula", "Ricô", "Dá pra ser ?", "Eu"}, 2021, "Rock", deque<string>{"RAP", "Nacional", "Anos 2000"})));
    /* EQUAL TEST */colecaoDVD.push_front(*(new DVD(deque<string>{"MP4"}, deque<string>{"HD"}, deque<string>{"PT-BR"}, "Djonga", "NU Ao Vivo", deque<string>{"Nós", "Ó Quem Chega", "Xapralá", "HAT TRICK", "Vírgula", "Ricô", "DEUS E O DIABO NA TERRA DO SOL", "Eu"}, 2021, "Rock", deque<string>{"RAP", "Nacional", "Anos 2000"})));

    /* RACIONAIS */
    colecaoDVD.push_front(*(new DVD(deque<string>{"MP4"}, deque<string>{"HD"}, deque<string>{"PT-BR"}, "Racioanais MC's", "Racioanais MC's", deque<string>{"Mente do Vilão", "Na Fé Irmão", "Hey Boy", "Pânico na Zona Sul", "Periferia é Periferia", "Fim de Semana no Parque", "Formula Magica Da Paz", "Rapaz Comum", "A Vítima", "Tô Ouvindo Alguem Me Chamar", "Mano na Porta do Bar", "Crime Vai e Vem", "Vida Loka, Pt.1", "Capitulo 4, Versiculo 3"}, 2013, "RAP", deque<string>{"RAP", "Classic", "Anos 2000"})));
    /* EQUAL TEST */colecaoDVD.push_front(*(new DVD(deque<string>{"MP4"}, deque<string>{"HD"}, deque<string>{"PT-BR"}, "Racioanais MC's", "Racioanais MC's Ao Vivo", deque<string>{"Mente do Vilão", "Na Fé Irmão", "Hey Boy", "Pânico na Zona Sul", "Negro Drama", "Fim de Semana no Parque", "A Vida É Desafio", "Rapaz Comum", "A Vítima", "Estilo Cachorro", "Mano na Porta do Bar", "Crime Vai e Vem", "Vida Loka, Pt.1", "Capitulo 4, Versiculo 3"}, 2013, "RAP", deque<string>{"RAP", "Classic", "Anos 2000"})));


    /* Equals */



    showAllDvds("artistateste", colecaoDVD);
    /*MIDIA*/
    showAllMidia("artistateste", colecaoCD, colecaoDVD);
    showAllInYear(2021, colecaoCD, colecaoDVD);
    showAllInYear(1973, colecaoCD, colecaoDVD);
    showAllByGen("Rock", colecaoCD, colecaoDVD);
    showAllKw(colecaoCD, colecaoDVD);

    showEquals("Eletric Tears", "Eletric Tears Ao Vivo", colecaoCD, colecaoDVD);
    return 0;
}