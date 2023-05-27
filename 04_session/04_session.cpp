#include <iostream>
#include <string>
using namespace std;

class shape
{
private:
    /* data */

protected:
    double Area;

public:
    shape()
    {
        Area=0;
    }
    virtual double  area()=0;
    virtual void  display()=0;

    
};

class circle: public shape
{
private:
    /* data */
    float ridus;
public:
    circle(float R): ridus(R)
    {}
    double area() override
    {
        Area=ridus*ridus *(3.14);
        return (Area);
    }
    void display (void) override
    {
        cout<<" the Circle Area : "<<Area<<endl;
    }

};

class rectangle :public shape
{
private:
    /* data */
    float highet, width;
public:
    rectangle(float hi,float wi): highet(hi), width(wi){}
    double area()  override
    { 
        Area=highet * width;
        return (Area);
    }
    void display (void) override
    {
        cout<<" the Rectangle Area : "<<Area<<endl;
    }
};


int main()
{
    rectangle Rec1(45,10);
    circle C1(10);

    Rec1.area();
    Rec1.display();

    C1.area();
    C1.display();

    return 0;
}