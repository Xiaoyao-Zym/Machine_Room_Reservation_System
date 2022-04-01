#include<orderFile.h>
//���캯��
OrderFile::OrderFile()
{
    ifstream ifs;
    ifs.open(OREDER_FILE, ios::in);
    string data;  //����
    string interval; //ʱ���
    string stuId;     //ѧ�����
    string  stuName;  //ѧ������
    string roomId;    //�������
    string status;     //ԤԼ״̬
    this->m_Size=0;   //ԤԼ����
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
        //��ȡ����
        int pos=data.find(":");
        if(pos !=-1)
        {
            key=data.substr(0, pos);
            value=data.substr(pos+1, data.size()-pos-1);    //size=10 pos
            m.insert(make_pair(key, value));
            // cout<<"key= "<<key<<endl;
            // cout<<"value="<<value<<endl;  //���Դ���
        }
        //��ȡʱ���
        pos=interval.find(":");
        if(pos!=-1)
        {
            key=interval.substr(0, pos);   //4
            value=interval.substr(pos+1, interval.size()-pos-1);    //size=9 pos
            m.insert(make_pair(key, value));
        }
        //��ȡѧ�����
        pos=stuId.find(":");
        if(pos!=-1)
        {
            key=stuId.substr(0, pos);
            value=stuId.substr(pos+1, stuId.size()-pos-1);    //size=10 pos
            m.insert(make_pair(key, value));
        }
        //��ȡѧ�����
        pos=stuName.find(":");
        if(pos!=-1)
        {
            key=stuName.substr(0,pos);
            value=stuName.substr(pos+1, stuName.size()-pos-1);    //size=10 pos
            m.insert(make_pair(key, value));
        }
        //��ȡ�������
        pos=roomId.find(":");
        if(pos!=-1)
        {
            key=roomId.substr(0,pos);
            value=roomId.substr(pos+1, roomId.size()-pos-1);    //size=10 pos
            m.insert(make_pair(key, value));
        }
        //��ȡԤԼ״̬
        pos=status.find(":");
        if(pos!=-1)
        {
            key=status.substr(0,pos);
            value=status.substr(pos+1, status.size()-pos-1);    //size=10 pos
            m.insert(make_pair(key, value));
        }
        //��Сmap�������뵽��map����
        this->m_orderData.insert(make_pair(this->m_Size, m));
        this->m_Size++;
    }
    ifs.close();
    //�������map����
    for(map<int, map<string, string>>::iterator it=m_orderData.begin(); it!=m_orderData.end(); it++)
    {
        cout<<"����Ϊ��"<<it->first<<"  value="<<endl;
        for (map<string, string>::iterator mit=(*it).second.begin(); mit!=it->second.end(); mit++)
        {
            cout<<"key="<<mit->first<<" value="<<mit->second<<" ";
        }
        cout<<endl;
    }
}
//����ԤԼ��¼
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