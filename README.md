# ����ԤԼϵͳ
## 1. ����ԤԼϵͳ����
### 1.1ϵͳ���
* ѧУ�м������ͬ�Ļ���������ʹ��ʱ�������֡�ײ���������ֿ���һ�׻���ԤԼϵͳ�������һ������
### 1.2 ��ݼ��
�ֱ����������ʹ�øó���
* ѧ����������ʹ�ô���
* ��ʦ�����ѧ����ԤԼ����
* ����Ա����ѧ������ʦ�����˺�
### 1.3 �������
�����ܹ���3��
* 1�ŷ��� --�������20��
* 2�ŷ��� --�������50��
* 3�Ż��� --�������100��
### 1.4 ������
* ����Ķ���ÿ���ɹ���Ա�������
* ѧ������ԤԼδ��һ���ڵĻ���ʹ�ã�ԤԼ������Ϊ��һ�����壬ԤԼʱ��Ҫѡ��ԤԼ�׶Σ����硢���磩
* ��ʦ�����ԤԼ������ʵ��������ԤԼͨ�����߲�ͨ��
### 1.5 ϵͳ����Ҫ��
* ���Ƚ����½���棬��ѡ��½����У�
   ѧ��
   ��ʦ
   ����Ա
   �˳�
* ÿ����ݶ���Ҫ������֤�󣬽����Ӳ˵�
   ѧ����Ҫ���룺ѧ�ţ���������½����
   ��ʦ��Ҫ���룺ѧ�ţ���������½����
   ����Ա��Ҫ���룺ѧ�ţ���������½����
* ѧ�����幦��
   ����     --ԤԼ����
   �鿴�����ԤԼ --�鿴�Լ���ԤԼ״̬
   �鿴����ԤԼ  --�鿴ȫ��ԤԼ��Ϣ�Լ�ԤԼ״̬
   ȡ��ԤԼ  --ȡ�������ԤԼ��ԤԼ�ɹ��������ԤԼ����ȡ��
* ��ʦ���幦��
    �鿴����ԤԼ --�鿴ȫ��ԤԼ��Ϣ�Լ�ԤԼ״̬
    ���ԤԼ  --��ѧ����ԤԼ�������
    ע������  --�˳���½
* ����Ա���幦��
    ����˺�  --���ѧ�����ʦ���˺ţ����ѧ����Ż��ʦ�����Ƿ��ظ�
    �鿴�˺�  --����ѡ��鿴ѧ�����ʦ��ȫ����Ϣ
    �鿴����  --�鿴���л�������Ϣ
    ���ԤԼ  --�������ԤԼ��¼
    ע����½  --�˳���½
    
## 2. �������˵�
* ������˵������û����н���
###  2.1 �˵�ʵ��
* ��������main����Ӳ˵���ʾ���������£�
```C++
#include<iostream>
using namespace std;
int main()
{
    cout<<"====��ӭ������ѧ�������ԤԼϵͳ===="<<endl;
    cout<<endl<<"�������������"<<endl;
    cout<<"\t\t---------------------------------------\n";
    cout<<"\t\t|                                                        |\n";
    cout<<"\t\t|               1. ѧ������                       |\n";
    cout<<"\t\t|                                                        |\n";
    cout<<"\t\t|               2. ��       ʦ                       |\n";
    cout<<"\t\t|                                                        |\n";
    cout<<"\t\t|               3. ��  ��  Ա                      |\n";
    cout<<"\t\t|                                                        |\n";
    cout<<"\t\t|               0. ��       ��                       |\n";
    cout<<"\t\t|                                                        |\n";
    cout<<"\t\t---------------------------------------|\n";
    cout<<"��������ѡ��";
}
```
### 2.2 ��ӿ�
```C++
int main()
{
   int slect=0;
   while(true)
   {
       cout<<"====��ӭ������ѧ�������ԤԼϵͳ===="<<endl;
       cout<<endl<<"�������������"<<endl;
       cout<<"\t\t---------------------------------------\n";
       cout<<"\t\t|                                                        |\n";
        cout<<"\t\t|               1. ѧ������                       |\n";
        cout<<"\t\t|                                                        |\n";
       cout<<"\t\t|               2. ��       ʦ                       |\n";
      cout<<"\t\t|                                                        |\n";
       cout<<"\t\t|               3. ��  ��  Ա                      |\n";
      cout<<"\t\t|                                                        |\n";
      cout<<"\t\t|               0. ��       ��                       |\n";
      cout<<"\t\t|                                                        |\n";
      cout<<"\t\t---------------------------------------|\n";
      cout<<"��������ѡ��";
      switch (slect)
      {
         case 1:        //ѧ�����
            break;
         case 2:        //��ʦ���
            break;
         case 3:        //����Ա���
           break;
         case 0:        //�˳�ϵͳ
            break;
         default:
         cout<<"��������������ѡ��"<<endl;
         system("pause");
         system("cls");
         break;
      }
    system("pause");
    return 0;
   }
}
```
## 3 �˳�����ʵ��
### 3.1 �˳�����ʵ��
��main()������֧0ѡ���У�����˳�����Ĵ��룺
```C++
cout<<"��������������ѡ��"<<endl;
system("pause");
return 0;
```
## 4 ���������
### 4.1 ��ֵĻ���
* ������ϵͳ�У���������ݣ��ֱ�Ϊ��ѧ��������ʦ�Լ�����Ա
* ��������������ԣ�������ǿ��Խ�������ݳ����һ������identity
* ��ͷ�ļ��´���identity.h�ļ�

