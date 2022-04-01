#include<manager.h>
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
}
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
    cout<<"\t\t|               4. 清空预约                       | \n";
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
    cin>>select;
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
    //利用追加的方式写文件
    ofs.open(filename, ios::out|ios::app);
    int id;
    string name;
    string pwd;
    cout<<tip<<endl;
    while (true)
    {
        cin>>id;
        bool ret=chectRepeat(id, select);
        if(ret)//有重复
        {
            cout<<errorTip<<endl;
        }
        else
        {
            break;
        }
    }
    cout<<"请输入姓名："<<endl;
    cin>>name;
    cout<<"请输入密码："<<endl;
    cin>>pwd;
    ofs<<id<<" "<<name<<" "<<pwd<<" "<<endl;
    cout<<"添加成功！"<<endl;
    system("pause");
    system("cls");
    ofs.close();
    this->initVector();
}
void printStudnet(Student &s)
{
    cout<<"学号："<<s.m_Id<<"姓名："<<s.m_Name<<"密码："<<s.m_Pwd<<endl;
}
void printTeacher(Teacher &t)
{
     cout<<"职工号："<<t.m_EmpId<<"姓名："<<t.m_Name<<"密码："<<t.m_Pwd<<endl;
}
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
void printComputer(ComputerRoom &s)
{
     cout<<"机房编号："<<s.m_ComId<<"   机房最大容量： "<<s.m_MaxNum<<endl;
}
//查看机房信息
void Manager::showComputer()
{
    cout<<"机房信息如下："<<endl;
    for_each(vCom.begin(), vCom.end(), printComputer);
    system("pause");
    system("cls");    
}
//清空预约记录
void Manager::cleanFile()
{
   ofstream ofs(OREDER_FILE, ios::trunc);
   ofs.close();
   cout<<"清空成功！"<<endl;
   system("pause");
   system("cls");
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
    Student s;
    while (ifs>>s.m_Id&&ifs>>s.m_Name&&ifs>>s.m_Pwd)
    {
        vStu.push_back(s);
    }
    cout<<"当前学生数量为："<<vStu.size()<<endl;
    ifs.close();      
    //读取老师文件信息
    ifs.open(TEACHER_FILE, ios::in);
    vTea.clear();
    Teacher t;
    while (ifs>>t.m_EmpId&&ifs>>t.m_Name&&ifs>>t.m_Pwd)
    {
        vTea.push_back(t);
    }
    cout<<"当前教师数量为："<<vTea.size()<<endl;
    ifs.close(); 
    //获取机房信息
    ifs.open(COMOPUTER_FILE, ios::in);
    ComputerRoom c;
    vCom.clear();
    while (ifs>>c.m_ComId&&ifs>>c.m_MaxNum)
    {
        vCom.push_back(c);
    }
    ifs.close();
    cout<<"当前机房数量为："<<vCom.size()<<endl;     
}
