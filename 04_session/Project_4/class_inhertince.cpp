
#include <iostream>
#include <string>
using namespace std;

class MaterialObject
{
protected:
    /* data */
    string Name;
    bool IsALive ;

public:
    MaterialObject(string name,bool type):Name(name)
    {
        IsALive=type;
    }
    ~MaterialObject(){}

    virtual void Display(void){}

    //_______________| Setters Getters|________________
    void Set_Name(const string name)
    {
        Name=name;
    }
    string Get_Name(void)
    {
        return Name;
    }
        
    void Set_IsALive(const bool type)
    {
        IsALive=type;
    }
    bool Get_IsALive(void)
    {
        return IsALive;
    }
    //___________________________________________________
};

//_______________________| Material Object Classes |_______________________________
class LivingThing: public MaterialObject
{
protected:
    int Age;
public:
    LivingThing(string name ="",int age=0):MaterialObject(name,true),Age(age){}
    ~LivingThing(){}

    void Can_Growth(void)
    {
        cout<<"___| "<<Name<<" can Growth! \n";
    }
    void Can_adapt(void)
    {
        cout<<"___| "<<Name<<" can adapt to their environment to have a better chance of survival.! \n";
    }
    void Can_Excrete(void)
    {
        cout<<"___| "<<Name<<" can excrete waste! \n";
    }

    //_______________| Setters Getters|________________
    void Set_Age(const int age)
    {
        Age=age;
    }
    int Get_Age(void)
    {
        return Age;
    }
    //______________________________________________________

};

class NonLivingThing: public MaterialObject
{
private:
    /* data */
public:

    NonLivingThing(string name):MaterialObject(name,false){}
    ~NonLivingThing(){}
};

//_______________________| LivingThing Classes|____________________________
class Animal:public LivingThing
{
protected:
    /* data */
public:
    Animal(string name ="",int age=0):LivingThing(name,age){}
    ~Animal(){}

    void Eat(void)
    {
        cout<<"___| "<<Name<<" is eating! \n";
    }

    void Sleep(void)
    {
        cout<<"___| "<<Name<<" is sleeping! \n";
    }

    void NeedFood(void)
    {
        cout<<"___| "<<Name <<" can feel hungery so need food !!\n";
    }

    virtual void Sound(void){}

};

class Plant:public LivingThing
{
private:
    /* data */
public:
    Plant(){}
    ~Plant(){}
};


//________________________| Animal Classes |_____________________
class Reptile:public Animal
{
private:
    /* data */
public:
    Reptile(/* args */);
    ~Reptile();
};

class Mammal:public Animal
{
protected:
    /* data */
    string HairColor;
    string FurFunction;   // fur function for mammal types.
public:

    Mammal(string name,int age ,string HairColor,string FurFunction):Animal(name,age)
    {
        this->FurFunction=FurFunction;
        this->HairColor=HairColor;
    }
    ~Mammal(){}

    void Breathe(void)
    {
        cout<<"___| "<<Name <<" is breathing with lungs!!\n";
    }
    void FeedBabies(void)
    {
        cout<<"___| "<<Name <<" is feeding Mlik to their babies!!\n";
    }
    //_______________| Setters Getters|________________
    void Set_HairColor(const string HairColor)
    {
        this->HairColor=HairColor;
    }
    string Get_HairColor(void)
    {
        return HairColor;
    }
        
    void Set_FurFunction(const string FurFunction)
    {
        this->FurFunction=FurFunction;
    }
    string Get_FurFunction(void)
    {
        return FurFunction;
    }
    //___________________________________________________

};

//________________________| Mammal Classes|_________________________
class HumanBeing:public Mammal
{

protected:
    /* data */
    string nationality;
    string Language;

public:
    HumanBeing(string name,int age, string nationality,string Language):Mammal(name,age,"most head hair is black ","Protection from sunlight")
    {
        this->nationality=nationality;
        this->Language=Language;
    }
    ~HumanBeing(){}

    //_________________| Setters and Getter |_____________
    void Set_nationality(const string nationality)
    {
        this->nationality=nationality;
    }
    string Get_nationality(void)
    {
        return nationality;
    }

    void Set_Language(const string Language)
    {
        this->Language=Language;
    }
    string Get_Language(void)
    {
        return Language;
    }

    //_________________| overridded functions|____________
    void Display(void)
    {
        cout<<"____| Name         : " <<Name<<endl;
        cout<<"____| Nationality  : " <<nationality<<endl;
        cout<<"____| Age          : " <<Age<<endl;
        cout<<"____| IsALive      : " <<IsALive<<endl;
        cout<<"____| Hair Color   : " <<HairColor<<endl;
        cout<<"____| Fur Function : " <<FurFunction<<endl;
    }

};

