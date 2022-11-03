#include <iostream>

using namespace std;
class digits
{
    int n,sum,sd;
    int d;
public:
    digits()
    {
        n=0;
        sd=0;
        sum=0;}
    void getdata()
    {
        cout<<"Enter a number: ";
        cin>>n;
    }

    int sumofdigit()
    {
        while(n>0)
        {d=n%10;
        sum+=d;
        n=n/10;

        }
     return sum;
    }
    int singledigit()
   {while(sum>=10)
    {while(sum>0)
     {d=sum%10;
        sd+=d;
        sum=sum/10;}

    }

     return sd;
   }
   void display()
   {
       cout<<"Sum of digits is "<<sumofdigit()<<endl;
       cout<<"Sum of digits as single digit is "<<singledigit();
   }
};
int main()
{
    digits digit1;
    digit1.getdata();
    digit1.display();
    return 0;
}
