#include<iostream>
using namespace std;

int power(int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }

    //reccursion relation
    else
    {
        return n*power(n-1);
    }

}


int main()
{

 int n ;
 cout<<"Entered the number : "; cin>>n;


  int ans= power(n);

  cout <<"answer: "<<ans<<endl;
}
