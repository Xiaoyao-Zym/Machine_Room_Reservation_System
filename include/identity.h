#pragma once
#include<iostream>
#include<string>
using namespace std;
//身份抽象类
class Identity
{
public:
    virtual void openMenu()=0;   //操作简单  纯虚函数
    string m_Name;     //用户名
    string m_Pwd;       //密码
};