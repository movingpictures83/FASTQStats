#ifndef FASTQSTATSPLUGIN_H
#define FASTQSTATSPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class FASTQStatsPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "FASTQStats";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
