#include "Usuario.h"
#include "Post.h"
#include <iostream>

namespace Sistema {
	Usuario::Usuario(const std::string& nome) : nome(nome) {
		std::cout << "Usuario " << nome << " criado." << std::endl;
	}

	Usuario::~Usuario() {
		std::cout << "Usuario " << nome << " destruido." << std::endl;
	}

	void Usuario::adicionarPost(const std::shared_ptr<Post>& post) {
		posts.push_back(post);
		std::cout << "Post adicionado ao usuario " << nome << "." << std::endl;
	}

	void Usuario::seguir(const std::shared_ptr<Usuario>& outro) {
		outro->seguidores.push_back(shared_from_this());
		std::cout << nome << " agora segue " << outro->nome << "." << std::endl;
	}

	void Usuario::info() const {
		std::cout << "Usuario: " << nome << std::endl;
		std::cout << "Numero de posts: " << posts.size() << std::endl;
		std::cout << "Numero de seguidores: " << seguidores.size() << std::endl;

		for (auto& w : seguidores)
		{
			if (auto s = w.lock())
			{
				std::cout << s->nome << " ";
			}
		}

		std::cout << std::endl;
	}
}