#include "Box.h"
#include <iostream>
using namespace std;

Box::Box()
{
}

Box::Box(int id_, double price_, char* desc_): id(id_), price(price_), desc(desc_)
{
}

Box::~Box()
{
	cout << "object is deleted" << endl;
}

char * Box::getDesc()
{
	return (char *) "ÔÝÎÞËµÃ÷";
}

Box * Box::operator+(const Box & b)
{
	this->price += b.price;
	return this;
}

