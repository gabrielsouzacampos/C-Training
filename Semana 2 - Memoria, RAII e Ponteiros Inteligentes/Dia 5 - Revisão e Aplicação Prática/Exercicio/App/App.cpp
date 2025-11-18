#include <memory>
#include "../Sistema/Usuario.h"
#include "../Sistema/Post.h"

using namespace Sistema;

int main()
{
	auto gabriel = std::make_shared<Usuario>("Gabriel");
	auto maria = std::make_shared<Usuario>("Maria");

	gabriel->seguir(maria);

	auto post1 = std::make_shared<Post>("Meu primeiro post.");
	gabriel->adicionarPost(post1);

	gabriel->info();
	maria->info();

	return 0;
}