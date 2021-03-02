#ifndef __MYSTRING_H
#define __MYSTRING_H

#include <cstring>
#include <stdio.h>

int mystrlen(std::string str);
std::string mystrcpy(std::string str1, std::string str2);
std::string mystrcat(std::string , std::string);
bool mystrcmp(std::string, std::string);

#endif