#pragma once
#include <iostream>

namespace dominio {
	class Recurso {
	public:
		Recurso();

		~Recurso();

		void usar() const;
	};
}