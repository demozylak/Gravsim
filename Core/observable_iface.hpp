/**
* @file observable_iface.hpp
* @author Marcin Zyla
* @date 25.07.2017
*
* This file contains observable interface used in observer pattern
*/
#pragma once
#include "../util/iface_macro.hpp"
#include "observer_iface.hpp"

namespace Gravsim {
	template<typename T>
	INTERFACE_BEGIN(Observable)
		virtual void registerObserver(ObserverIface<T>*) = 0;
		virtual void unregisterObserver(ObserverIface<T>*) = 0;
	INTERFACE_END()
}