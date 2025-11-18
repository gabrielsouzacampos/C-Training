#pragma once
#include <string>
#include <vector>
#include <memory>

namespace Sistema
{
	class Post;

	class Usuario : public std::enable_shared_from_this<Usuario> {
	private:
		std::string nome;

	public:
		std::vector<std::shared_ptr<Post>> posts;
		std::vector<std::weak_ptr<Usuario>> seguidores;

		Usuario(const std::string& nome);
		~Usuario();

		void adicionarPost(const std::shared_ptr<Post>& post);
		void seguir(const std::shared_ptr<Usuario>& outro);
		void info() const;
	};
}
