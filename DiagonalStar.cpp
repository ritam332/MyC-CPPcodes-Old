#include<iostream>
using namespace std;
void printSquareStar();

int main(){
   printSquareStar();
   return 0 ;
}
void printSquareStar(){
    int number;
    cout<<"Enter the number... ";
    cin>>number;
    if (number<5)
    {
        cout<<"Invalid Input";
    }else{
        for (int row = 1; row <= number; row++)
        {
            for (int column = 1; column <= number; column++)
            {
                if (row==1||column==1||row==column||row==number||column==number||row==(number-column+1))
                {
                    cout<<"*";
                }else cout<<" ";
                
            } cout<<endl;
            
        }
        
    }
    
}
