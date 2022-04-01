#include<orderFile.h>
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
        ofs<<"status:"<<this->m_orderData[i]["status"]<<" "<<endl;
    }
    ofs.close();
 }