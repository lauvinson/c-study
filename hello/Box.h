#pragma once
class Box
{
public:
	Box();
	Box(int id_,double price_,char* desc_);//构造函数
	~Box();//析构函数
	virtual int getId() = 0;//纯虚函数，派生类必须给出实现
	virtual double getPrice() = 0;
	virtual char* getDesc();//虚函数，具有缺省值
	Box* operator+(const Box& b);//price相加
protected:
	int id;
	double price;
	char* desc;
};