class Cat:public Mammal
{

protected:
    /* data */
    string Owner;
public:
    Cat(string name,int age, string owner,string haircolor):Mammal(name,age,haircolor,"insulation and protection ")
    { Owner=owner;}
    ~Cat(){}
    //_________________| Setters and Getter |_____________
        void Set_Owner(const string owner)
    { Owner=owner;}
    string Get_Owner(void)
    { return Owner;}

    //_________________| overridded functions|____________
    void Sound(void)
    {
        cout<<"___| "<<Name<<" sound: muyao! muyao!\n";
    }
    void Display(void)
    {
        cout<<"___________________________________________"<<endl;
        cout<<"____| Name         : " <<Name<<endl;
        cout<<"____| Owner        : " <<Owner<<endl;
        cout<<"____| Age          : " <<Age<<endl;
        cout<<"____| IsALive      : " <<IsALive<<endl;
        cout<<"____| Hair Color   : " <<HairColor<<endl;
        cout<<"____| Fur Function : " <<FurFunction<<endl;
    }
};

class Dog:public Mammal
{
protected:
    /* data */
    string Owner;
public:
    Dog(string name,int age, string owner,string HairColor):Mammal(name,age,HairColor,"insulation and protection ")
    {
        Owner=owner;
    }
    ~Dog(){}

    void bark(void)
    {
        cout<<"a dog barked at her\n";
    }

    //_________________| Setters and Getter |_____________
    void Set_Owner(const string owner)
    {
        Owner=owner;
    }
    string Get_Owner(void)
    {
        return Owner;
    }
   //_________________| overridded functions|____________
    void Sound(void)
    {
        cout<<"___| "<<Name<<" sound: hou! hou! hou!\n";
    }
        void Display(void)
    {
        cout<<"____| Name         : " <<Name<<endl;
        cout<<"____| Owner        : " <<Owner<<endl;
        cout<<"____| Age          : " <<Age<<endl;
        cout<<"____| IsALive      : " <<IsALive<<endl;
        cout<<"____| Hair Color   : " <<HairColor<<endl;
        cout<<"____| Fur Function : " <<FurFunction<<endl;
    }
};

class Platypus:public Mammal
{
;
public:
    Platypus(string name,int age ,string haircolor):Mammal(name,age ,haircolor,"insulation and protection ")
    {
    }
    ~Platypus(){}

    void Display(void)
    {
        cout<<"____| Name         : " <<Name<<endl;
        cout<<"____| Age          : " <<Age<<endl;
        cout<<"____| IsALive      : " <<IsALive<<endl;
        cout<<"____| Hair Color   : " <<HairColor<<endl;
        cout<<"____| Fur Function : " <<FurFunction<<endl;
    }
};
//__________________| HumanBeing Classes |______________________
class Dentist:public HumanBeing
{
private:
    /* data */
    int Fee;
    string ClinicAddress;
    string ClinicDates;
public:
    Dentist(string name,int age, string nationality,string Language,int fee,string address,string dates):HumanBeing(name,age,nationality,Language)
    {
        Fee=fee;
        ClinicAddress=address;
        ClinicDates=dates;
    }
    ~Dentist(){}

    void Clinic_Dates(void)
    {
        cout<<"___|clinic dates for Doctor "<<Name<<" are "<<ClinicDates<<endl;
    }
 
        void Display(void)
    {
        cout<<"___________________________________________"<<endl;
        cout<<"____| IsALive              : " <<IsALive<<endl;
        cout<<"____| Name                 : " <<Name<<endl;
        cout<<"____| Age                  : " <<Age<<endl;
        cout<<"____| Clinic Adress        : " <<ClinicAddress<<endl;
        cout<<"____| Fee per examination  : " <<Fee<<"$"<<endl;
        cout<<"____| Hair Color           : " <<HairColor<<endl;
    }
};

class Shopkeeper:public HumanBeing
{
private:
    /* data */
public:
    //Shopkeeper(/* args */){}
    //~Shopkeeper(){}
};

class Artist:public HumanBeing
{
private:
    /* data */
public:
    //Artist(/* args */){}
    //~Artist(){}
};


//____________________| NonLivingThing Classes |___________________


class Rock:public NonLivingThing
{
private:
    /* data */
protected:

public:
   // Rock(/* args */){}
    //~Rock(){}
};

class Air:public NonLivingThing
{
private:
    /* data */
public:
    //Air(/* args */){}
    //~Air(){}
};
//_________________________________________________________________
int main()
{
    Dentist arm("ARM",25, "Egytian","Arabic-English",350,"Mani-Mazar", "saturday-sunday ->5PM--10PM");
    arm.Display();
    Cat cat1("mimo",2,"ARM","White-Brown");
    cat1.Set_Name("Rocky");
    cat1.Display();

    return 0;
}       