#include <iostream>
using namespace std;

struct Temp{int Min , Max;};

int main()
{
    Temp Temps[101];
    int dayCount;
    do{
        cerr<< "Count of Days: ";
        cin>> dayCount;
    }while(dayCount<0 || dayCount>100);

    for(int i = 1; i<= dayCount; i++){
        do{
            cerr<<"Minimum and Maximum temperature: Nr "<<i<< ": ";
            cin >> Temps[i].Min >> Temps[i].Max;
        }while(Temps[i].Min < -20 || Temps[i].Max < Temps[i].Min || Temps[i].Max > 50);
    }
    int i = 1;
    while(i<=dayCount && Temps[i].Min > Temps[i+1].Min){
        i++;}
    int MonDec = i > dayCount - 1;
  if(MonDec)
    cout<<"Yes the temperatures are strictly monotonically decreasing";
  else
    cout<<"No the temperatures are not strictly monotonically decreasing";
  cout<<endl;


    int PlusMinusCount = 0;
    int PlusMinus[101];
    for(i=1; i<=dayCount; i++){
        if(Temps[i].Min< 0 && Temps[i].Max > 0){
            PlusMinusCount++;
            PlusMinus[PlusMinusCount] = i;
        }
    } cout<<"Count and list of those days on which there will be freezing and thawing: ";
    cout<< PlusMinusCount<< " ";
    for(i=1; i<= PlusMinusCount; i++){
        cout<< PlusMinus[i]<< " ";}
    return 0;
}
