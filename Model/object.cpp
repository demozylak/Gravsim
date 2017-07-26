/**
* @file object.cpp
* @author Marcin Zyla
* @date 26.07.2017
*
* Definitions for object class
*/

#include "object.hpp"


using namespace Gravsim;

Object::Object(double x, double y, double size, sf::Color color)
{
	_x = x;
	_y = y;
	_size = size;
	_color = color;
}
 
double Object::getRelX() const
{
	return _x;
}

double Object::getRelY() const
{
	return _y;
}

double Object::getRelSize() const
{
	return _size;
}

sf::Color Object::getColor() const
{
	return _color;
}