identity.h��������´��룺
```C++
//��ݳ�����
class Identity
{
public:
    //������
    virtual void operMenu()=0;
    string m_Name;     //�û���
    string m_Pwd;       //����
    
};
```
### 4.2 ѧ����
#### 4.2.1 ���ܷ���
* ѧ������Ҫ����ʱ����ͨ��
* ѧ��������Ҫ�����У�
   ��ʾѧ�������Ĳ˵�����
   ����ԤԼ
   �鿴����ԤԼ
   �鿴����ԤԼ
   ȡ��ԤԼ
#### 4.2.2 ��Ĵ���
* ��ͷ�ļ��Լ�Դ�ļ��´���student.h��student.cpp�ļ�
student.h��������´��룺
```C++
//ѧ����
class Student : public Identity
{
public:
    Student();  //Ĭ�Ϲ���
    Student(int id, string name, string pwd);  //�вι���(ѧ�š�����������)
    virtual void operMenu();  //�˵�����
    void applyOrder();           //����ԤԼ
    void showMyOrder();      //�鿴�ҵ�ԤԼ
    void showAllOrder();       //�鿴����ԤԼ
    void cancelOrder();         //ȡ��ԤԼ
    int m_Id;                         //ѧ��ѧ��
};
```
student.cpp�ļ���������´��룺
```C++
#include<student.h>

Student:: Student() //Ĭ�Ϲ���
{

}
Student:: Student(int id, string name, string pwd) //�вι���(ѧ�š�����������)
{

} 
void Student:: operMenu()  //�˵�����
{

}
 void Student:: applyOrder()           //����ԤԼ
{

}
void Student:: showMyOrder()     //�鿴�ҵ�ԤԼ
{

}
void Student::showAllOrder()      //�鿴����ԤԼ
{

}
void Student::cancelOrder()         //ȡ��ԤԼ
{

}
```
### 4.3 ��ʦ��
####4.3.1 ���ܷ���
* ��ʦ����Ҫ�����ǲ鿴ѧ����ԤԼ�����������
* ��ʦ������Ҫ�����У�
      ʾ��ʦ�����Ľ���
      �鿴����ԤԼ
      ���ԤԼ
#### ��Ĵ���
* ��ͷ�ļ��Լ�Դ�ļ��´���teacher.h��teacher.cpp�ļ�

