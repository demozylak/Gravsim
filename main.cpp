/**
* @file main.cpp
* @author Marcin Zyla
* @date 22.07.2017
* 
* This file is the main file which contains entry point for the project.
*/

#include <SFML/Graphics.hpp>

#include "util/log.hpp"

/// Application entry point
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Gravsim", sf::Style::Titlebar| sf::Style::Close);



	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.display();
	}

	return 0;
}