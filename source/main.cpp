#include<iostream>
#include<identity.h>
#include<student.h>
#include<manager.h>
#include<teacher.h>
#include<globalFile.h>
#include<fstream>
#include<string>
using namespace std;
//进入管理员子菜单界面
void managerMenu(Identity * &manager)
{
    while (true)
    {
        //调用管理员子菜单
        manager->openMenu();
        //将父类指针转为子类指针，调用子类里其他接口
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
            cout<<"注销成功"<<endl;
            system("pause");
            break;
        }
    }
}
//登陆功能
void LogiIn(string fileName, int type)
{
    Identity *person=NULL;
    ifstream ifs;
    ifs.open(fileName, ios::in);
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
    int fId=0;               //从文件中读取的 id号
    string fName;   //从文件中获取的姓名
    string fPwd;      //从文件中获取密码
    switch (type)
    {
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
                cout<<"学生登陆验证成功！"<<endl;
                system("pause");
                system("cls");
                person=new Student(id, name, pwd);

                return;
            }
            else
            {
                cout<<"学生登陆验证失败！"<<endl;
                return;
            }
        }
        break;
    case 2:     //教师登陆验证
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
        break;
    case 3:   //管理员登陆验证
        cout<<"请输入你的姓名："<<endl;
        cin>>name;
        cout<<"请输入你的密码："<<endl;
        cin>>pwd;
        while(ifs>>fName&&ifs>>fPwd)
        {
            if (name==fName&& pwd==fPwd)
            {
                cout<<"管理员登陆验证成功！"<<endl;
                system("pause");
                system("cls");
                person=new Manager(name, pwd);
                //进入管理员子菜单界面
                managerMenu(person);
                return;
            }
            else
            {
                cout<<"管理员登陆验证失败！"<<endl;
                return;
            }
        }
        break;
    default:
        break;
    }
    system("pause");
    system("cls");
}
int main(void)
{
    cout<<"====================欢迎来到大学计算机房预约系统======================="<<endl;
    cout<<endl<<"请输入您的身份"<<endl;
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
    int slect;
    cin>>slect;   //接受用户选择
    switch (slect)
    {
    case 1:        //学生身份
        LogiIn(STUDENT_FILE, 1);
        break;
    case 2:        //老师身份
        LogiIn(TEACHER_FILE, 2);
        break;
    case 3:        //管理员身份
        LogiIn(ADMIN_FILE, 3);
        break;
    case 0:        //退出系统
        cout<<"欢迎下一次使用"<<endl;
        system("pause");
        return 0;
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