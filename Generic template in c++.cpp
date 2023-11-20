#include<bits/stdc++.h>
using namespace std;

template<typename T>
T findMax(const T arr[],const int size){
    if(size<=0){
        cerr<<"Error: Invalid array size.\n";
        return T();}
    T maxVal=arr[0];
    for(int i=1;i<size;++i){if(arr[i]>maxVal){maxVal=arr[i];}
    }return maxVal;}

int main(){
    int intArray[]={5,2,8,1,9};
    int intMax=findMax(intArray,5);
    cout<<"Max integer value: "<<intMax<<endl;
    double doubleArray[]={3.5,1.2,7.8,2.1,5.9};
    double doubleMax=findMax(doubleArray,5);
    cout<<"Max double value: "<<doubleMax<<endl;
    return 0;}
