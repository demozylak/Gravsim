/**
* @file view.cpp
* @author Marcin Zyla
* @date 23.07.2017
*
* This file contains MVC View definition
*/

#include "view.hpp"

Gravsim::View::View(sf::Window * window) : _window(window)
{
}

void Gravsim::View::notifyMe(Iterator<DrawableIface> it)
{
}
