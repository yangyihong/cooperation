#include<iostream>
using namespace std;

//大家要注意模块化开放，互相之间要协作。 

//判断字符串长度是否大于5的方法，如果大于5返回true,否则返回false

bool isGreaterFive(string a) {
	//杨已鸿编写
	
}

//输出函数，如果字符串的长度大于5，输出最后一个字符，如果字符串的长度小于等于5，输出第一个字符 
void outPut(string a) {
	//王艳丽编写 
	if(isGreaterFive(a))
	{
		cout << a[a.length() - 1];
		cout << endl;
	}
	else cout << a[0];
}
int main() {
	string a;


	isGreaterFive("123456");
	isGreaterFive("0123");

	outPut("123456");
	outPut("0123");

	return 0;
}
