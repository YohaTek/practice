#include<iostream>

using namespace std;

int main()
{
int n;
int arr[n]={10,20,30,40,50};

int *ptr;
ptr=arr;
for(int i=0;i<=n;n++){
cout<<&ptr<<endl;
ptr++;
}
return 0;
}
