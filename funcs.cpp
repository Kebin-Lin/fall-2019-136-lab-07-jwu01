#include <iostream>
#include <cctype>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <sstream>
#include "funcs.h"

std::string removeLeadingSpaces(std::string line){
   std::string res = "";
   bool start = true;
   for(int i = 0; i < line.length(); i++){
      if (!(isspace(line[i]) && start)){
         res += line[i];
         start = false;
      }
   }
   return res;
}

std::string unindent(std::string fn){
   std::ifstream fin(fn);
   if (fin.fail()) {
       std::cerr << "File cannot be opened for reading." << std::endl;
       exit(1); // exit if failed to open the file
   }
   std::string res = "";
   std::string line;
   while(getline(fin,line)) {
      res += removeLeadingSpaces(line) + "\n";
   }
   fin.close();
   return res;
}

int countChar(std::string line, char c){
   int count = 0;
   bool start = true;
   for(int i = 0; i < line.length(); i++){
      if(line[i] == c){
         count++;
      }
   }
   return count;
}

std::string indent(std::string text){
   std::string res = "";
   int open = 0;
   int close = 0;
   std::stringstream ss(text);
   std::string line;
   while(std::getline(ss,line,'\n')){
      close += countChar(line,'}');
      for(int i = 0; i < open-close; i++){
         res += "\t";
      }
      res += line;
      open += countChar(line,'{');
      res +=  "\n";
   }
   return res;
}
