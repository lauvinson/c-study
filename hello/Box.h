#pragma once
class Box
{
public:
	Box();
	Box(int id_,double price_,char* desc_);//���캯��
	~Box();//��������
	virtual int getId() = 0;//���麯����������������ʵ��
	virtual double getPrice() = 0;
	virtual char* getDesc();//�麯��������ȱʡֵ
	Box* operator+(const Box& b);//price���
protected:
	int id;
	double price;
	char* desc;
};

