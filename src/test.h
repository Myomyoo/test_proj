/*************************************************************************
	> File Name: test.h
	> Author: Boyu Ren
	> Mail: renboyu2333@gmail.com
	> Created Time: Wed Jul 13 10:54:16 2022
 ************************************************************************/

#ifndef _TEST_H
#define _TEST_H
#include <iostream>
#include "/root/6.wisdom/test_project/third/tinyxml/tinyxml.h"
using namespace std;

void travsingXml(TiXmlElement *root);
void insertXmlNode(TiXmlDocument doc);
void createXml();
void calc(int x, int y);
#endif 
