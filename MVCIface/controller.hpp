/**
* @file controller.hpp
* @author Marcin Zyla
* @date 22.07.2017
*
* This file contains MVC Controller declaration
*/

#pragma once

#include "controller_iface.hpp"
#include "simulation_model_iface.hpp"

namespace Gravsim {

	/// Concrete controller
	class Controller : public ControllerIface {
	public:
		Controller(SimulationModelIface simulation);

	private:
		SimulationModelIface simulation;
	};

}