teacher.h��������´��룺
```C++
#include<teacher.h>
Teacher::Teacher()  //Ĭ�Ϲ���
{

}    
Teacher::Teacher(int id, string name, string pwd) //�вι���(��š�����������)
{

}
void Teacher:: operMenu()  //�˵�����
{

}
void Teacher::showAllOrder()       //�鿴����ԤԼ
{

}
void Teacher::cancelOrder()      //ȡ��ԤԼ
{
    
}
```
### 4.3 ����Ա��
#### 4.3.1 ���ܷ���
* ����Ա����Ҫ������ѧ�ź���ʦ�˺Ž��й����鿴������Ϣ�Լ����ԤԼ��¼
* ����Ա������Ҫ�����У�
��ʾ��������Ĳ˵�����
����˺�
�鿴�˺�
�鿴������Ϣ
���ԤԼ��¼
#### 4.3.2 ��Ĵ���
* ��ͷ�ļ��Լ�Դ�ļ��´���manager.h��manager.cpp�ļ�
manager.h��������´��룺
```C++
#pragma once
#include<iostream>
#include<identity.h>
using namespace std;
class Manager :public Identity
{
public:
    //Ĭ�Ϲ���
    Manager();
    //�вι��� ����Ա����  ����
    Manager(string name, string pwd);
    //ѡ��˵�
    virtual void operMenu();
    //����˺�
    void addPerson();
    //�鿴�˺�
    void showPerson();
    //�鿴������Ϣ
    void showComputer();
    //���ԤԼ��¼
    void cleanFile();
};
```
* ��Դ�ļ�manager.cpp��������´��룺
```C++
#include<manager.h>
//Ĭ�Ϲ���
Manager::Manager()
{

}
//�вι��� ����Ա����  ����
Manager::Manager(string name, string pwd)
{

}
//ѡ��˵�
void Manager::operMenu()
{

}
//����˺�
void Manager::addPerson()
{

}
//�鿴�˺�
void Manager::showPerson()
{

}
//�鿴������Ϣ
void Manager::showComputer()
{

}
//���ԤԼ��¼
void Manager::cleanFile()
{
    
}
```
## 5 ��½ģ��
### 5.1 ȫ���ļ����
����������
* ��ͬ����ݿ��ܻ��õ���ͬ���ļ����������ǿ��Խ����е��ļ����嵽һ��ȫ�ֵ��ļ���
* ��ͷ�ļ������globalFile.h�ļ�
* ��������´��룺
```C++
#pragma once
//����Ա�ļ�
#define ADMIN_FILE    "admin.txt"
//ѧ���ļ�
#define STUDENT_FILE "student.txt"
//��ʦ�ļ�
#define TEACHER_FILE "teacher.txt"
//������Ϣ�ļ�
#define COMOPUTER_FILE "computerrRoom.txt"
//�����ļ�
#define OREDER_FILE  "order.txt"
```
### 5.2 ��½������װ
����������
* �����û���ѡ�񣬽��벻ͬ����ݵ�½

��ԤԼϵͳ��.cpp�ļ������ȫ�ֺ���**void loginIn(string filename, int type)**
������
* fileName --�������ļ���
* type ---��½�����(1. ����ѧ����2������ʦ��3�������Ա)
Loginin��������´���
```C++
//��½����
void LogiIn(string filename, int type)
{
    Identity *person=NULL;
    ifstream ifs;
    ifs.open(filename, ios::in);
    //�ļ����������
    if(!ifs.is_open())
    {
        cout<<"�ļ�������"<<endl;
        ifs.close();
        return;
    }
    int id=0;
    string name;
    string pwd;
    if(type==1)//ѧ����½
    {
        cout<<"���������ѧ��"<<endl;
        cin>>id;
    }
    else if(type==2) //��ʦ��½
    {
        //��ʦ��½��֤
    }
    else if(type==3)
    {
        //����Ա��½��֤
    }
    cout<<"��֤��½ʧ�ܣ�"<<endl;
    system("pause");
    system("cls");
    return;
}
```
### 6.3 ѧ����½
��student.txt�ļ����������ѧ����Ϣ�����ڲ���
�����Ϣ��
>**1  ����  123**
>**2 ����  456**

