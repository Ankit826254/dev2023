#include<iostream>
using namespace std;

int power(int x , int n)
{
    if(n==0)
    {
        return 1;
    }

    int pow=x*power(x,n-1);

    return pow;
}

int main()
{
    int x;
    int y;
    cout<<"Enter the number"<<endl;
    cin>>x>>y;
    
    cout<<power(x,y);
}
