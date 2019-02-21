#include "BlackBox.h"


BlackBox::BlackBox(int id_, double price_, char* desc_)
{
	this -> id = id_;
	this -> price = price_;
	this -> desc = desc_;
}

BlackBox::~BlackBox()
{
}

int BlackBox::getId()
{
	return id;
}

double BlackBox::getPrice()
{
	return price;
}

char * BlackBox::getDesc()
{
	return desc;
}
