/**
* @file object.hpp
* @author Marcin Zyla
* @date 26.07.2017
*
* This file declares Object used in simulation
*/
#pragma once

#include "../Core/drawable_iface.hpp"

namespace Gravsim {
	class Object :
		public DrawableIface {
	public:
		
		Object(double x, double y, double size, sf::Color color);

		/* from DrawableIface */
		double getRelX() const;
		double getRelY() const;
		double getRelSize() const;
		sf::Color getColor() const;

	private:
		/* Physical properties */
		double _x;
		double _y;

		double _size;

		sf::Color _color;

	};
}