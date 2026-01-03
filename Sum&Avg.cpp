#include <iostream>
using namespace std;
int main() {
    double arr[]={17.22,34,15,96,79,91,1.0};
    int len = sizeof(arr)/sizeof(arr[0]);
    double sum=0;
    double avg=0;
    for(int i=0;i<len;i++){
        sum=sum+arr[i];
    }
    for(int i=0;i<len;i++){
        avg=sum/len;
    }
    cout<<"Sum of the elements in the array is:"<<sum<<endl;
    cout<<"Average of the elements in the array is:"<<avg<<endl;

    return 0;
}