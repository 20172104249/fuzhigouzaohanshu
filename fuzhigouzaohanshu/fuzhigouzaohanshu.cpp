// fuzhigouzaohanshu.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CComplex {
public:
	double real, image;
	CComplex()
	{
		real = 10;
		image = 20;
		cout << "默认构造函数    " << real << "+" << image << "i" << endl;
	}
	void setvalue(double r, double i)
	{
		real = r;
		image = i;
	}
	CComplex(const CComplex&c)
	{
		real = c.real;
		image = c.image;
		cout << "复制构造函数    " << real << "+" << image << "i" << endl;
	}
	void display()
	{
		cout << real << "+" << image << "i" << endl;
	}

};
CComplex fun(CComplex ot)
{
	ot.display();
	return ot;
}

int main()
{
	CComplex oc1;
	CComplex oc3;
	oc1.display();
	oc1.setvalue(100, 200);
	oc3.display;
	CComplex oc2(oc1);
	oc1.display();
	oc2.display();
	oc3 = fun(oc2);
	oc3.display();
	return 0;
}