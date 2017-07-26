/**
* @file iterator.hpp
* @author Marcin Zyla
* @date 25.07.2017
*
* This file contains declaration of iterator(s)
*/
#pragma once

#include <iterator>

namespace Gravsim {
	template<typename T>
	using Iterator = std::iterator<std::input_iterator_tag, T>;
};