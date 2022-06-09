#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    int arr[50][50];
    for(int i = 0 ; i < 50;i++){
        for(int j = 0 ; j<50 ; j ++){
            arr[i][j] = 0;
        }
    }
cin >>n>>d;
for(int i=0; i < n ; i++){
   for(int j =0;j< d; j++){
    cin>>arr[i][j];
   }
}

cout <<"#\n";

//task1

int c= 0;

for(int j = 0 ; j < d; j++){
        if(arr[0][j]>0)
            c++;
    }
    cout<<c<<"\n";

//task2

    double avg[50];
    for(int i =0;i<n;i++){
        avg[i] = 0;
    }
    for(int i=0; i < n ; i++){
   for(int j =0;j< d; j++){
    avg[i]= avg[i] + arr[i][j];
   }
   avg[i]= (avg[i])/(d);
}
int minIndex = 0;
for(int i = 0 ; i < n ; i++){
  if(avg [minIndex] >avg [i] )
    minIndex = i;
}
cout<<"#\n";
cout<< (minIndex + 1)<<"\n";

// task 3

int a = 0;
int counter = 0;
int a1[50];
for(int i=0; i < n ; i++){
   for(int j =0;j< d; j++){
    if( arr[i][j] >= 50)
        a++;
   }
   if(a > 0)
   {
       counter++;
       a1[counter] = (i+1);
       a = 0;

   }
}
cout <<"#\n";
cout<<counter<<" ";
for(int i=1; i <=counter ; i++){
    cout<<a1[i]<<" ";
}

// task 4

cout <<"\n#\n";

vector <int> vec;
vector <int> vec1;
int newcount = 0;
int sum =0;
for(int i =0 ; i < 50; i ++){
    for(int j =0; j < 50;j++){
     sum = sum + arr[j][i];
    }
    vec.push_back(sum);
    sum = 0;
    }
    for(int i = 0 ; i < d;i++){
        if(vec[i]==0)
        {
            vec1.push_back(i);
        newcount ++;
        }
    }
    if( newcount == 0)
{
      cout<< -1 ;
}
        else{
   int mini = vec1[0];
   for(int i =0 ; i < vec1.size();i++){
    if( mini > vec1[i])
        mini = vec1[i];
   }
   cout<<(mini+1);
        }

// task 5

    cout <<"\n#\n";
    int new1 = 1;
    int c123 = 0;
    vector <int> vec2;
for(int i = 0 ; i < n;i++){
        for(int j = 0 ; j<d ; j ++){
            if(arr[i][j] > arr[i+1][j])
                c123 ++;
        }
        if(c123 == d){

        vec2.push_back (i+1);
        vec2.push_back (i);
        }
        new1++;
    }
    if( vec2.size() > 0)
    {
        for(int i = 0 ; i < vec2.size();i++){
        cout<< vec2[i]<<" ";
    }
    }
    else {
         cout<<-1<<" "<<-1;
    }
    return 0;
}

/*
4 7 
0 6 2 0 15 0 3 
0 0 0 0 50 0 0 
3 1 4 1 59 2 65 
0 6 1 80 3 3 9
*/
