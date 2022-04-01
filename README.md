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
### 7.1 管理员登陆和注销
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
>**this->initVector()**;
去重函数封装
在manager.h文件中添加成员函数bool checkRepeat(int id, int type);
//检测重复 参数：(传入id，传入类型)，返回值：(true代表有重复，false代表没有重复)
>**bool checkRepeat(int id, int type);**
```C++
bool Manager::chectRepeat(int id, int type)
{
    if (type==1)
    {
        for(vector<Student>::iterator it=vStu.begin(); it!=vStu.end(); it++)
        {
            if(id==it->m_Id)
            {
                return true;
            }
        }
    }
    else
    {
        for(vector<Teacher>::iterator it=vTea.begin(); it!=vTea.end(); it++)
        {
            if(id==it->m_EmpId)
            {
                return true;
            }
        }
    }
    return false;
```
添加去重操作
在添加学生编号或者教师职工号时，检测是否有重复，代码如下：
```C++
    string errorTip;   //重复错误提示
    switch (select)
    {
    case 1:
        filename=STUDENT_FILE;
        tip="请输入学号：";
        errorTip="学号重复，请重新输入";
        break;
    case 2:
        filename=TEACHER_FILE;
        tip="请输入职工编号：";
        errorTip="职工编号重复，请重新输入：";
    default:
        break;
    }
```
bugj解决
描述：
* 虽然可以检测重复的账号，但是刚添加的账号由于没有更新到容器中，因此不会被检测
* 导致刚加入的账号的学生号或者职工编号，再次添加依然可以重复

解决方案
* 在每次添加新账号时，重新初始化容器

在每次添加完毕后，加入代码：
>**this->initVetor();   //初始化容器**
### 7.3 显示功能
显示功能实现，在Manager的showPerson成员函数，实现显示账号功能
```C++
//查看账号
void Manager::showPerson()
{
    cout<<"请选择查看内容：1-查看学生，2-查看老师"<<endl;
    int select=0;
    cin>>select;
    switch (select)
    {
    case 1:
        cout<<"所有学生信息如下："<<endl;
        for_each(vStu.begin(), vStu.end(), printStudnet);
        break;
    case 2:
        cout<<"所有教师信息如下："<<endl;
        for_each(vTea.begin(), vTea.end(), printTeacher);
        break;
    default:
        break;
    }
    system("pause");
    system("cls");
}
```
### 7.4 查看机房
#### 7.4.1 添加机房信息
案例需求中，机房一共有三个，其中1号机房容量20台机器，2号50台，3号100台
我们可以将信息录入到computerRoom.txt
#### 7.4.2 机房类创建信息
在头文件，创建computerRoom.h
并添加如下代码：
```C++
#pragma once
#include<iostream>
using namespace std;
//机房类
class ComputerRoom
{
public:
    int m_ComId;   //机房id号
    int m_MaxNum;   //机房最大容量
};
```
#### 7.4.3 初始化机房信息
在manager.h的初始化容器函数中添加如下代码
```C++
   //获取机房信息
    ifstream ifs;
    ifs.open(COMOPUTER_FILE, ios::in);
    ComputerRoom c;
    while (ifs>>c.m_ComId&&ifs>>c.m_MaxNum)
    {
        vCom.push_back(c);
    }
    cout<<"当前机房数量为："<<vCom.size()<<endl;
    ifs.close();
```
#### 7.4.4 显示机房信息
在Manager类的showComputer成员函数中添加如下代码
```C++
//添加自定义函数
void printComputer(ComputerRoom &s)
{
     cout<<"机房编号："<<s.m_ComId<<"   机房最大容量： "<<s.m_MaxNum<<endl;
}
```
```C++
//查看机房信息
void Manager::showComputer()
{
    cout<<"机房信息如下："<<endl;
    for_each(vCom.begin(), vCom.end(), printComputer);
    system("pause");
    system("cls");    
}
```
### 7.5 清空预约
功能描述：
清空生成order.txt文件
#### 7.5.1 清空功能实现
在Manager的clearFile成员函数中添加如下代码：
```C++
//清空预约记录
void Manager::cleanFile()
{
   ofstream ofs(OREDER_FILE, ios::trunc);
   ofs.close();
   cout<<"清空成功！"<<endl;
   system("pause");
   system("cls");
}
```
##8 学生模块
### 8.1 学生登陆和注销
#### 8.1.1构造函数
* 在Student类的构造函数中，初始化学生信息，代码如下：
Student:: Student(int id, string name, string pwd) //有参构造(学号、姓名、密码)
{
    //初始化属性
    this->m_Id=id;
    this->m_Name=name;
    this->m_Pwd=pwd;
} 
#### 8.1.2 管理员子菜单
* 在机房预约系统.cpp中，当用户登录的时学生，添加学生菜单接口
* 将不同的分支提供出来
1.申请预约
2.查看我的预约
3.查看所有预约
4.取消预约
5.注销登录
* 实现注销功能
添加全局函数**void studentMenu(Identity *&manager)代码如下：
```C++
//学生菜单
void  studentMenu(Identity *&student)
{
    while (true)
    {
        //学生菜单
        student->openMenu();
        Student* stu=(Student*)student;
        int select=0;
        cin>>select;
        switch (select)
        {
        case 1:     //申请预约
            stu->applyOrder();
            break;
         case 2:     //查看自身预约
             stu->showMyOrder();
             break;
         case 3:     //查看所有预约
             stu->showAllOrder();
             break;
         case 4:     //清空预约
             stu->cancelOrder();
             break;
        default:
            delete student;
            cout<<"注销成功"<<endl;
            system("pause");
            system("cls");
            return;
        }
    }
}
```
####8.1.3菜单功能实现
* 在实现成员函数void Student::operMenu()代码如下：
```C++
void Student:: openMenu()  //菜单界面
{
    cout<<"欢迎学生代表："<<this->m_Name<<"登录！"<<endl;
    cout<<"\t\t|---------------------------------------|\n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               1. 申请预约                        | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               2. 查看预约                       | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               3. 查看所有预约                      | n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               4. 取消预约                       | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               0.注销登录                      | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|---------------------------------------| \n";
    cout<<"输入您的选择：";
}
```
####8.1.4 接口对接
* 学生成功登录后，调用学生的子菜单界面
* 在学生登录分支中，添加代码：
>//进入学生菜单
>studentMenu(person);
### 8.2 申请预约
####8.2.1 获取机房信息
* 在申请预约时，学生可以看到机房的信息，因此我们需要让学生获取机房的信息

