// Copyright 2013-2021 the openage authors. See copying.md for legal info.

#pragma once

#include "../gamedata/color_dummy.h"

namespace openage {
namespace util {

struct col {
	col(unsigned r, unsigned g, unsigned b, unsigned a) : r{r}, g{g}, b{b}, a{a} {}
	col(gamedata::palette_color c);

	unsigned r, g, b, a;

	void use();
	void use(float alpha);
};

}} // openage::util
