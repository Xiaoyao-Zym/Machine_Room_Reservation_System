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
### 7.1����Ա��½��ע��
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
>this->initVector();

