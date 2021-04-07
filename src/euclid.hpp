#pragma once
#include <string>
#include <utils/color.hpp>
#include <utils/render.hpp>

namespace euclid {

	using namespace std;

	struct EuclidAppOptions {
		int startWidth, startHeight;
	};

	struct EuclidApp {
		string name;
	};

	EuclidApp init(const char* name);
	EuclidApp init(const char* name, const EuclidAppOptions options);
} // namespace euclid
