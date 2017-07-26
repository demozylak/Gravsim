/**
* @file simulation_model.cpp
* @author Marcin Zyla
* @date 26.07.2017
*
* This file contains model for the application
*/

#include "simulation_model.hpp"

using namespace Gravsim;

void Gravsim::Simulation::registerObserver(ObserverIface<DrawIterator>* obs)
{
	observersList.push_back(obs);
}

void Gravsim::Simulation::unregisterObserver(ObserverIface<DrawIterator>* obs)
{
	observersList.remove(obs);
}
