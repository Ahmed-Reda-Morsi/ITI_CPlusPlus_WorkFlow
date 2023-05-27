//________________| ITI c++ -> 05_session |___________________
/* 
___" Topics:
-> smart pointer class  .
    -> unique_ptr
    -> shared_ptr
    -> wear_ptr
    
-> lambda expressions _> [] <_  .
    [allowed valiables names to use _copy or & ->read only _ ](arguments) {implementation }(calling);
    [allowed valiables names to use _copy or & ->edit _ ](arguments) mutable {implementation }(calling);
    [= _> use all local variables by value ](arguments) mutable {implementation }(calling);
    [& _> use all local variables by reference and can edit. ](arguments) mutable {implementation }(calling);
    [=,&variableName](arguments) mutable {implementation }(calling);

    implement in the same file for small func.s 
    -> only static varaible can be used directly.
    ex: auto fun_name= []( arguments ) ->(inforced return types) {}
    ex: cout<<[](int n){return n%2!=0;}(11)<<endl 
    ex: [](){cout<<"void_void function"}()

-> variabic functions.
    function take variable number of arguments.

___" Tasks:
-> project description in ppt file
 */

#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> p1{new int {45}};
    cout<<*p1<<endl;
    p1.reset()
    
    
    return 0;
}