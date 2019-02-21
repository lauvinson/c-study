#pragma once
using namespace std;
#include <exception>
struct MyException : public exception {
	const char *what() const throw() {
		return "C-Leanr Exception!";
	}
};