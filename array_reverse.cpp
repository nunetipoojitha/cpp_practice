/* for cout definition*/
#include <iostream>

using namespace std;
int main()
{

    int a[]={1,2,3,4,5,6,7,8,9,10};
    int i, n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
        cout<<a[i]<<endl;
    for(i=0;i<n/2;i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
        //cout<<a[i]<<endl;
    }
             
    for(i=0;i<n;i++)
         cout<<a[i]<<endl;
}