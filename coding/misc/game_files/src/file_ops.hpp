#ifndef FILE_OPS_H
#define FILE_OPS_H

#include <string>
#include <vector>
#include <fstream>
#include <dirent.h>

std::vector<std::string> read_file ( const std::string& path );
std::vector< std::vector<std::string> > read_dir( const std::string& path, int& count );

#endif
