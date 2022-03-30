# 机房预约系统
## 1. 机房预约系统需求
### 1.1系统简介
* 学校有几个规格不同的机房，由于使用时经常出现“撞车”现象，现开发一套机房预约系统，解决这一个问题
### 1.2 身份简介
分别由三种身份使用该程序
* 学生代表：申请使用代表
* 教师：审核学生的预约申请
* 管理员：给学生、教师创建账号
### 1.3 机房简介
机房总共有3间
* 1号房间 --最大容量20人
* 2号房间 --最多容量50人
* 3号机房 --最多容量100人
### 1.4 申请简介
* 申请的订单每周由管理员负责清空
* 学生可以预约未来一周内的机房使用，预约的日期为周一至周五，预约时需要选择预约阶段（上午、下午）
* 教师来审核预约，依据实际情况审核预约通过或者不通过
### 1.5 系统具体要求
* 首先进入登陆界面，可选登陆身份有：
   学生
   老师
   管理员
   退出
* 每个身份都需要进入验证后，进入子菜单
   学生需要输入：学号，姓名，登陆密码
   老师需要输入：学号，姓名，登陆密码
   管理员需要输入：学号，姓名，登陆密码
* 学生具体功能
   申请     --预约机房
   查看自身的预约 --查看自己的预约状态
   查看所有预约  --查看全部预约信息以及预约状态
   取消预约  --取消自身的预约，预约成功或审核中预约均可取消
* 教师具体功能
    查看所有预约 --查看全部预约信息以及预约状态
    审核预约  --对学生的预约进行审核
    注销功能  --退出登陆
* 管理员具体功能
    添加账号  --添加学生或教师的账号，检测学生编号或教师工号是否重复
    查看账号  --可以选择查看学生或教师的全部信息
    查看机房  --查看所有机房的信息
    清空预约  --清空所有预约记录
    注销登陆  --退出登陆
    
## 2. 创建主菜单
* 设计主菜单，与用户进行交互
###  2.1 菜单实现
* 在主函数main中添加菜单提示，代码如下：
```C++
#include<iostream>
using namespace std;
int main()
{
    cout<<"====欢迎来到大学计算机房预约系统===="<<endl;
    cout<<endl<<"请输入您的身份"<<endl;
    cout<<"\t\t---------------------------------------\n";
    cout<<"\t\t|                                                        |\n";
    cout<<"\t\t|               1. 学生代表                       |\n";
    cout<<"\t\t|                                                        |\n";
    cout<<"\t\t|               2. 老       师                       |\n";
    cout<<"\t\t|                                                        |\n";
    cout<<"\t\t|               3. 管  理  员                      |\n";
    cout<<"\t\t|                                                        |\n";
    cout<<"\t\t|               0. 退       出                       |\n";
    cout<<"\t\t|                                                        |\n";
    cout<<"\t\t---------------------------------------|\n";
    cout<<"输入您的选择：";
}
```
### 2.2 搭建接口
```C++
int main()
{
   int slect=0;
   while(true)
   {
       cout<<"====欢迎来到大学计算机房预约系统===="<<endl;
       cout<<endl<<"请输入您的身份"<<endl;
       cout<<"\t\t---------------------------------------\n";
       cout<<"\t\t|                                                        |\n";
        cout<<"\t\t|               1. 学生代表                       |\n";
        cout<<"\t\t|                                                        |\n";
       cout<<"\t\t|               2. 老       师                       |\n";
      cout<<"\t\t|                                                        |\n";
       cout<<"\t\t|               3. 管  理  员                      |\n";
      cout<<"\t\t|                                                        |\n";
      cout<<"\t\t|               0. 退       出                       |\n";
      cout<<"\t\t|                                                        |\n";
      cout<<"\t\t---------------------------------------|\n";
      cout<<"输入您的选择：";
      switch (slect)
      {
         case 1:        //学生身份
            break;
         case 2:        //老师身份
            break;
         case 3:        //管理员身份
           break;
         case 0:        //退出系统
            break;
         default:
         cout<<"输入有误，请重新选择！"<<endl;
         system("pause");
         system("cls");
         break;
      }
    system("pause");
    return 0;
   }
}
```
## 3 退出功能实现
### 3.1 退出功能实现
在main()函数分支0选项中，添加退出程序的代码：
```C++
cout<<"输入有误，请重新选择！"<<endl;
system("pause");
return 0;
```
## 4 创建身份类
### 4.1 身分的基类
* 在整个系统中，有三种身份，分别为：学生代表、老师以及管理员
* 三种身份有其特性，因此我们可以将三种身份抽象出一个基类identity
* 在头文件下创建identity.h文件

