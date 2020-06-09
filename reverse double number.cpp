#include <iostream>
#include <sstream> // double ma jo b hoga use ye string ma ly a ga
#include<math.h>    // limit remove krne ky liye
using namespace std;

int main()
{
    double num;
    cout<<"enter  decimal number you would like to reverse "<<endl;
    cin>>num;
    int temp=num;
    double temp2=num-temp;

    ostringstream strs;// double temp2 string ma convert
    strs << temp2;
    string str = strs.str();// convert ho geya hai

    int size=(str.length())-2; //sine of string (-2 is liye kiya hai ky 0.2356 hai tu wo 2356

    while(size!=0)
    {
        temp2=temp2*10;

        size--;
    }

    int temp3 = temp2;

    int reverse=0, rem;
    while(temp3!=0)
    {
        rem=temp3%10;
        reverse=reverse*10+rem;
        temp3/=10;
    }


    int reverse1=0,count=0;
    while(temp!=0)
    {
        rem=temp%10;
        reverse1=reverse1*10+rem;
        temp/=10;
        count++;
    }



    int convertd=1;
    while(count!=0)
    {
        convertd=convertd*10;
        count--;
    }

    temp2=(double)reverse1/pow(10,count);
  //  cout<<reverse<<"."<<reverse1;
    cout<<temp2;
    return 0;
}
