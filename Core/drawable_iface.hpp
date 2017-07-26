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
		virtual double getRelX() const = 0;
		virtual double getRelY() const = 0;
		virtual double getRelSize() const = 0;
		virtual virtual sf::Color getColor() const = 0;
	INTERFACE_END()
}