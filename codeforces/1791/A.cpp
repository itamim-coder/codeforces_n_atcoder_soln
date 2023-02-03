/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
int a;
cin>>a;

for (int i=0; i<a; i++)
{
    string s;
    cin>>s;
    
    if(s=="c" || s=="o" || s=="d" || s=="e" || s=="f" || s=="r" || s=="s" )
    { 
        cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}
 

    return 0;
}