��login������ѧ����֧�м������´��룬��֤ѧ�����
```C++
  int fId;
        string fName;
        string fPwd;
        while(ifs>>fId&&ifs>>fName&&ifs>>fPwd)
        {
            if (id==fId && name==fName&& pwd==fPwd)
            {
                cout<<"ѧ����֤��½�ɹ���"<<endl;
                system("pause");
                system("cls");
                person=new Student(id, name, pwd);

                return;
            }
        }
```
��֤�ɹ�����login������������´���
```C++
 case 1:      //ѧ����½��֤
        cout<<"���������ѧ�ţ�"<<endl;
        cin>>id;
        cout<<"���������������"<<endl;
        cin>>name;
        cout<<"������������룺"<<endl;
        cin>>pwd;
        while(ifs>>fId&&ifs>>fName&&ifs>>fPwd)
        {
            if (fId==id &&fName==name&& fPwd==pwd)
            {
                cout<<"ѧ����֤��½�ɹ���"<<endl;
                system("pause");
                system("cls");
                person=new Student(id, name, pwd);

                return;
            }
            else
            {
                cout<<"ѧ����֤��½ʧ�ܣ�"<<endl;
                return;
            }
        }
        break;
```
### 6.4 ��ʦ��½
login������������´���
```C++
  cout<<"���������ְ����ţ�"<<endl;
        cin>>id;
        cout<<"���������������"<<endl;
        cin>>name;
        cout<<"������������룺"<<endl;
        cin>>pwd;
        while(ifs>>fId&&ifs>>fName&&ifs>>fPwd)
        {
            if (fId==id &&fName==name&& fPwd==pwd)
            {
                cout<<"��ʦ��½��֤�ɹ���"<<endl;
                system("pause");
                system("cls");
                person=new Teacher(id, name, pwd);

                return;
            }
            else
            {
                cout<<"��ʦ��½��֤ʧ�ܣ�"<<endl;
                return;
            }
        }
```
### 6.5 ����Ա��½
login������������´���
```C++
 cout<<"���������������"<<endl;
        cin>>name;
        cout<<"������������룺"<<endl;
        cin>>pwd;
        while(ifs>>fName&&ifs>>fPwd)
        {
            if (fName==name&& fPwd==pwd)
            {
                cout<<"����Ա��½��֤�ɹ���"<<endl;
                system("pause");
                system("cls");
                person=new Manager(name, pwd);

                return;
            }
            else
            {
                cout<<"����Ա��½��֤ʧ�ܣ�"<<endl;
                return;
            }
        }
```
## 7 ����Աģ��
### 7.1 ����Ա��½��ע��
#### 7.1.1 ���캯��
* ��Manager��Ĺ��캯���У���ʼ������Ա��Ϣ���������£�
```C++
//�вι��� ����Ա����  ����
Manager::Manager(string name, string pwd)
{
    this->m_Name=name;
    this->m_Pwd=pwd;
}
```
####7.1.2 ����Ա�Ӳ˵�
* ��main.cpp�У��û���½���ǹ���Ա����ӹ���Ա�˵��ӿ�
* ����ͬ�ķ�֧�ṩ����
  ����˺�
  �鿴�˺�
  ��ջ���
  ���ԤԼ
  ע����½
* ʵ��ע������
���ȫ�ֺ���**void managerMenu(Identity *&manager)**���������£�
```C++
//�������Ա�Ӳ˵�����
void managerMenu(Identity *&manager)
{
    while (true)
    {
        //���ù���Ա�Ӳ˵�
        manager->operMenu();
        //������ָ�� תΪ����ָ�룬���������������ӿ�
        Manager *man=(Manager*)manager;
        int select=0;
        cin>>select;
        switch (select)
        {
        case 1:     //����˺�
            cout<<"����˺ţ�"<<endl;
            man->addPerson();
            break;
         case 2:     //�鿴�˺�
             cout<<"�鿴�˺ţ�"<<endl;
             man->showPerson();
             break;
         case 3:     //�鿴����
             cout<<"�鿴������"<<endl;
             man->showComputer();
             break;
         case 4:     //���ԤԼ
             cout<<"���ԤԼ��"<<endl;
             man->cleanFile();
             break;
        default:
            delete manager;  //���ٶ�������
            cout<<"ע���ɹ�"<<endl;
            system("pause");
            break;
        }
    }
}
```
####7.1.3 �˵�����ʵ��
* ��ʵ�ֳ�Ա����void Manager::operMenu()�������£�
```C++
//ѡ��˵�
void Manager::operMenu()
{
    cout<<"��ӭ����Ա��"<<this->m_Name<<"��½��"<<endl;
    cout<<"\t\t|---------------------------------------|\n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               1. ѧ������                        | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               2. ��       ʦ                        | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               3. ��  ��  Ա                       | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               0. ��       ��                        | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|---------------------------------------| \n";
    cout<<"��������ѡ��";
}
```
### 7.2 ����˺�
��������
* ��ѧ�����ʦ����µ��˺�

