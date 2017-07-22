/**
* @file log.hpp
* @author Marcin Zyla
* @date 22.07.2017
*
* This file contains useful debug logging macros
* @todo add usage
*/

#ifndef _LOG_H 
#define _LOG_H

#ifdef _DEBUG
	#include <iostream>
	#define __FILENAME__ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)
	#define LOG(severity, msg) std::cout << "[" << __FUNCTION__ << " @ " << __FILENAME__ << ":" << __LINE__ << "][" << severity << "] " << msg << std::endl;
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

#endif //_LOG_H