identity.h中添加如下代码：
```C++
//身份抽象类
class Identity
{
public:
    //操作简单
    virtual void operMenu()=0;
    string m_Name;     //用户名
    string m_Pwd;       //密码
    
};
```
### 4.2 学生类
#### 4.2.1 功能分析
* 学生类主要功能时可以通过
* 学生类中主要功能有：
   显示学生操作的菜单界面
   申请预约
   查看自身预约
   查看所有预约
   取消预约
#### 4.2.2 类的创建
* 在头文件以及源文件下创建student.h和student.cpp文件
student.h中添加如下代码：
```C++
//学生类
class Student : public Identity
{
public:
    Student();  //默认构造
    Student(int id, string name, string pwd);  //有参构造(学号、姓名、密码)
    virtual void operMenu();  //菜单界面
    void applyOrder();           //申请预约
    void showMyOrder();      //查看我的预约
    void showAllOrder();       //查看所有预约
    void cancelOrder();         //取消预约
    int m_Id;                         //学生学号
};
```
student.cpp文件中添加如下代码：
```C++
#include<student.h>

Student:: Student() //默认构造
{

}
Student:: Student(int id, string name, string pwd) //有参构造(学号、姓名、密码)
{

} 
void Student:: operMenu()  //菜单界面
{

}
 void Student:: applyOrder()           //申请预约
{

}
void Student:: showMyOrder()     //查看我的预约
{

}
void Student::showAllOrder()      //查看所有预约
{

}
void Student::cancelOrder()         //取消预约
{

}
```
### 4.3 老师类
####4.3.1 功能分析
* 教师类主要功能是查看学生的预约，并进行审核
* 教师类中主要功能有：
      示教师操作的界面
      查看所有预约
      审核预约
#### 类的创建
* 在头文件以及源文件下创建teacher.h和teacher.cpp文件

teacher.h中添加如下代码：
```C++
#include<teacher.h>
Teacher::Teacher()  //默认构造
{

}    
Teacher::Teacher(int id, string name, string pwd) //有参构造(编号、姓名、密码)
{

}
void Teacher:: operMenu()  //菜单界面
{

}
void Teacher::showAllOrder()       //查看所有预约
{

}
void Teacher::cancelOrder()      //取消预约
{
    
}
```
### 4.3 管理员类
#### 4.3.1 功能分析
* 管理员类主要功能是学号和老师账号进行管理，查看机房信息以及清空预约记录
* 管理员类中主要功能有：
显示管理操作的菜单界面
添加账号
查看账号
查看机房信息
清空预约记录
#### 4.3.2 类的创建
* 在头文件以及源文件下创建manager.h和manager.cpp文件
manager.h中添加如下代码：
```C++
#pragma once
#include<iostream>
#include<identity.h>
using namespace std;
class Manager :public Identity
{
public:
    //默认构造
    Manager();
    //有参构造 管理员姓名  密码
    Manager(string name, string pwd);
    //选择菜单
    virtual void operMenu();
    //添加账号
    void addPerson();
    //查看账号
    void showPerson();
    //查看机房信息
    void showComputer();
    //清空预约记录
    void cleanFile();
};
```
* 在源文件manager.cpp中添加如下代码：
```C++
#include<manager.h>
//默认构造
Manager::Manager()
{

}
//有参构造 管理员姓名  密码
Manager::Manager(string name, string pwd)
{

}
//选择菜单
void Manager::operMenu()
{

}
//添加账号
void Manager::addPerson()
{

}
//查看账号
void Manager::showPerson()
{

}
//查看机房信息
void Manager::showComputer()
{

}
//清空预约记录
void Manager::cleanFile()
{
    
}
```
## 5 登陆模块
### 5.1 全局文件添加
功能描述：
* 不同的身份可能会用到不同的文件操作，我们可以将所有的文件名义到一个全局的文件中
* 在头文件中添加globalFile.h文件
* 并添加如下代码：
```C++
#pragma once
//管理员文件
#define ADMIN_FILE    "admin.txt"
//学生文件
#define STUDENT_FILE "student.txt"
//教师文件
#define TEACHER_FILE "teacher.txt"
//机房信息文件
#define COMOPUTER_FILE "computerrRoom.txt"
//订单文件
#define OREDER_FILE  "order.txt"
```
### 5.2 登陆函数封装
功能描述：
* 根据用户的选择，进入不同的身份登陆

