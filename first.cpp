#include<iostream>
using namespace std;

//���Ҫע��ģ�黯���ţ�����֮��ҪЭ���� 

//�ж��ַ��������Ƿ����5�ķ������������5����true,���򷵻�false

bool isGreaterFive(string a) {
	//���Ѻ��д
	
}

//�������������ַ����ĳ��ȴ���5��������һ���ַ�������ַ����ĳ���С�ڵ���5�������һ���ַ� 
void outPut(string a) {
	//��������д 
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
