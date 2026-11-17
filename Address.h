#pragma once
#include "CharString.h"
#include <iostream>
class Address
{
	int houseNo;
	int streetNo;
	char block;
	CharString city;
public:
	Address(int h = 0, char b = '\0', int s = 0, CharString c = "\0");
	void displayAddress();
	void operator=(const Address& a);
};

