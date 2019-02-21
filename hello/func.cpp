using namespace std;

#include <iostream>//��׼�������
#include <string>
#include <limits>
#include <ctime>
#include <iomanip>
#include <fstream>//�ļ�����
#include "hello.h"
#include "Box.h"
#include "BlackBox.h"
#include <Windows.h>//windows
#include "MyException.h"//�Զ����쳣
#include "func.h";

const string ALARM = "��ã����磡";


int printTypeSize() {
	cout << "type: \t\t" << "************size**************" << endl;
	cout << "bool: \t\t" << "��ռ�ֽ�����" << sizeof(bool);
	cout << "\t���ֵ��" << (numeric_limits<bool>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<bool>::min)() << endl;
	cout << "char: \t\t" << "��ռ�ֽ�����" << sizeof(char);
	cout << "\t���ֵ��" << (numeric_limits<char>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<char>::min)() << endl;
	cout << "signed char: \t" << "��ռ�ֽ�����" << sizeof(signed char);
	cout << "\t���ֵ��" << (numeric_limits<signed char>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<signed char>::min)() << endl;
	cout << "unsigned char: \t" << "��ռ�ֽ�����" << sizeof(unsigned char);
	cout << "\t���ֵ��" << (numeric_limits<unsigned char>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<unsigned char>::min)() << endl;
	cout << "wchar_t: \t" << "��ռ�ֽ�����" << sizeof(wchar_t);
	cout << "\t���ֵ��" << (numeric_limits<wchar_t>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<wchar_t>::min)() << endl;
	cout << "short: \t\t" << "��ռ�ֽ�����" << sizeof(short);
	cout << "\t���ֵ��" << (numeric_limits<short>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<short>::min)() << endl;
	cout << "int: \t\t" << "��ռ�ֽ�����" << sizeof(int);
	cout << "\t���ֵ��" << (numeric_limits<int>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<int>::min)() << endl;
	cout << "unsigned: \t" << "��ռ�ֽ�����" << sizeof(unsigned);
	cout << "\t���ֵ��" << (numeric_limits<unsigned>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<unsigned>::min)() << endl;
	cout << "long: \t\t" << "��ռ�ֽ�����" << sizeof(long);
	cout << "\t���ֵ��" << (numeric_limits<long>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<long>::min)() << endl;
	cout << "unsigned long: \t" << "��ռ�ֽ�����" << sizeof(unsigned long);
	cout << "\t���ֵ��" << (numeric_limits<unsigned long>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<unsigned long>::min)() << endl;
	cout << "double: \t" << "��ռ�ֽ�����" << sizeof(double);
	cout << "\t���ֵ��" << (numeric_limits<double>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<double>::min)() << endl;
	cout << "long double: \t" << "��ռ�ֽ�����" << sizeof(long double);
	cout << "\t���ֵ��" << (numeric_limits<long double>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<long double>::min)() << endl;
	cout << "float: \t\t" << "��ռ�ֽ�����" << sizeof(float);
	cout << "\t���ֵ��" << (numeric_limits<float>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<float>::min)() << endl;
	cout << "size_t: \t" << "��ռ�ֽ�����" << sizeof(size_t);
	cout << "\t���ֵ��" << (numeric_limits<size_t>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<size_t>::min)() << endl;
	cout << "string: \t" << "��ռ�ֽ�����" << sizeof(string) << endl;
	// << "\t���ֵ��" << (numeric_limits<string>::max)() << "\t��Сֵ��" << (numeric_limits<string>::min)() << endl;  
	cout << "type: \t\t" << "************size**************" << endl;
	return 0;
}


double getSin(double v) {
	return sin(v);
}


void printRand() {
	int i, j;
	//��������
	srand((unsigned)time(NULL));
	//����10�������
	for (i = 0; i < 10; i++)
	{
		j = rand();
		cout << setw(7) << (5) << j << endl;
	}
}


void pointer() {
	int var = 127;
	int *ptr = &var;
	cout << ptr << endl;
}


void reference() {
	int var;
	int& varR = var;
	var = -127;
	cout << "var:" << var << endl;
	cout << "varR:" << varR << endl;
}


void getDateTime() {
	// ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
	time_t now = time(0);

	// �� now ת��Ϊ�ַ�����ʽ
	char* dt = ctime(&now);

	cout << "�������ں�ʱ�䣺" << dt << endl;

	// �� now ת��Ϊ tm �ṹ
	tm *gmtm = gmtime(&now);
	dt = asctime(gmtm);
	cout << "UTC ���ں�ʱ�䣺" << dt << endl;
}


void inOut() {
	cout << "please type your name:";
	char name[24];
	cin >> name;
	cout << "please type your email:";
	char email[256];
	cin >> email;
	for (int i = 0; i < 32; i++) {
		cout << "*";
	}
	cout << endl;
	cout << "name:" << setw(5) << name << endl;
	cout << "email:" << setw(5) << email << endl;
}


struct Books {
	char title[48];
	char author[48];
	int id;
};
void structTest() {
	struct Books book;
	Books book1 = { "Java����","cindy",17713 };
	book.id = 17712;
	strcpy(book.title, "C++���˼��");
	strcpy(book.author, "vinson");
	cout << "book id:" << book1.id << endl;
	cout << "book title:" << book1.title << endl;
	cout << "book author:" << book1.author << endl;
}


void getObject() {
	BlackBox box(0, 1.0, (char*) "������...");
	cout << box.getDesc() << endl;
}


void inherit() {
	BlackBox box(0, 1.0, (char*) "�̳�...");
	cout << box.getDesc() << endl;
}


void overload() {
	BlackBox box(0, 1.0, (char*) "���������...");
	BlackBox box2(0, 4.0, (char*) "���������...");
	box + box2;
	cout << box.getPrice() << endl;
}

/**
getLine()��C++���亯��
**/
void fs() {
	//д�ļ�
	ofstream f1("test.txt");//���ļ�����д�����ļ������ھʹ�����
	if (!f1) {
		cerr << "���ļ�ʧ��" << endl;
		return;//���ļ�ʧ�����������
	}
	char * name, *address;
	name = new char[24];
	address = new char[64];
	cin >> name >> address;
	f1 << setw(20) << name << endl;//ʹ�ò��������д�ļ�����
	f1 << setw(20) << address << endl;
	f1.close();
	//���ļ�
	ifstream infile("test.txt");
	string s;
	while (getline(infile, s))
	{
		cout << s << endl;
	}
	infile.close();
	//delete[] name;
	//WinExec("notepad.exe test.txt", SW_SHOW);//���ü��±����ļ�
	cout << endl;
}


void customException() {
	try
	{
		throw MyException();
	}
	catch (MyException& mye) {
		cout << mye.what() << endl;
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
}