#pragma once
#include<iostream>
#include<fstream>
#include<map>
#include<algorithm>
#include<globalFile.h>
using namespace std;
class OrderFile
{
public:
    //���캯��
    OrderFile();
    //����ԤԼ��¼
    void updataOrder();
    //��¼������key --��¼������ value--�����¼�ļ�ֵ����Ϣ
    map<int, map<string, string>>m_orderData;
    //ԤԼ��¼����
    int m_Size;
};