#include <iostream>
#include <string>
#include <getopt.h>
#include "converter.h"

using namespace std;

void print_usage()
{
  std::cout << "obj2pcd [options] [.pcd or .obj file]" << std::endl << std::endl <<
    "Options:" << std::endl <<
    "  -h       Print this help" << std::endl;
}

bool check_ext(const std::string &fn, const std::string &ext)
{
  return fn.substr(fn.find_last_of(".") + 1) == ext;
}

std::string replace_ext(const std::string &fn, const std::string &ext)
{
  return fn.substr(0, fn.find_last_of(".")) + "." + ext;
}

int main(int argc, char** argv)
{
  if (argc < 2 || argc > 3) {
    print_usage();
    return 1;
  }

  std::string srcfilename = argv[1];
  std::string dstfilename;
  if (argc == 4) dstfilename = argv[2];
  if (check_ext(srcfilename, "obj"))
  {
    if (dstfilename.empty())
      dstfilename = replace_ext(srcfilename, "pcd");
    std::cout << "Converting " << srcfilename << " -> " << dstfilename << std::endl;
    Converter::obj2pcd(srcfilename, dstfilename);
    std::cout << "Done." << std::endl;
  } else if (check_ext(srcfilename, "pcd"))
  {
    if (dstfilename.empty())
      dstfilename = replace_ext(srcfilename, "obj");
    std::cout << "Converting " << srcfilename << " -> " << dstfilename << std::endl;
    Converter::pcd2obj(srcfilename, dstfilename);
    std::cout << "Done." << std::endl;
  } else {
    std::cerr << "Error: The file extension must be .obj or .pcd" << std::endl;
    return 1;
  }

  return 0;
}
