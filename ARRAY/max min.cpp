#include<climits>
#include<iostream>
using namespace std ;
int getMax(int num[],int n)
{
    int max= INT_MIN ;
    for(int i=0 ; i<n;i++)
    {
        if (num[i]>max)
            max = num[i] ;
    }
    return max ;
}
int getMin(int num[],int n)
{
    int min= INT_MAX ;
    for(int i=0 ; i<n;i++)
    {
        if (num[i]<min)
            min= num[i] ;
    }
      return min ;
}
int main()
{
    int size ;
    cout<<"Enter size : " ;
    cin>>size ;
    int num[size] ;
    //Taking input in Array
    for(int i=0 ; i<size ;i++)
        cin>>num[i] ;
        int maximum = getMax(num,size) ;
        int minimum = getMin(num,size) ;
        cout<<" MAx value in array is "<<maximum<<endl ;
         cout<<" Min value in array is "<<minimum ;











}
