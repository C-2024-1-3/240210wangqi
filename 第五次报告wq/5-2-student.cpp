//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include "student.h"            //��Ҫ©д���У��������ͨ����
#include<cstring>
// �����ⶨ��display�ຯ��
void Student::display()
{
    std::cout << "num��" << num << std::endl;
    std::cout << "name��" << name << std::endl;
    std::cout << "sex��" << sex << std::endl;
}

// �����ⶨ��set_value���������ڸ����ݳ�Ա����ֵ
void Student::set_value(int n, const char* na, char s)
{
    num = n;
    strcpy_s(name, sizeof(name), na);
    sex = s;
}