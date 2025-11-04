#include <iostream>

int main() {
	//Cria a variavel
	int idade = 25;
	std::cout << "Valor da Variavel: " << idade << std::endl;

	//Cria o ponteiro da variavel
	int* ponteiro = &idade;
	std::cout << "Endereço da Variavel: " << ponteiro << std::endl;

	//Altera o valor da variavel pelo ponteiro
	*ponteiro = 30;
	std::cout << "Ponteiro atualizado: " << idade << std::endl;

	//Crio uma referencia da variavel e altero o valor da variavel pela referencia
	int& referencia = idade;
	referencia = 26;
	std::cout << "Referencia da Variavel: " << idade << std::endl;

	return 0;
}