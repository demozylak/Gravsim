#include <SFML/Graphics.hpp>

#include "util/log.hpp"



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