����Ҫ��
* ���ʱѧ��ѧ�Ų����ظ�����ʦְ���Ų����ظ�
#### 7.2.1 ��ӹ���ʵ��
��Manager���е�**addPerson��Ա�����У�ʵ��������˺Ź��ܣ���������
```C++
//����˺�
void Manager::addPerson()
{
    cout<<"����������˺ŵ����ͣ�1-ѧ����2-��ʦ"<<endl;
    string filename;
    string tip;
    ofstream ofs;
    int select=0;
    switch (select)
    {
    case 1:
        filename=STUDENT_FILE;
        tip="��������ţ�";
        break;
    case 2:
        filename=TEACHER_FILE;
        tip="������ְ����ţ�";
    default:
        break;
    }
    ofs.open(filename, ios::out|ios::app);
    int id;
    string name;
    string pwd;
    cout<<tip<<endl;
    cin>>id;
    cout<<"������������"<<endl;
    cin>>name;
    cout<<"���������룺"<<endl;
    cin>>pwd;
    ofs<<id<<" "<<name<<" "<<pwd<<" "<<endl;
    cout<<"��ӳɹ���"<<endl;
    system("pause");
    system("cls");
    ofs.close();
}
```
#### 7.2.2 ȥ�ز���
����˺�ʱ�����ʱ�ظ���ѧ����ţ������ظ��Ľ�ʦְ����ţ���ʾ����
��ȡ��Ϣ
* Ҫȥ���ظ����˺ţ�����Ҫ�Ƚ�ѧ���ͽ�ʦ���˺���Ϣ��ȡ�������У����ڼ��
* ��manager.h�У�����������������ڴ��ѧ���ͽ�ʦ����Ϣ
* ���һ���µĳ�Ա����void initVector()��ʼ������
```C++
//��ʼ������
void initVector();
//ѧ������
vector<Student>vStu;
//��ʦ����
vector<Teacher>vTea;
```
��ʼ������
```C++
//��ʼ��ѧ��
void Manager::initVector()
{
    //��ȡѧ���ļ�����Ϣ
    ifstream ifs;
    ifs.open(STUDENT_FILE, ios::in);
    if (!ifs.is_open())
    {
        cout<<"�ļ���ȡʧ��"<<endl;
        return;
    }
    vStu.clear();
    vTea.clear();
    Student s;
    while (ifs>>s.m_Id&&ifs>>s.m_Name&&ifs>>s.m_Pwd)
    {
        vStu.push_back(s);
    }
    cout<<"��ǰѧ������Ϊ��"<<vStu.size()<<endl;
    ifs.close();       //ѧ����ʼ��
    //��ȡ��ʦ�ļ���Ϣ
    ifs.open(TEACHER_FILE, ios::in);
    Teacher t;
    while (ifs>>t.m_EmpId&&ifs>>t.m_Name&&ifs>>t.m_Pwd)
    {
        vTea.push_back(t);
    }
    cout<<"��ǰѧ������Ϊ��"<<vTea.size()<<endl;
    ifs.close();       //ѧ����ʼ��    
}
```
��manager.cpp�е��вι��캯���У����
>**this->initVector()**;
ȥ�غ�����װ
��manager.h�ļ�����ӳ�Ա����bool checkRepeat(int id, int type);
//����ظ� ������(����id����������)������ֵ��(true�������ظ���false����û���ظ�)
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
���ȥ�ز���
�����ѧ����Ż��߽�ʦְ����ʱ������Ƿ����ظ����������£�
```C++
    string errorTip;   //�ظ�������ʾ
    switch (select)
    {
    case 1:
        filename=STUDENT_FILE;
        tip="������ѧ�ţ�";
        errorTip="ѧ���ظ�������������";
        break;
    case 2:
        filename=TEACHER_FILE;
        tip="������ְ����ţ�";
        errorTip="ְ������ظ������������룺";
    default:
        break;
    }
```
bugj���
������
* ��Ȼ���Լ���ظ����˺ţ����Ǹ���ӵ��˺�����û�и��µ������У���˲��ᱻ���
* ���¸ռ�����˺ŵ�ѧ���Ż���ְ����ţ��ٴ������Ȼ�����ظ�

�������
* ��ÿ��������˺�ʱ�����³�ʼ������

