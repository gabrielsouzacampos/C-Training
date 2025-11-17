#include "../Arquivo/Arquivo.h"
#include <iostream>

using namespace arquivo;

int main()
{
    {
        ArquivoTexto arq("log.txt");
        arq.escrever("Primeira linha");
        arq.escrever("Segunda linha");
        std::cout << "Conteudo do arquivo:\n" << arq.ler();
    }

    return 0;
}