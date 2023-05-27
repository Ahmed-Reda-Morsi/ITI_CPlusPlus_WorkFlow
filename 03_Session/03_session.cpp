#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    /* data */
    string  Name;
    float   GPA;
public:
    student(/* args */)
    {
        Name="";
        GPA=0;
    }

    student(string name,float gpa):Name(name),GPA(gpa)
    {}

    void Set_Name(string name)
    {
        Name=name;
    }

    void Set_GPA(float gpa)
    {
        GPA=gpa;
    }

    void Get_Name(void)
    {
        cout<<"Name: "<<Name<<endl;
    }

    void Get_GPA(void)
    {
        cout<<"GPA: "<<GPA<<endl;
    }
};


class employee
{
private:
    /* data */
    string  Name;
    int     Salary;
    string JobName;
public:
    employee(/* args */)
    {
        Name="";
        Salary=0;

    }
    employee(string name,string job,int salary):Name(name),Salary(salary),JobName(job)
    {}

        void Set_Name(string name)
    {
        Name=name;
    }
    void Set_Salary(int salary)
    {
        Salary=salary;
    }

        void Get_Name(void)
    {
        cout<<"Name: "<<Name<<endl;
    }
    
    void Get_Salary(void)
    {
        cout<<"Salary: "<<Salary<<endl;

    }
    void Get_JobName(void)
    {
        cout<<"Job Name: "<<JobName<<endl;

    }

};




class HardWorker:public employee,public student
{
private:
    /* data */
    string   DailyTimePlan;
public:

    HardWorker(/* args */)
    {
        DailyTimePlan="5h_work , 5h_study ,5h_reading .. ";
    }
    HardWorker(string name,float gpa,string job,int salary,string DTP):DailyTimePlan(DTP),student(name,gpa),employee(name,job,salary)
    {}

    void Set_DailyTimePlan(string DTP)
    {
        DailyTimePlan=DTP;
    }
    void Get_DailyTimePlan(void)
    {
        cout<<"Daily Time Plan : "<<DailyTimePlan<<endl;
    }

    void show_info(void)
    {
        student::Get_Name();
        student::Get_GPA();
        employee::Get_JobName();
        employee::Get_Salary();
        Get_DailyTimePlan();
    }
};


int main()
{
    HardWorker ARM("ahmed reda",3.4,"ES",1500,"6--6--6");
   // ARM.student::Set_Name("Ahmed");
    //ARM.Set_GPA(3.5);
    //ARM.Set_DailyTimePlan("5__4__8");
   // ARM.Set_Salary(5000);
    ARM.show_info();
    return 0;
}