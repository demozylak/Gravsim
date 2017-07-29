/**
* @file main.cpp
* @author Marcin Zyla
* @date 22.07.2017
* 
* This file is the main file which contains entry point for the project.
*/

#include "Gui/controller.hpp"
#include "Model/simulation_model.hpp"
#include "util/log.hpp"

using namespace Gravsim;

/// Application entry point
int main()
{
	Controller c(new Simulation);
	return c.run();
}