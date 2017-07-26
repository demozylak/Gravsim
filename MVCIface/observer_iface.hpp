/**
* @file observer_iface.hpp
* @author Marcin Zyla
* @date 25.07.2017
*
* This file contains observer interface used in observer pattern
*/
#pragma once
#include "../util/iface_macro.hpp"

namespace Gravsim {

	template<T>
	INTERFACE_BEGIN(Observer)
		virtual void notifyObserver(T) = 0;
	INTERFACE_END()
}