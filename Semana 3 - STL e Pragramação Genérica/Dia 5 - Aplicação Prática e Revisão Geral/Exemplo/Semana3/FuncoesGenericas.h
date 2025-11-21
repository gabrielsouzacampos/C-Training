#pragma once
#include <numeric>

template <typename Container>
auto somaValores(const Container& c) {
	using T = typename Container::value_type;
	return std::accumulate(c.begin(), c.end(), T{});
}
