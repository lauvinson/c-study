using namespace std;

#include <iostream>//标准输入输出
#include <string>
#include <limits>
#include <ctime>
#include <iomanip>
#include <fstream>//文件和流
#include "hello.h"
#include "Box.h"
#include "BlackBox.h"
#include <Windows.h>//windows
#include "MyException.h"//自定义异常
#include "func.h";

const string ALARM = "你好，世界！";


int printTypeSize() {
	cout << "type: \t\t" << "************size**************" << endl;
	cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
	cout << "\t最大值：" << (numeric_limits<bool>::max)();
	cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
	cout << "char: \t\t" << "所占字节数：" << sizeof(char);
	cout << "\t最大值：" << (numeric_limits<char>::max)();
	cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
	cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
	cout << "\t最大值：" << (numeric_limits<signed char>::max)();
	cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
	cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
	cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
	cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
	cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
	cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
	cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
	cout << "short: \t\t" << "所占字节数：" << sizeof(short);
	cout << "\t最大值：" << (numeric_limits<short>::max)();
	cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
	cout << "int: \t\t" << "所占字节数：" << sizeof(int);
	cout << "\t最大值：" << (numeric_limits<int>::max)();
	cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
	cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
	cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
	cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
	cout << "long: \t\t" << "所占字节数：" << sizeof(long);
	cout << "\t最大值：" << (numeric_limits<long>::max)();
	cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
	cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
	cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
	cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
	cout << "double: \t" << "所占字节数：" << sizeof(double);
	cout << "\t最大值：" << (numeric_limits<double>::max)();
	cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
	cout << "long double: \t" << "所占字节数：" << sizeof(long double);
	cout << "\t最大值：" << (numeric_limits<long double>::max)();
	cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
	cout << "float: \t\t" << "所占字节数：" << sizeof(float);
	cout << "\t最大值：" << (numeric_limits<float>::max)();
	cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
	cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
	cout << "\t最大值：" << (numeric_limits<size_t>::max)();
	cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
	cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
	// << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
	cout << "type: \t\t" << "************size**************" << endl;
	return 0;
}


double getSin(double v) {
	return sin(v);
}


void printRand() {
	int i, j;
	//设置种子
	srand((unsigned)time(NULL));
	//生成10个随机数
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
	// 基于当前系统的当前日期/时间
	time_t now = time(0);

	// 把 now 转换为字符串形式
	char* dt = ctime(&now);

	cout << "本地日期和时间：" << dt << endl;

	// 把 now 转换为 tm 结构
	tm *gmtm = gmtime(&now);
	dt = asctime(gmtm);
	cout << "UTC 日期和时间：" << dt << endl;
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
	Books book1 = { "Java基础","cindy",17713 };
	book.id = 17712;
	strcpy(book.title, "C++编程思想");
	strcpy(book.author, "vinson");
	cout << "book id:" << book1.id << endl;
	cout << "book title:" << book1.title << endl;
	cout << "book author:" << book1.author << endl;
}


void getObject() {
	BlackBox box(0, 1.0, (char*) "处理中...");
	cout << box.getDesc() << endl;
}


void inherit() {
	BlackBox box(0, 1.0, (char*) "继承...");
	cout << box.getDesc() << endl;
}


void overload() {
	BlackBox box(0, 1.0, (char*) "运算符重载...");
	BlackBox box2(0, 4.0, (char*) "运算符重载...");
	box + box2;
	cout << box.getPrice() << endl;
}

/**
getLine()是C++扩充函数
**/
void fs() {
	//写文件
	ofstream f1("test.txt");//打开文件用于写，若文件不存在就创建它
	if (!f1) {
		cerr << "打开文件失败" << endl;
		return;//打开文件失败则结束运行
	}
	char * name, *address;
	name = new char[24];
	address = new char[64];
	cin >> name >> address;
	f1 << setw(20) << name << endl;//使用插入运算符写文件内容
	f1 << setw(20) << address << endl;
	f1.close();
	//打开文件
	ifstream infile("test.txt");
	string s;
	while (getline(infile, s))
	{
		cout << s << endl;
	}
	infile.close();
	//delete[] name;
	//WinExec("notepad.exe test.txt", SW_SHOW);//调用记事本打开文件
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