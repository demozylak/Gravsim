/**
* @file iterable_iface.hpp
* @author Marcin Zyla
* @date 24.07.2017
*
* This file contains Iterable interface
*/
#pragma once

#include "iterator.hpp"
#include "../util/iface_macro.hpp"
	
namespace Gravsim {

	template <typename T>
	INTERFACE_BEGIN(Iterable)
		virtual Iterator<T> getIterator() = 0;
	INTERFACE_END()
}