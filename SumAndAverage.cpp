#include<iostream>
using namespace std;
void SumAndAverage();
int main(){
     SumAndAverage();
     return 0;
}
void SumAndAverage(){
    int number=0,sum=0,count=0;
    double average=0.0;
    
    
    for ( count = 0; ; count++)
    {      cout<<"Enter  number ... ";
            cin>>number;
        if (isdigit(number))
        {
           sum+=number;

        }else{break;}
        
    }
    
    
     average=(double)(sum/count);
     cout<<"Sum = "<<sum<<" and Average = "<<average;
}
