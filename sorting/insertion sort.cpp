#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"Enter Array size :" <<endl;
    cin>>n ;
    int arr[n] ;
     cout<<"Enter elements :"<<endl ;
   for(int i=0;i<n;i++)
    {
        cin>>arr[i] ;
    }
      for(int i=0;i<n;i++)
      {   int temp=arr[i] ;
          int j=i-1 ;
          for(;j>=0;j--)
          {
              if(arr[j]>temp)
              {
                   arr[j+1]=arr[j] ;
              }
              else
                 break ;
          }
          arr[j+1]=temp ;
      }
      for(int i=0;i<n;i++)
       {
           cout<<arr[i]<<" " ;
       }
}
