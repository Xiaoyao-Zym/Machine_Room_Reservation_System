#include<manager.h>
//默认构造
Manager::Manager()
{

}
//有参构造 管理员姓名  密码
Manager::Manager(string name, string pwd)
{
    this->m_Name=name;
    this->m_Pwd=pwd;
    //初始化容器，获取所有文件学生、老师信息
    this->initVector();
}
//选择菜单
void Manager::openMenu()
{
    cout<<"欢迎管理员："<<this->m_Name<<"登陆！"<<endl;
    cout<<"\t\t|---------------------------------------|\n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               1. 添加账号                        | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               2. 查看账号                       | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               3. 机房信息                       | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               0. 清空记录                       | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|---------------------------------------| \n";
    cout<<"输入您的选择：";
}
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
//初始化学生、教师
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
