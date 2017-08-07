/**
* @file view.hpp
* @author Marcin Zyla
* @date 23.07.2017
*
* This file contains MVC View declaration
*/
#pragma once

#include "../Core/iterator.hpp"
#include "../Core/drawable_iface.hpp"
#include "../Core/observer_iface.hpp"
#include "../Core/simulation_model_iface.hpp"
#include <SFML/Graphics.hpp>

namespace Gravsim {

	class View : ObserverIface<Iterator<DrawableIface>>{
	public:
		View(sf::Window *window);

		/* From ObserverIface */
		void notifyMe(Iterator<DrawableIface> it);

	private:
		sf::Window *_window;
	};

}