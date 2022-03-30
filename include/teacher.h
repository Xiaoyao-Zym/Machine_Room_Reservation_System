#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<identity.h>
class Teacher :public Identity
{
public:
    Teacher();  //默认构造
    Teacher(int id, string name, string pwd);  //有参构造(编号、姓名、密码)
    virtual void openMenu();  //菜单界面
    void showAllOrder();       //查看所有预约
    void cancelOrder();         //取消预约
    int m_EmpId;                         //教师编号
};