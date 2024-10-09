#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "FASTQStatsPlugin.h"

void FASTQStatsPlugin::input(std::string file) {
 inputfile = file;
}

void FASTQStatsPlugin::run() {}

void FASTQStatsPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "fastq-stats";
myCommand += " ";
myCommand += inputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<FASTQStatsPlugin> FASTQStatsPluginProxy = PluginProxy<FASTQStatsPlugin>("FASTQStats", PluginManager::getInstance());
