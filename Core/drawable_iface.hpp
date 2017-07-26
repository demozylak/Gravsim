/**
* @file drawable_iface.hpp
* @author Marcin Zyla
* @date 25.07.2017
*
* This file contains drawable interface 
* used for communication view <-> model 
*/
#pragma once

#include <SFML/Graphics.hpp>
#include "../util/iface_macro.hpp"

namespace Gravsim {

	INTERFACE_BEGIN(Drawable)
		virtual unsigned int getRelX() const = 0;
		virtual unsigned int getRelY() const = 0;
		virtual unsigned int getRelSize() const = 0;
		virtual sf::Color    getColor() const = 0;
	INTERFACE_END()
}