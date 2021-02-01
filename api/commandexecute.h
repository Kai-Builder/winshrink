//
// Created by seymo on 1/31/2021.
//

#ifndef WINSHRINK_COMMANDEXECUTE_H
#define WINSHRINK_COMMANDEXECUTE_H

namespace Console {
	void Execute();
	
	void ColorSwitch(int color);
	
	int EngineID();
	
	void Execute ( const std::string & cmd );
}

#endif //WINSHRINK_COMMANDEXECUTE_H