��ÿ�������Ϻ󣬼�����룺
>**this->initVetor();   //��ʼ������**
### 7.3 ��ʾ����
��ʾ����ʵ�֣���Manager��showPerson��Ա������ʵ����ʾ�˺Ź���
```C++
//�鿴�˺�
void Manager::showPerson()
{
    cout<<"��ѡ��鿴���ݣ�1-�鿴ѧ����2-�鿴��ʦ"<<endl;
    int select=0;
    cin>>select;
    switch (select)
    {
    case 1:
        cout<<"����ѧ����Ϣ���£�"<<endl;
        for_each(vStu.begin(), vStu.end(), printStudnet);
        break;
    case 2:
        cout<<"���н�ʦ��Ϣ���£�"<<endl;
        for_each(vTea.begin(), vTea.end(), printTeacher);
        break;
    default:
        break;
    }
    system("pause");
    system("cls");
}
```
### 7.4 �鿴����
#### 7.4.1 ��ӻ�����Ϣ
���������У�����һ��������������1�Ż�������20̨������2��50̨��3��100̨
���ǿ��Խ���Ϣ¼�뵽computerRoom.txt
#### 7.4.2 �����ഴ����Ϣ
��ͷ�ļ�������computerRoom.h
��������´��룺
```C++
#pragma once
#include<iostream>
using namespace std;
//������
class ComputerRoom
{
public:
    int m_ComId;   //����id��
    int m_MaxNum;   //�����������
};
```
#### 7.4.3 ��ʼ��������Ϣ
��manager.h�ĳ�ʼ������������������´���
```C++
   //��ȡ������Ϣ
    ifstream ifs;
    ifs.open(COMOPUTER_FILE, ios::in);
    ComputerRoom c;
    while (ifs>>c.m_ComId&&ifs>>c.m_MaxNum)
    {
        vCom.push_back(c);
    }
    cout<<"��ǰ��������Ϊ��"<<vCom.size()<<endl;
    ifs.close();
```
#### 7.4.4 ��ʾ������Ϣ
��Manager���showComputer��Ա������������´���
```C++
//����Զ��庯��
void printComputer(ComputerRoom &s)
{
     cout<<"������ţ�"<<s.m_ComId<<"   ������������� "<<s.m_MaxNum<<endl;
}
```
```C++
//�鿴������Ϣ
void Manager::showComputer()
{
    cout<<"������Ϣ���£�"<<endl;
    for_each(vCom.begin(), vCom.end(), printComputer);
    system("pause");
    system("cls");    
}
```
### 7.5 ���ԤԼ
����������
�������order.txt�ļ�
#### 7.5.1 ��չ���ʵ��
��Manager��clearFile��Ա������������´��룺
```C++
//���ԤԼ��¼
void Manager::cleanFile()
{
   ofstream ofs(OREDER_FILE, ios::trunc);
   ofs.close();
   cout<<"��ճɹ���"<<endl;
   system("pause");
   system("cls");
}
```
##8 ѧ��ģ��
### 8.1 ѧ����½��ע��
#### 8.1.1���캯��
* ��Student��Ĺ��캯���У���ʼ��ѧ����Ϣ���������£�
Student:: Student(int id, string name, string pwd) //�вι���(ѧ�š�����������)
{
    //��ʼ������
    this->m_Id=id;
    this->m_Name=name;
    this->m_Pwd=pwd;
} 
#### 8.1.2 ����Ա�Ӳ˵�
* �ڻ���ԤԼϵͳ.cpp�У����û���¼��ʱѧ�������ѧ���˵��ӿ�
* ����ͬ�ķ�֧�ṩ����
1.����ԤԼ
2.�鿴�ҵ�ԤԼ
3.�鿴����ԤԼ
4.ȡ��ԤԼ
5.ע����¼
* ʵ��ע������
���ȫ�ֺ���**void studentMenu(Identity *&manager)�������£�
```C++
//ѧ���˵�
void  studentMenu(Identity *&student)
{
    while (true)
    {
        //ѧ���˵�
        student->openMenu();
        Student* stu=(Student*)student;
        int select=0;
        cin>>select;
        switch (select)
        {
        case 1:     //����ԤԼ
            stu->applyOrder();
            break;
         case 2:     //�鿴����ԤԼ
             stu->showMyOrder();
             break;
         case 3:     //�鿴����ԤԼ
             stu->showAllOrder();
             break;
         case 4:     //���ԤԼ
             stu->cancelOrder();
             break;
        default:
            delete student;
            cout<<"ע���ɹ�"<<endl;
            system("pause");
            system("cls");
            return;
        }
    }
}
```
####8.1.3�˵�����ʵ��
* ��ʵ�ֳ�Ա����void Student::operMenu()�������£�
```C++
void Student:: openMenu()  //�˵�����
{
    cout<<"��ӭѧ������"<<this->m_Name<<"��¼��"<<endl;
    cout<<"\t\t|---------------------------------------|\n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               1. ����ԤԼ                        | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               2. �鿴ԤԼ                       | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               3. �鿴����ԤԼ                      | n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               4. ȡ��ԤԼ                       | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|               0.ע����¼                      | \n";
    cout<<"\t\t|                                                        | \n";
    cout<<"\t\t|---------------------------------------| \n";
    cout<<"��������ѡ��";
}
```
####8.1.4 �ӿڶԽ�
* ѧ���ɹ���¼�󣬵���ѧ�����Ӳ˵�����
* ��ѧ����¼��֧�У���Ӵ��룺
>//����ѧ���˵�
>studentMenu(person);
### 8.2 ����ԤԼ
####8.2.1 ��ȡ������Ϣ
* ������ԤԼʱ��ѧ�����Կ�����������Ϣ�����������Ҫ��ѧ����ȡ��������Ϣ

