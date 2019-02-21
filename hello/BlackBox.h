#pragma once
#include "Box.h"
class BlackBox: public Box
{
public:
	BlackBox(int id_, double price_, char* desc_);
	~BlackBox();
	int getId();
	double getPrice();
	char* getDesc();
};

