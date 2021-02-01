//
// Created by seymo on 1/31/2021.
//

#ifndef WINSHRINK_COMMANDS_H
#define WINSHRINK_COMMANDS_H
#include <string>
#include <random>

#include "../types/COMMANDSTRING.h"

class CommandHandler {
public:
	command WIN_HELP;
	command WIN_TIMEOUT;
	command WIN_ECHO;
	static void run ( char * torun ) {
		system(torun);
	}
	
};

#endif //WINSHRINK_COMMANDS_H
