#include <iostream>
#include "converter.h"
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
    if(argc == 3)
    {
        if(strcmp(argv[1],"-p2o") == 0)
        {

            Converter::pcd2obj(string(argv[2]));
        }
        else if(strcmp(argv[1],"-o2p") == 0)
        {
            Converter::obj2pcd(string(argv[2]));
        }
    }

    return 0;
}