��student.h������µĳ�Ա�������£�
//��������
>vector < computerRoom> vCom;

��ѧ�����вι��캯����׷�����´��룺
```C++
  //��ȡ������Ϣ
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
���ˣ�vCom�����б��������л�������Ϣ
####8.2.2 ԤԼ����ʵ��
��student.cppʵ�ֳ�Ա����void Student::applyOrder()
```C++
void Student:: applyOrder()           //����ԤԼ
{
    cout<<"��������ʱ��Ϊ��һ�����壡"<<endl
            <<"����������ԤԼ��ʱ��"<<endl
            <<"1����һ"<<endl
            <<"1���ܶ�"<<endl
            <<"1������"<<endl
            <<"1������"<<endl
            <<"1������"<<endl;
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
        cout<<"������������������"<<endl;
    }
    cout<<"����������ԤԼ��ʱ��Σ�"<<endl
           <<"1������"<<endl
           <<"2������"<<endl;
    while (true)
    {
        cin>>interval;
        if(interval>=1&&interval<=2)
        {
            break;
        }
        cout<<"������������������"<<endl;
    }
    cout<<"��ѡ�������"<<endl;
    cout<<"1�Ż���������"<<vCom[0].m_MaxNum<<endl;
    cout<<"2�Ż���������"<<vCom[1].m_MaxNum<<endl;
    cout<<"3�Ż���������"<<vCom[2].m_MaxNum<<endl;
    while (true)
    {
        cin>>room;
        if(room>=1&&room<=3)
        {
            break;
        }
        cout<<"������������������"<<endl;
    }
    cout<<"ԤԼ�ɹ��������"<<endl;
    ofstream ofs(OREDER_FILE, ios::app);
    ofs<<"data��"<<data<<" ";
    ofs<<"interval��"<<interval<<" ";
    ofs<<"stuId��"<<this->m_Id<<" ";
    ofs<<"stuName��"<<this->m_Name<<" ";
    ofs<<"roomId��"<<room<<" ";
    ofs<<"ststus:��"<<1<<endl;
    ofs.close();
    system("pause");
    system("cls");
}
```
### 8.3 ��ʾԤԼ
#### 8.3.1����ԤԼ��
������������ʾԤԼ��¼ʱ����Ҫ���ļ���ȡ���м�¼��������ʾ������ԤԼ�����������¼�Լ����£���ͷ�ļ��Լ�Դ�ļ��·ֱ𴴽�orderFile.h��orderfile.cpp�ļ�
orderFile.h��������´���
```C++
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
``
����ԤԼ��¼�ĳ�Ա����updataOrder��������
```C++
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
        ofs<<"status:"<<this->m_orderData[i]["status"]<<" ";
    }
    ofs.close();
 }
 ```
 #### 8.3.2 ��ʾ����ԤԼ
 ��Student���void Student::showMyOrder()��Ա�����У�������´���
 ```C++
 void Student:: showMyOrder()     //�鿴�ҵ�ԤԼ
{
    OrderFile of;
    if(of.m_Size==0)
    {
        cout<<"��ԤԼ��¼"<<endl;
        system("pause");
        system("cls");
        return;
    }
    for (int i = 0; i < of.m_Size; i++)
    {
        if(atoi(of.m_orderData[i]["stuId"].c_str())==this->m_Id)
        {
            cout<<"ԤԼ���ڣ���"<<of.m_orderData[i]["data"];
            cout<<"ʱ�Σ�"<<(of.m_orderData[i]["interval"]=="1"?"����":"����");
            cout<<" ������"<<of.m_orderData[i]["roomId"];
            string status=" ״̬��";   //0��ȡ����ԤԼ  1�������   2����ԤԼ   -1��ԤԼʧ��
            if (of.m_orderData[i]["status"]=="1")
            {
                status+="�����";
            }
            else if(of.m_orderData[i]["status"]=="2")
            {
                status+="ԤԼ�ɹ�";
            }
            else if(of.m_orderData[i]["status"]=="-1")
            {
                status+="���δͨ����ԤԼʧ��";
            }
            else 
            {
                status+="ԤԼ��ȡ��";
            }
        }
    }
    system("pause");
    system("cls");
}
```
####8.3.3��ʾ����ԤԼ
```C++
void Student::showAllOrder()      //�鿴����ԤԼ
{
    OrderFile of;
    if(of.m_Size==0)
    {
        cout<<"��ԤԼ��¼"<<endl;
        system("pause");
        system("cls");
        return;
    }
    for (int i = 0; i < of.m_Size; i++)
    {
        cout<<i+1<<" ";
        cout<<"ԤԼ���ڣ���"<<of.m_orderData[i]["data"];
        cout<<"ʱ�Σ�"<<(of.m_orderData[i]["interval"]=="1"?"����":"����");
        cout<<" ������"<<of.m_orderData[i]["roomId"];
        string status=" ״̬��";   //0��ȡ����ԤԼ  1�������   2����ԤԼ   -1��ԤԼʧ��
        if (of.m_orderData[i]["status"]=="1")
        {
            status+="�����";
        }
        else if(of.m_orderData[i]["status"]=="2")
        {
             status+="ԤԼ�ɹ�";
        }
        else if(of.m_orderData[i]["status"]=="-1")
        {
            status+="���δͨ����ԤԼʧ��";
        }
        else 
        {
            status+="ԤԼ��ȡ��";
        }
    }
    system("pause");
    system("cls");
}
```
####8.4 ȡ��ԤԼ
��Student���void Student::canceOrder()��Ա�����У�������´���
```C++
void Student::cancelOrder()         //ȡ��ԤԼ
{
    OrderFile of;
    if(of.m_Size==0)
    {
        cout<<"��ԤԼ��¼"<<endl;
        system("pause");
        system("cls");
        return;
    }
    cout<<"����л�ԤԼ�ɹ��ļ�¼����ȡ����������ȡ���ļ�¼"<<endl;
    vector<int>v;
    int index=1;
    for (int i = 0; i < of.m_Size; i++)
    {
        if (atoi(of.m_orderData[i]["stuId"].c_str())==this->m_Id)
        {
            if(of.m_orderData[i]["status"]=="1"||of.m_orderData[i]["status"]=="2")
            {
                v.push_back(i);
                cout<<index++<<"��";
                cout<<"ԤԼ���ڣ���"<<of.m_orderData[i]["data"];
                cout<<"ʱ�Σ�"<<(of.m_orderData[i]["interval"]=="1"?"����":"����");
                cout<<" ������"<<of.m_orderData[i]["roomId"];
                string status=" ״̬��";   //0��ȡ����ԤԼ  1�������   2����ԤԼ   -1��ԤԼʧ��
                if (of.m_orderData[i]["status"]=="1")
                {
                      status+="�����";
                 }
                else if(of.m_orderData[i]["status"]=="2")
                {
                     status+="ԤԼ�ɹ�";
                }
                cout<<status<<endl;
            }
        }
    }
    cout<<"������ȡ���ļ�¼��0������"<<endl;
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
            cout<<"��ȡ��ԤԼ"<<endl;
        }
        cout<<"������������������";
    }
    system("pause");
    system("cls");
}
```