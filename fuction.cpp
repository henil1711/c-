#include <iostream>
using namespace std;

int check(int n1,int n2)
{

if (n1 > n2)
{
    return n1;
}
else
{
    return n2;
}
}

int main(){
    int a,b,answer;
    cout<<"enter two number :";
    cin>>a>>b;
    answer = check(a,b);
    cout<<answer<<"is biggest";

   
}