在预约系统的.cpp文件中添加全局函数**void loginIn(string filename, int type)**
参数：
* fileName --操作的文件名
* type ---登陆的身份(1. 代表学生，2代表老师，3代表管理员)
Loginin中添加如下代码
```C++
//登陆功能
void LogiIn(string filename, int type)
{
    Identity *person=NULL;
    ifstream ifs;
    ifs.open(filename, ios::in);
    //文件不存在情况
    if(!ifs.is_open())
    {
        cout<<"文件不存在"<<endl;
        ifs.close();
        return;
    }
    int id=0;
    string name;
    string pwd;
    if(type==1)//学生登陆
    {
        cout<<"请输入你的学号"<<endl;
        cin>>id;
    }
    else if(type==2) //教师登陆
    {
        //教师登陆验证
    }
    else if(type==3)
    {
        //管理员登陆验证
    }
    cout<<"验证登陆失败！"<<endl;
    system("pause");
    system("cls");
    return;
}
```
### 6.3 学生登陆
在student.txt文件中添加两条学生信息，用于测试
添加信息：
>**1  张三  123**
>**2 李四  456**

在login函数的学生分支中加入如下代码，验证学生身份
```C++
  int fId;
        string fName;
        string fPwd;
        while(ifs>>fId&&ifs>>fName&&ifs>>fPwd)
        {
            if (id==fId && name==fName&& pwd==fPwd)
            {
                cout<<"学生验证登陆成功！"<<endl;
                system("pause");
                system("cls");
                person=new Student(id, name, pwd);

                return;
            }
        }
```
验证成功后，在login函数中添加如下代码
```C++
 case 1:      //学生登陆验证
        cout<<"请输入你的学号："<<endl;
        cin>>id;
        cout<<"请输入你的姓名："<<endl;
        cin>>name;
        cout<<"请输入你的密码："<<endl;
        cin>>pwd;
        while(ifs>>fId&&ifs>>fName&&ifs>>fPwd)
        {
            if (fId==id &&fName==name&& fPwd==pwd)
            {
                cout<<"学生验证登陆成功！"<<endl;
                system("pause");
                system("cls");
                person=new Student(id, name, pwd);

                return;
            }
            else
            {
                cout<<"学生验证登陆失败！"<<endl;
                return;
            }
        }
        break;
```
### 6.4 教师登陆
login函数中添加如下代码
```C++
  cout<<"请输入你的职工编号："<<endl;
        cin>>id;
        cout<<"请输入你的姓名："<<endl;
        cin>>name;
        cout<<"请输入你的密码："<<endl;
        cin>>pwd;
        while(ifs>>fId&&ifs>>fName&&ifs>>fPwd)
        {
            if (fId==id &&fName==name&& fPwd==pwd)
            {
                cout<<"教师登陆验证成功！"<<endl;
                system("pause");
                system("cls");
                person=new Teacher(id, name, pwd);

                return;
            }
            else
            {
                cout<<"教师登陆验证失败！"<<endl;
                return;
            }
        }
```
### 6.5 管理员登陆
login函数中添加如下代码
```C++
 cout<<"请输入你的姓名："<<endl;
        cin>>name;
        cout<<"请输入你的密码："<<endl;
        cin>>pwd;
        while(ifs>>fName&&ifs>>fPwd)
        {
            if (fName==name&& fPwd==pwd)
            {
                cout<<"管理员登陆验证成功！"<<endl;
                system("pause");
                system("cls");
                person=new Manager(name, pwd);

                return;
            }
            else
            {
                cout<<"管理员登陆验证失败！"<<endl;
                return;
            }
        }
```
## 7 管理员模块
### 7.1管理员登陆和注销
#### 7.1.1 构造函数
* 在Manager类的构造函数中，初始化管理员信息，代码如下：
```C++
//有参构造 管理员姓名  密码
Manager::Manager(string name, string pwd)
{
    this->m_Name=name;
    this->m_Pwd=pwd;
}
```
####7.1.2 管理员子菜单
* 在main.cpp中，用户登陆的是管理员，添加管理员菜单接口
* 将不同的分支提供出来
  添加账号
  查看账号
  清空机房
  清空预约
  注销登陆
