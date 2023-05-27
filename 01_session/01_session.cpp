#include <iostream>
#include<string>
using namespace std;

//struct 

struct Rectangle
{
    /* ********** data ********** */
    float  width;
    float height;
    /* ********** Methods ********** */
    void Get_Width(void)
    {
        cout<<"Enter the Rectangle width value= ";
        cin >>width;
    }
    void Get_Height(void)
    {
        cout<<"Enter the Rectangle height value= ";
        cin >>height;
    }

    float area(void)
    {
        return width*height;
    }

    void print(void)
    {
        cout<<"Rectangle width  = "<<width<<endl;
        cout<<"Rectangle height = "<<height<<endl;
    }
};

//lab_1
struct Student
{
    /*********** data *************/
    string Name;
    int Age;
    float GPA;
    /*********** Methods ***********/
    void Set_Info(void)
    {
        cout<<"Enter student name : ";
        getline(cin,Name);
        cout<<"Enter student Age  : ";
        cin>>Age;
        cout<<"Enter student GPA  : ";
        cin>>GPA;
    }

    void Print(void)
    {
        cout<<" \n__________|Student Info.|___________";
        cout<<"\nName : "<<Name;
        cout<<"\nAge  : "<<Age;
        cout<<"\nGPA  : "<<GPA;
    }
};

//Lab_2
class company
{
private:
    /************* data **************/
    int annual_earned_money=0;
    int employees_number=0;
    int average_employees_salary=0;
    int customer_number=0;
public:
    company():customer_number(0),employees_number(0)
    {

    }
    /************* Methods **************/
    void Add_employee(void)
    {
        if (employees_number<100)
        {
            employees_number++;
        }
        
    }

    void Add_customer(void)
    {
        if (customer_number<150)
        {
            customer_number++;
        }
    }

    void Set_average_employee_Salary(int salary_value)
    {
        // add your constrains. 
        average_employees_salary = salary_value;
    }

    void Set_annual_earned_money(float target_value)\
    {
        annual_earned_money= target_value;
    }


    void show_company_info(void)
    {
        cout<<"_______________|Company info |___________\n";
        cout<<" annual earned money     : "<<annual_earned_money<<endl;
        cout<<" employees number        : "<<employees_number<<endl;
        cout<<" average employees salary: "<<average_employees_salary<<endl;
        cout<<" customer number         : "<<customer_number<<endl;
    }
};

//__________________________________
#define Govern_allowed_Student_cost 5000
class School
{
private:
    /************ data **************/
    string Name;
    string Address;
    int Students_Number;
    int Student_cost;

public:
    School()
    {
        Students_Number=50;
        Student_cost=1500;
    }
    School(int num,int cost):Students_Number(num),Student_cost(cost)
    {
    }
    /************ Methods ***********/
    void Set_Name(string name)
    {
        // add constrains
        Name=name;
    } 
    void Set_Address(string address)
    {
        // add constrains
        Address=address;
    }
    void Set_Students_Number(int student_num)
    {
        // add constrains
        Students_Number=student_num;
    }
    void Set_Student_Cost(int student_cost)
    {
        if(student_cost< Govern_allowed_Student_cost)
            { 
            Student_cost=student_cost;
            }
    }
    void show_School_info(void)
    {
        cout<<"\n_______________|School info |___________\n";
        cout<<"-> Name           : "<<Name<<endl;
        cout<<"-> Address        : "<<Address<<endl;
        cout<<"-> Students Number: "<<Students_Number<<endl;
        cout<<"-> Student_cost   : "<<Student_cost<<endl;
    }

};




int main()
{
   /*  Rectangle r1;
    r1.width=5;
    r1.height=15.5;
    r1.print();
    cout<<"Rec. Area = "<<r1.area()<<endl; */
   /*  Student ali;
    ali.Set_Info();
    ali.Print(); */
   
    //lab_ 2
    /*   company brightskies;
    brightskies.Add_employee();
    brightskies.Add_employee();
    brightskies.Add_customer();
    brightskies.Add_customer();
    brightskies.Set_average_employee_Salary(3500);
    brightskies.Set_annual_earned_money(1000);
    brightskies.show_company_info();
     */
    School s1,s2(50,1500);
    s1.Set_Name("ELragaa School");
    s1.Set_Address("Egypt , Minya , Bani-mazer");
    s1.Set_Students_Number(150);
    s1.Set_Student_Cost(4500);
    
    s2.Set_Name("ELaamal School");
    s2.Set_Address("Egypt , cairo ");
    //s2.Set_Students_Number(150);
    //s2.Set_Student_Cost(4350);
    
    s1.show_School_info();
    s2.show_School_info();
    

    


    return 0;
}