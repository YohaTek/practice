#include<iostream>

using namespace std;

int main()
{
int n;
int arr[n]={10,20,30,40,50};

int *ptr;

for(int i=0;i<=n;n++){
ptr=arr[i];
cout<<&ptr<<endl;
}
return 0;
}
