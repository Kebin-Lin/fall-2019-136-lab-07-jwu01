#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

int main(int argc, char *argv[])
{
   std::string fn;
   std::cout << "enter a file to format: ";
   std:: cin >> fn;
   format(fn);
}
