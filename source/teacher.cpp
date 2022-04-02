#include<teacher.h>
#include<vector>
#include<orderFile.h>
Teacher::Teacher()  //默认构造
{

}    
Teacher::Teacher(int empId, string name, string pwd) //有参构造(编号、姓名、密码)
{
    this->m_EmpId=empId;
    this->m_Name=name;
    this->m_Pwd=pwd;
}
void Teacher:: openMenu()  //菜单界面
{
    cout<<"欢迎管理员："<<this->m_Name<<"登陆！"<<endl;
    cout<<"\t\t|---------------------------------------|\n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               1. 查看所有预约                | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               2. 审核预约                       | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               0. 注销登录                      | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|---------------------------------------| \n";
    cout<<"输入您的选择：";
}
void Teacher::showAllOrder()       //查看所有预约
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
        if(atoi(of.m_orderData[i]["stuId"].c_str())==this->m_EmpId)
        {
            cout<<"预约日期：周"<<of.m_orderData[i]["data"];
            cout<<"时段："<<(of.m_orderData[i]["interval"]=="1"?"上午":"上午");
            cout<<" 学号："<<of.m_orderData[i]["stuId"];
            cout<<" 姓名："<<of.m_orderData[i]["stuName"];
            cout<<"机房："<<of.m_orderData[i]["roomId"];
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
            cout<<status<<endl;
        }
    }
    system("pause");
    system("cls");
}
void Teacher::validOrder()      //取消预约
{
    OrderFile of;
    if(of.m_Size==0)
    {
        cout<<"无预约记录"<<endl;
        system("pause");
        system("cls");
        return;
    }
    cout<<"待审核的预约记录如下："<<endl;
    vector<int>v;
    int index=0;
    for (int i =1; i <of.m_Size; i++)
    {
        if (of.m_orderData[i]["status"]=="1")
        {
            v.push_back(i);
            cout<<++index<<"、";
            cout<<"预约日期：周"<<of.m_orderData[i]["date"];
            cout<<"时段："<<(of.m_orderData[i]["interval"]=="1" ? "上午": "下午");
            cout<<"机房："<<of.m_orderData[i]["roomId"];
            string status="状态：";    //取消的预约  1审核中  2已预约   -1预约失败
            if (of.m_orderData[i]["status"]=="1")
            {
                status="审核中";
            }
            cout<<status<<endl;
        }
    }
    cout<<"请输入审核的预约记录，0代表返回"<<endl;
    int select=0;
    int ret=0;
    while (true)
    {
        cin>>select;
        if(select>=0&&select<=v.size())
        {
            if (select==0)
            {
                break;
            }
            else
            {
                cout<<"请输入审核结果"<<endl;
                cout<<"1、通过"<<endl;
                cout<<"2、不通过"<<endl;
                cin>>ret;
                if(ret==1)
                {
                    of.m_orderData[v[select-1]]["status"]="2";
                }
                else
                {
                    of.m_orderData[v[select-1]]["status"]="-1";
                }
                of.updataOrder();
                cout<<"审核完毕！"<<endl;
            }
        }
        cout<<"输入有误，请重新输入"<<endl;
    }
    system("pause");
    system("cls");
}
