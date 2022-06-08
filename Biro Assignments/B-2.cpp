#include <iostream>

using namespace std;

int main()
{
    int n,k,x,stu=0;
    int b[101];
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>=k){
            b[stu]=i+1;
            stu++;
        }
    }
    cout<<stu<<" ";
    for(int i=0;i<stu;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
