#include<iostream>
using namespace std;

//______________________| NameSpace Lab |__________________
namespace Two_School
{
    template<typename T>
    T All_members(T member1_num,T member2_num )
    {
        return  ( member1_num + member2_num ) ;  
    }
}
namespace MoreThanTwo_School
{
    template<typename T>
    T All_members(T member1_num,T member2_num )
    {
        // 1000 -> represent the other School members.
        return  ( member1_num + member2_num + 1000) ;  
    }
}


/* *********************   TASK 1 *********************** */
//_____________________| government school |_________________
class Govern_School
{
private:
    /************ data **************/
    string Name;
    string Address;
    int Students_Number;
    int Teachers_Number;
    int Student_cost;
    int const Govern_allowed_Student_cost=1000;
public:
    Govern_School()
    {
        Name            =" ";
        Address         =" ";
        Students_Number =0;
        Teachers_Number =0;
        Student_cost    =0;
    }
    Govern_School(string  name,string  address,int teachers_num ,int student_num,int student_cost)
    {
        Name            =name;
        Address         =address;
        Students_Number =student_num;
        Teachers_Number =teachers_num;
        Student_cost    =student_cost;
    }

    /* ************** METHODS ************** */
        //_________ Setter Methods ________________
    void SET_Name(string name)
    {
        // add constrains
        Name=name;
    } 
    void SET_Address(string address)
    {
        // add constrains
        Address=address;
    }
    void SET_Students_Number(int student_num)
    {
        // add constrains
        Students_Number=student_num;
    }
    void SET_Teachers_Number(int teacher_num)
    {
        // add constrains
        Teachers_Number =teacher_num;
    }
    void SET_Student_Cost(int student_cost)
    {
        if(student_cost< Govern_allowed_Student_cost)
            { 
            Student_cost=student_cost;
            }
    }
        //_________ Getter Methods ________________
    /*void GET_Name(void)
    {
        cout<<"___| School Name : "<<Name<<endl;
    } 
    void GET_Address(void)
    {
        cout<<"___| School Location :        "<<Address<<endl;
    }
    void GET_Students_Number(void)
    {
        cout<<"___| School Students Number : "<<Students_Number<<endl;
    }
    void GET_Teachers_Number(void)
    {
        cout<<"___| School Teachers Number : "<<Teachers_Number<<endl;
    }
    void GET_Student_Cost(void)
    {
        cout<<"___| School Student Cost :    "<<Student_cost<<endl;

    }*/
    string GET_Name(void)
    {
        return Name;
    } 
    string GET_Address(void)
    {
        return Address;
    }
    int GET_Students_Number(void)
    {
        return Students_Number;
    }
    int GET_Teachers_Number(void)
    {
        return Teachers_Number;
    }
    int GET_Student_Cost(void)
    {
        return Student_cost;

    }
    void show_School_info(void)
    {
        cout<<"\n_______________|Government School info |________\n";
        cout<<"-> Name           : "<<Name<<endl;
        cout<<"-> Address        : "<<Address<<endl;
        cout<<"-> Students Number: "<<Students_Number<<endl;
        cout<<"-> Teachers Number: "<<Teachers_Number<<endl;
        cout<<"-> Student_cost   : "<<Student_cost<<endl;
    }
};


/* *********************   TASK 2 *********************** */
//_____________________|private  school |_________________
class Private_School
{
private:
    /************ data **************/
    string Name;
    string Address;
    int Students_Number;
    int Teachers_Number;
    int Student_cost;
    int const Private_allowed_Student_cost=5000;

public:
    Private_School()
    {
        Name            =" ";
        Address         =" ";
        Students_Number =0;
        Teachers_Number =0;
        Student_cost    =0;
    }
    Private_School(string  name,string  address,int teacher_num,int student_num,int student_cost)
    {
        Name            =name;
        Address         =address;
        Students_Number =student_num;
        Teachers_Number =teacher_num;
        Student_cost    =student_cost;
    }

    /* ************** METHODS ************** */

    //_________ Setter Methods ________________
    void SET_Name(string name)
    {
        // add constrains
        Name=name;
    } 
    void SET_Address(string address)
    {
        // add constrains
        Address=address;
    }
    void SET_Students_Number(int student_num)
    {
        // add constrains
        Students_Number=student_num;
    }
    void SET_Teachers_Number(int teacher_num)
    {
        // add constrains
        Teachers_Number =teacher_num;
    }
    void SET_Student_Cost(int student_cost)
    {
        if(student_cost< Private_allowed_Student_cost)
            { 
            Student_cost=student_cost;
            }
    }
    //_________ Getter Methods ________________
    string GET_Name(void)
    {
        return Name;
    } 
    string GET_Address(void)
    {
        return Address;
    }
    int GET_Students_Number(void)
    {
        return Students_Number;
    }
    int GET_Teachers_Number(void)
    {
        return Teachers_Number;
    }
    int GET_Student_Cost(void)
    {
        return Student_cost;

    }

    //_________ Other Methods ________________
    void show_School_info(void)
    {
        cout<<"\n_______________|Private School info |__________\n";
        cout<<"-> Name           : "<<Name<<endl;
        cout<<"-> Address        : "<<Address<<endl;
        cout<<"-> Teachers Number: "<<Teachers_Number<<endl;
        cout<<"-> Students Number: "<<Students_Number<<endl;
        cout<<"-> Student_cost   : "<<Student_cost<<endl;
    }
};

//__________________________________________________________
int main()
{
    //__________|task 1 :
    Govern_School Govern_cairo("Government Cairo"," Egypt , Cairo", 30,1500,200);
    Govern_cairo.show_School_info();
    //__________| Task 2:
    Private_School Private_Minya;
    Private_Minya.SET_Name("Elamal School");
    Private_Minya.SET_Address(" Egypt , Minya ");
    Private_Minya.SET_Teachers_Number(40);
    Private_Minya.SET_Students_Number(2000);
    Private_Minya.SET_Student_Cost(3500);
    Private_Minya.show_School_info();

    cout<<"\n___|All Sudent number for Two school|______________\n";
    //______| namespace for two schools
    cout<<Govern_cairo.GET_Name()<<endl;
    cout<<Private_Minya.GET_Name()<<endl;
    int All_members=Two_School::All_members(Private_Minya.GET_Students_Number()
                                            ,Govern_cairo.GET_Students_Number());
    cout<<" ->All Sutdents number = "<<All_members<<endl;
    
    //_______| namespace for More than one school
    cout<<"\n___|All tearchers numbers More than one school|____\n";
    cout<<Govern_cairo.GET_Name()<<endl;
    cout<<Private_Minya.GET_Name()<<endl;
    All_members=MoreThanTwo_School::All_members(Govern_cairo.GET_Teachers_Number()
                                                ,Private_Minya.GET_Teachers_Number());
    cout<<" ->All teachers number = "<<All_members<<endl;

    return 0;
}