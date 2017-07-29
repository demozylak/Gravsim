/**
* @file log.hpp
* @author Marcin Zyla
* @date 22.07.2017
*
* This file contains useful debug logging macros
* @todo add usage
*/

#pragma once

#ifdef _DEBUG
	#include <iostream>
	#define __FILENAME__ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)
	#define LOG(severity, msg) std::cout << "["  << __FILENAME__ << ":" << __LINE__ << "][" << severity << "] " << msg << std::endl;
	#define INFO "INFO"
	#define DEB "DEBUG"
	#define WARN "WARNING"
	#define ERR "ERROR"

#else
	#define LOG(severity, msg)
	#define INFO
	#define DEB
	#define WARN
	#define ERR
#endif



