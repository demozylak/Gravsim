/**
* @file controller_iface.hpp
* @author Marcin Zyla
* @date 22.07.2017
*
* This file contains MVC Controller interface
*/
#pragma once
#include "../util/iface_macro.hpp"

namespace Gravsim {

	INTERFACE_BEGIN(Controller)
		/// Main loop function
		virtual int run() = 0;
	INTERFACE_END()
}