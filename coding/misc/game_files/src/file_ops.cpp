#include "file_ops.hpp"
#include <stdlib.h>
#include <iostream>

std::vector<std::string> read_file( const std::string& path ) {
      std::ifstream in;

      std::cout << "opening " << path << "...";
      in.open( path.c_str(), std::ios::in );

      if ( in.fail()  ) {
            std::cout << "failed to open!" << std::endl;
            exit(1);
      }

      std::cout << "file opened!" << std::endl;
      std::cout << "collecting data...";

      std::vector<std::string> data;
      std::string temp;

      while ( std::getline( in, temp ) ) {
            data.push_back( temp );
      }

      in.close();

      std::cout << "data collected!" << std::endl;
      return data;
}

std::vector< std::vector<std::string> > read_dir ( const std::string& path,
            int& count )
{
      DIR *dir = NULL;
      struct dirent* dirn = 0;
      std::vector< std::vector<std::string> > files;

      dir = opendir( path.c_str() );
      if ( ! dir )
            exit(0);

      while ( ( dirn = readdir(dir) ) ) {
            std::string tmp = dirn -> d_name;
            if ( tmp == ".." || tmp == "." ) continue;

            files.push_back( read_file( path + tmp ) );
            count++;
      }

      closedir(dir);

      return files;
}