在student.h中添加新的成员函数如下：
//机房容器
>vector < computerRoom> vCom;

在学生的有参构造函数中追加如下代码：
```C++
  //获取机房信息
    ifstream ifs;
    ifs.open(COMOPUTER_FILE, ios::in);
    ComputerRoom c;
    vCom.clear();
    while (ifs>>c.m_ComId&&ifs>>c.m_MaxNum)
    {
        vCom.push_back(c);
    }
    ifs.close();
```
至此，vCom容器中保存了所有机房的信息
####8.2.2 预约功能实现
在student.cpp实现成员函数void Student::applyOrder()
```C++
void Student:: applyOrder()           //申请预约
{
    cout<<"机房开放时间为周一至周五！"<<endl
            <<"请输入申请预约的时间"<<endl
            <<"1、周一"<<endl
            <<"1、周二"<<endl
            <<"1、周三"<<endl
            <<"1、周四"<<endl
            <<"1、周五"<<endl;
    int data=0;
    int interval=0;
    int room=0;
    while (true)
    {
        cin>>data;
        if(data>=1&&data<=5)
        {
            break;
        }
        cout<<"输入有误，请重新输入"<<endl;
    }
    cout<<"请输入申请预约的时间段："<<endl
           <<"1、上午"<<endl
           <<"2、下午"<<endl;
    while (true)
    {
        cin>>interval;
        if(interval>=1&&interval<=2)
        {
            break;
        }
        cout<<"输入有误，请重新输入"<<endl;
    }
    cout<<"请选择机房："<<endl;
    cout<<"1号机房容量："<<vCom[0].m_MaxNum<<endl;
    cout<<"2号机房容量："<<vCom[1].m_MaxNum<<endl;
    cout<<"3号机房容量："<<vCom[2].m_MaxNum<<endl;
    while (true)
    {
        cin>>room;
        if(room>=1&&room<=3)
        {
            break;
        }
        cout<<"输入有误，请重新输入"<<endl;
    }
    cout<<"预约成功！审核中"<<endl;
    ofstream ofs(OREDER_FILE, ios::app);
    ofs<<"data："<<data<<" ";
    ofs<<"interval："<<interval<<" ";
    ofs<<"stuId："<<this->m_Id<<" ";
    ofs<<"stuName："<<this->m_Name<<" ";
    ofs<<"roomId："<<room<<" ";
    ofs<<"ststus:："<<1<<endl;
    ofs.close();
    system("pause");
    system("cls");
}
```
### 8.3 显示预约
#### 8.3.1创建预约类
功能描述：显示预约记录时，需要从文件获取所有记录，用来显示，创建预约的类来管理记录以及更新，在头文件以及源文件下分别创建orderFile.h和orderfile.cpp文件
orderFile.h中添加如下代码
```C++
//构造函数
OrderFile::OrderFile()
{
    ifstream ifs;
    ifs.open(OREDER_FILE, ios::in);
    string data;  //日期
    string interval; //时间段
    string stuId;     //学生编号
    string  stuName;  //学生姓名
    string roomId;    //机房编号
    string status;     //预约状态
    this->m_Size=0;   //预约条数
    while (ifs>>data&&ifs>>interval&&ifs>>stuId&&ifs>>stuName&&ifs>>roomId&&ifs>>status)
    {
        // cout<<data<<endl
        //        <<interval<<endl
        //        <<stuId<<endl
        //        <<stuName<<endl
        //        <<roomId<<endl
        //        <<status<<endl;
        // cout<<endl;
        string key;
        string value;
        map<string, string>m;
        //截取日期
        int pos=data.find(":");
        if(pos !=-1)
        {
            key=data.substr(0, pos);
            value=data.substr(pos+1, data.size()-pos-1);    //size=10 pos
            m.insert(make_pair(key, value));
            // cout<<"key= "<<key<<endl;
            // cout<<"value="<<value<<endl;  //测试代码
        }
        //截取时间段
        pos=interval.find(":");
        if(pos!=-1)
        {
            key=interval.substr(0, pos);   //4
            value=interval.substr(pos+1, interval.size()-pos-1);    //size=9 pos
            m.insert(make_pair(key, value));
        }
        //截取学生编号
        pos=stuId.find(":");
        if(pos!=-1)
        {
            key=stuId.substr(0, pos);
            value=stuId.substr(pos+1, stuId.size()-pos-1);    //size=10 pos
            m.insert(make_pair(key, value));
        }
        //截取学生编号
        pos=stuName.find(":");
        if(pos!=-1)
        {
            key=stuName.substr(0,pos);
            value=stuName.substr(pos+1, stuName.size()-pos-1);    //size=10 pos
            m.insert(make_pair(key, value));
        }
        //截取机房编号
        pos=roomId.find(":");
        if(pos!=-1)
        {
            key=roomId.substr(0,pos);
            value=roomId.substr(pos+1, roomId.size()-pos-1);    //size=10 pos
            m.insert(make_pair(key, value));
        }
        //截取预约状态
        pos=status.find(":");
        if(pos!=-1)
        {
            key=status.substr(0,pos);
            value=status.substr(pos+1, status.size()-pos-1);    //size=10 pos
            m.insert(make_pair(key, value));
        }
        //将小map容器放入到大map容器
        this->m_orderData.insert(make_pair(this->m_Size, m));
        this->m_Size++;
    }
    ifs.close();
    //测试最大map容器
    for(map<int, map<string, string>>::iterator it=m_orderData.begin(); it!=m_orderData.end(); it++)
    {
        cout<<"条数为："<<it->first<<"  value="<<endl;
        for (map<string, string>::iterator mit=(*it).second.begin(); mit!=it->second.end(); mit++)
        {
            cout<<"key="<<mit->first<<" value="<<mit->second<<" ";
        }
        cout<<endl;
    }
}
``
更新预约记录的成员函数updataOrder代码如下
```C++
//更新预约记录
 void OrderFile::updataOrder()
 {
    if (this->m_Size==0)
    {
         return;
    }
    ofstream ofs(OREDER_FILE, ios::out|ios::trunc);
    for (int i = 0; i < m_Size; i++)
    {
        ofs<<"data:"<<this->m_orderData[i]["data"]<<" ";
        ofs<<"interval:"<<this->m_orderData[i]["interval"]<<" ";
        ofs<<"stuId:"<<this->m_orderData[i]["stuId"]<<" ";
        ofs<<"stuName:"<<this->m_orderData[i]["stuName"]<<" ";
        ofs<<"roomId:"<<this->m_orderData[i]["roomId"]<<" ";
        ofs<<"status:"<<this->m_orderData[i]["status"]<<" ";
    }
    ofs.close();
 }
 ```
 #### 8.3.2 显示自身预约
 在Student类的void Student::showMyOrder()成员函数中，添加如下代码
 ```C++
 void Student:: showMyOrder()     //查看我的预约
{
    OrderFile of;
    if(of.m_Size==0)
    {
        cout<<"无预约记录"<<endl;
        system("pause");
        system("cls");
        return;
    }
    for (int i = 0; i < of.m_Size; i++)
    {
        if(atoi(of.m_orderData[i]["stuId"].c_str())==this->m_Id)
        {
            cout<<"预约日期：周"<<of.m_orderData[i]["data"];
            cout<<"时段："<<(of.m_orderData[i]["interval"]=="1"?"上午":"上午");
            cout<<" 机房："<<of.m_orderData[i]["roomId"];
            string status=" 状态：";   //0：取消的预约  1：审核中   2：已预约   -1：预约失败
            if (of.m_orderData[i]["status"]=="1")
            {
                status+="审核中";
            }
            else if(of.m_orderData[i]["status"]=="2")
            {
                status+="预约成功";
            }
            else if(of.m_orderData[i]["status"]=="-1")
            {
                status+="审核未通过，预约失败";
            }
            else 
            {
                status+="预约已取消";
            }
        }
    }
    system("pause");
    system("cls");
}
```
####8.3.3显示所有预约
```C++
void Student::showAllOrder()      //查看所有预约
{
    OrderFile of;
    if(of.m_Size==0)
    {
        cout<<"无预约记录"<<endl;
        system("pause");
        system("cls");
        return;
    }
    for (int i = 0; i < of.m_Size; i++)
    {
        cout<<i+1<<" ";
        cout<<"预约日期：周"<<of.m_orderData[i]["data"];
        cout<<"时段："<<(of.m_orderData[i]["interval"]=="1"?"上午":"上午");
        cout<<" 机房："<<of.m_orderData[i]["roomId"];
        string status=" 状态：";   //0：取消的预约  1：审核中   2：已预约   -1：预约失败
        if (of.m_orderData[i]["status"]=="1")
        {
            status+="审核中";
        }
        else if(of.m_orderData[i]["status"]=="2")
        {
             status+="预约成功";
        }
        else if(of.m_orderData[i]["status"]=="-1")
        {
            status+="审核未通过，预约失败";
        }
        else 
        {
            status+="预约已取消";
        }
    }
    system("pause");
    system("cls");
}
```
####8.4 取消预约
在Student类的void Student::canceOrder()成员函数中，添加如下代码
```C++
void Student::cancelOrder()         //取消预约
{
    OrderFile of;
    if(of.m_Size==0)
    {
        cout<<"无预约记录"<<endl;
        system("pause");
        system("cls");
        return;
    }
    cout<<"审核中或预约成功的记录可以取消，请输入取消的记录"<<endl;
    vector<int>v;
    int index=1;
    for (int i = 0; i < of.m_Size; i++)
    {
        if (atoi(of.m_orderData[i]["stuId"].c_str())==this->m_Id)
        {
            if(of.m_orderData[i]["status"]=="1"||of.m_orderData[i]["status"]=="2")
            {
                v.push_back(i);
                cout<<index++<<"、";
                cout<<"预约日期：周"<<of.m_orderData[i]["data"];
                cout<<"时段："<<(of.m_orderData[i]["interval"]=="1"?"上午":"上午");
                cout<<" 机房："<<of.m_orderData[i]["roomId"];
                string status=" 状态：";   //0：取消的预约  1：审核中   2：已预约   -1：预约失败
                if (of.m_orderData[i]["status"]=="1")
                {
                      status+="审核中";
                 }
                else if(of.m_orderData[i]["status"]=="2")
                {
                     status+="预约成功";
                }
                cout<<status<<endl;
            }
        }
    }
    cout<<"请输入取消的记录，0代表返回"<<endl;
    int select=0;
    while (true)
    {
        cin>>select;
        if(select>=0&&select<=v.size())
        {
            break;
        }
        else
        {
            of.m_orderData[v[select-1]]["ststus"]="0";
            of.updataOrder();
            cout<<"已取消预约"<<endl;
        }
        cout<<"输入有误，请重新输入";
    }
    system("pause");
    system("cls");
}
```