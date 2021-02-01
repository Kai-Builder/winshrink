#ifndef SESSION
#define SESSION
#include "commandexecute.h"


void Console::ColorSwitch ( int color ) { system(("color " + std::to_string(color)).c_str()); }
int Console::EngineID ( ) { return 101; }
void Console::Execute ( const std::string& cmd ) { system(cmd.c_str()); }
#endif