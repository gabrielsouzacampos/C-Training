#pragma once
#include <string>

namespace Sistema
{
	class Post {
	private:
		std::string conteudo;

	public:
		Post(const std::string& texto);
		~Post();

		void exibir() const;
	};
}
