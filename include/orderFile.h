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
    //构造函数
    OrderFile();
    //更新预约记录
    void updataOrder();
    //记录的容器key --记录的条数 value--具体记录的键值对信息
    map<int, map<string, string>>m_orderData;
    //预约记录条数
    int m_Size;
};