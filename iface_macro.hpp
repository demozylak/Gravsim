/**
* @file iface_macro.hpp
* @author Marcin Zyla
* @date 24.07.2017
*
* This file contains macro for fast interface declaration
*/

#pragma once

#define INTERFACE_BEGIN(name) class name##Iface { \
									public: \
									virtual ~##name##Iface() {};

#define INTERFACE_END() };