* 实现注销功能
添加全局函数**void managerMenu(Identity *&manager)**，代码如下：
```C++
//进入管理员子菜单界面
void managerMenu(Identity *&manager)
{
    while (true)
    {
        //调用管理员子菜单
        manager->operMenu();
        //将父亲指针 转为子类指针，调用子类里其他接口
        Manager *man=(Manager*)manager;
        int select=0;
        cin>>select;
        switch (select)
        {
        case 1:     //添加账号
            cout<<"添加账号："<<endl;
            man->addPerson();
            break;
         case 2:     //查看账号
             cout<<"查看账号："<<endl;
             man->showPerson();
             break;
         case 3:     //查看机房
             cout<<"查看机房："<<endl;
             man->showComputer();
             break;
         case 4:     //清空预约
             cout<<"清空预约："<<endl;
             man->cleanFile();
             break;
        default:
            delete manager;  //销毁堆区对象
            cout<<"注销成功"<<endl;
            system("pause");
            break;
        }
    }
}
```
####7.1.3 菜单功能实现
* 在实现成员函数void Manager::operMenu()代码如下：
```C++
//选择菜单
void Manager::operMenu()
{
    cout<<"欢迎管理员："<<this->m_Name<<"登陆！"<<endl;
    cout<<"\t\t|---------------------------------------|\n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               1. 学生代表                        | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               2. 老       师                        | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               3. 管  理  员                       | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               0. 退       出                        | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|---------------------------------------| \n";
    cout<<"输入您的选择：";
}
```
### 7.2 添加账号
功能描述
* 给学生或教师添加新的账号

功能要求
* 添加时学生学号不能重复、教师职工号不能重复
#### 7.2.1 添加功能实现
在Manager类中的**addPerson成员函数中，实现添加新账号功能，代码如下
```C++
//添加账号
void Manager::addPerson()
{
    cout<<"请输入添加账号的类型：1-学生，2-教师"<<endl;
    string filename;
    string tip;
    ofstream ofs;
    int select=0;
    switch (select)
    {
    case 1:
        filename=STUDENT_FILE;
        tip="请输入序号：";
        break;
    case 2:
        filename=TEACHER_FILE;
        tip="请输入职工编号：";
    default:
        break;
    }
    ofs.open(filename, ios::out|ios::app);
    int id;
    string name;
    string pwd;
    cout<<tip<<endl;
    cin>>id;
    cout<<"请输入姓名："<<endl;
    cin>>name;
    cout<<"请输入密码："<<endl;
    cin>>pwd;
    ofs<<id<<" "<<name<<" "<<pwd<<" "<<endl;
    cout<<"添加成功！"<<endl;
    system("pause");
    system("cls");
    ofs.close();
}
```
#### 7.2.2 去重操作
添加账号时，如果时重复的学生编号，或是重复的教师职工编号，提示有误
读取信息
* 要去除重复的账号，首先要先将学生和教师的账号信息获取到程序中，便于检测
* 在manager.h中，添加两个容器，用于存放学生和教师的信息
* 添加一个新的成员函数void initVector()初始化容器
```C++
//初始化容器
void initVector();
//学生容器
vector<Student>vStu;
//教师容器
vector<Teacher>vTea;
```
初始化容器
```C++
//初始化学生
void Manager::initVector()
{
    //读取学生文件中信息
    ifstream ifs;
    ifs.open(STUDENT_FILE, ios::in);
    if (!ifs.is_open())
    {
        cout<<"文件读取失败"<<endl;
        return;
    }
    vStu.clear();
    vTea.clear();
    Student s;
    while (ifs>>s.m_Id&&ifs>>s.m_Name&&ifs>>s.m_Pwd)
    {
        vStu.push_back(s);
    }
    cout<<"当前学生数量为："<<vStu.size()<<endl;
    ifs.close();       //学生初始化
    //读取老师文件信息
    ifs.open(TEACHER_FILE, ios::in);
    Teacher t;
    while (ifs>>t.m_EmpId&&ifs>>t.m_Name&&ifs>>t.m_Pwd)
    {
        vTea.push_back(t);
    }
    cout<<"当前学生数量为："<<vTea.size()<<endl;
    ifs.close();       //学生初始化    
}
```
在manager.cpp中的有参构造函数中，添加
>this->initVector();

