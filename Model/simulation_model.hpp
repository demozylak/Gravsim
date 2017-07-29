/**
* @file simulation_model.hpp
* @author Marcin Zyla
* @date 25.07.2017
*
* This file contains application model declaration
*/
#pragma once

#include <list>

#include "../Core/simulation_model_iface.hpp"
#include "../Core/observable_iface.hpp"
#include "../Core/iterator.hpp"
#include "../Core/drawable_iface.hpp"


namespace Gravsim {

	namespace {
		typedef Iterator<DrawableIface> DrawIterator;
	}

	class Simulation : 
		public SimulationModelIface, 
		public ObservableIface<DrawIterator> {
	public:

		/* From ObservableIface*/
		void registerObserver(ObserverIface<DrawIterator>*);
		void unregisterObserver(ObserverIface<DrawIterator>*);

	private:
		std::list<ObserverIface<DrawIterator>*> observersList;

	};

}