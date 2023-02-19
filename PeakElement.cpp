#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int peakElement(int v[5],int size){
    int s=0,e=size-1,m=s+(e-s)/2;
   
while(s<e){
if(v[m]<v[m+1]){

s=m+1;
}

else{
s=m;
}
m=s+(e-s)/2;

}
return s;
}
int main(){
    int v[]={5,10,20,2,1};int size=5;
   cout<<v[peakElement(v)];
}