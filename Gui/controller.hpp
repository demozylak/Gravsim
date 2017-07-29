/**
* @file controller.hpp
* @author Marcin Zyla
* @date 22.07.2017
*
* This file contains MVC Controller declaration
*/

#pragma once

#include <SFML/Graphics.hpp>
#include "../Core/controller_iface.hpp"
#include "../Core/simulation_model_iface.hpp"

namespace Gravsim {

	/// Concrete controller
	class Controller : public ControllerIface {
	public:
		Controller(SimulationModelIface *simulation);
		int run();


	private:
		/// Handle to mvc model
		SimulationModelIface *_simulation;
		/// SFML window handle
		sf::RenderWindow * _window;
	};

}