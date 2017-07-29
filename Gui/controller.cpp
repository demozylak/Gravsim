/**
* @file controller.cpp
* @author Marcin Zyla
* @date 22.07.2017
*
* This file contains MVC Controller definition
*/

#include "controller.hpp"
#include "../util/log.hpp"

using namespace Gravsim;

Controller::Controller(SimulationModelIface *simulation) : _simulation(simulation)
{
	LOG(INFO, "Creating Controller");
	_window = new sf::RenderWindow(sf::VideoMode(800, 600), "Gravsim", sf::Style::Titlebar | sf::Style::Close);
	LOG(INFO, "Controller created");
}

int Gravsim::Controller::run()
{
	LOG(INFO, "Entering main loop");
	
	while (_window->isOpen())
	{
		sf::Event event;
		while (_window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				_window->close();
		}

		_window->clear();
		_window->display();
	}

	LOG(INFO, "Main loop ended");
	return 0;
}
