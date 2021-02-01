//
// Created by seymo on 1/31/2021.
//

#ifndef WINSHRINK_COMMANDSTRING_H
#define WINSHRINK_COMMANDSTRING_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#define vectorClass std::vector
#define STR std::string
#define cfile std::ofstream
#define put(l) std::cout << l << std::endl
class command {
public:
	int id;
	STR name;
	void test() {
		system(name.c_str());
	}
	STR Description;
	STR Repo;
	STR Package;
	STR Version;
	bool IsDeprecated;
	STR Help_Display_name;
	vectorClass <STR> Aliases;
	const char* c_string() {
		return name.c_str();
	}
	void RunOnCommand(void commandFunction()) {
		commandFunction();
	}
	void PackageCommand() {
		cfile x(name + ".bat");
		x << "@echo off\n:: Start AutoMated process\n\n"
	   "echo Command Function Executed\necho Edit this file with your Command Contents." << std::endl;
	}
};

#endif //WINSHRINK_COMMANDSTRING_H
