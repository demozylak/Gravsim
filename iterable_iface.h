/**
* @file iterable_iface.hpp
* @author Marcin Zyla
* @date 24.07.2017
*
* This file contains Iterable interface
*/
#pragma once
#include <iterator>
#include "iface_macro.hpp"
	
namespace Gravsim {

	template <T>
	INTERFACE_BEGIN(Iterable)
		virtual std::iterator<std::input_iterator_tag, T> getIterator() = 0;
	INTERFACE_END()
}