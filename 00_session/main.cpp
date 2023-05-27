#include <iostream>
using namespace std;


int calculate(int a,int b, char operation)
{
    switch (operation)
    {
    case '+':
        return a+b;
    case '-':
        return a-b;

    case '/':
        return a/b;

    case '*':
        return a*b;

    default:
     return 0; 

    }

}
/*
namespace Ahmed
{
    int height=160;
    int weight=75;
    void display(void)
    {
        cout<<"Ahmed -> H:"<<height<<"  W:"<<weight;
    }
}
namespace Ali
{
    int height=150;
    int weight=90;
    void display(void)
    {
        cout<<"Ali -> H:"<<height<<"  W:"<<weight;
    }
}
*/
//----------------------------- namespace -----------------------
namespace circle
{
    int radus=0;
    double area(int raduis)
    {
        return ((3.14)*raduis*raduis);
    }

    int Enter_Raduis(void)
    {
        cout<<"enter the Raduis of circle\n";
        cin>>radus;
        return radus;
    }

}
namespace Rectangle
{
    int width,hight;
    double area(int Length,int width)
    {
        return (Length*width);
    }

    int Enter_width(void)
    {
        cout<<"enter the width of Rectangle\n";
        cin>>width;
        return width;
    }
    int Enter_hight(void)
    {
        cout<<"enter the hight of Rectangle\n";
        cin>>hight;
        return hight;
    }
}
//using namespace Rectangle;
//using namespace circle;


//---------------------------- template -------------------------
template<typename T>
T Min (const T a[], int size)
{
    T min=0xfffff;
    for (int i = 0; i < size; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }

    
    return min;
}

int main()
{
/* 01_session */
   /* // 00_LAB
    // int num1,num2;
    // char operation;
    
    // cout<<"enter number1 and number2 :\n";
    // cin>>num1>>num2;
    // cout<<"enter the operation:\n";
    // cin>> operation;

    // cout<<" the result of "<<num1<<operation<<num2<<"= "<<calculate(num1,num2,operation);
    // name space 
    //Rectangle::area(5,10);
    cout<<circle::area(circle::Enter_Raduis())<<endl;
    cout<<Rectangle::area(Rectangle::Enter_width(),Rectangle::Enter_hight())<<endl;
    {
    }

    */
    // templates topic: for generic function.
    //float nums[6]={.9,5.1,8.5,10,95,7};
    //cout<< Min(nums,6);

    return 0;
}