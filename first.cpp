#include<iostream>
#include"string.h"
using namespace std;

//���Ҫע��ģ�黯���ţ�����֮��ҪЭ����

//�ж��ַ��������Ƿ����5�ķ������������5����true,���򷵻�false
bool isGreaterFive(string a){
    //���Ѻ��д
   int t= a.length();
   if(t>5) return true;
   else return false;

}
//�������������ַ����ĳ��ȴ���5��������һ���ַ�������ַ����ĳ���С�ڵ���5�������һ���ַ�
void outPut(String a){
    //��������д
}
int main(){
    String a;
    cin>>a;

  isGreaterFive("123456");
  isGreaterFive("0123");

    outPut("123456");
    outPut("0123");


    return 0;
}
