#include <iostream>
using namespace std;

class company
{
private:
    int value1 ;
    int value2 ;
    static int counter;

public:
    company()
    {
        value1 =10;
        value2 =10;
    }

    company(int val1,int val2):value1(val1),value2(val2)
    {

    }
    
/*     company  operator + (company input)
    {
        // object + object overload func.-> cleate your object
        company res;
        res.value1  =value1+ input.value1;
        res.value2  =value2+ input.value2;
        return res;
     */
    company  operator + (company input)
    {
        // with constructor (value1 ,value)
        // return constructor.
        company res;
        res.value1  =value1+ input.value1;
        res.value2  =value2+ input.value2;
        return res;
    }
    company  operator - (company input)
    {
        // with constructor (value1 ,value)
        // return constructor.
        company res;
        res.value1  =value1- input.value1;
        res.value2  =value2- input.value2;
        return res;
    }
    company  operator * (company input)
    {
        // with constructor (value1 ,value)
        // return constructor.
        int val1  =value1* input.value1;
        int val2  =value2* input.value2;
        return company(val1,val2);
    }

    int show_value1(void)
    {
        return value1;
    }
    int show_value2(void)
    {
        return value2;
    }

    void operator ++(int)
    {
        counter++;
        cout << "count = " << counter << endl;
    }


};
/************************************************************/

int company::counter = 0;
int main(void)
{
    /**********************************************************/

    company com1(5,10),com2(2,4),com3(10,15);

    com1 ++ 1;

    com1=com1*(com2+com3);

    cout<<"value1: "<<com1.show_value1()<<endl;
    cout<<"value2: " <<com1.show_value2()<<endl;

    return 0;
}
