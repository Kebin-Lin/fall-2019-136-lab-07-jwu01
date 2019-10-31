#pragma once
std::string removeLeadingSpaces(std::string line);
std::string unindent(std::string fn);
int countChar(std::string line, char c);
std::string indent(std::string text);
void format(std::string filename);