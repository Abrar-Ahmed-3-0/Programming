#include<bits/stdc++.h>
using namespace std;

struct type
{
    string Factory;
    string Candy;
    int Price;
};

struct t2
{
    string UniqueFac;
    string Unique_Candy;
    int Unique_Price;
};

int main()
{
    int N;
    cin >> N;

    type data[N+1];
    t2 data2[N+1];

    for (int i = 1; i<= N;i++)
    {
        cin >> data[i].Factory;
        cin >> data[i].Candy;
        cin >> data[i].Price;
    }

    //Task One

    string TheFactory=data[1].Factory;
    string TheCandy=data[1].Candy;

    int ThePrice = data[1].Price;
    int TheMini = data[1].Price;

    for (int i = 1;i<= N;i++)
    {

        if (ThePrice > data[i].Price)
        {

            ThePrice= data[i].Price;
            TheFactory=data[i].Factory;
            TheCandy=data[i].Candy;

        }

    }

    cout << "#" << endl;
    cout << TheCandy << " " <<  TheFactory<< endl;

    //Task 2
    cout << "#" << endl;

    string name = "NONE";
    
    for (int i = 1; i<= N; i++)
    {
        int Unique_Count = 1;
        int k = 1;

        while (k < i && not(data[i].Candy == data[k].Candy))
        {
            k++;
        }

        bool NotExist= (k==i);

        if (NotExist)
        {
            for (int j = i+1; j<=N;j++)
            {

                if(data[i].Candy == data[j].Candy)
                
                {
                    Unique_Count++;
                }
            
            }

            if (Unique_Count == 1)
            {
                name = data[i].Candy;
                break;
            }
        }
    }

    cout << name  << endl;

    //Task 3
    
    cout << "#" << endl;

    int types_candies = 0;
    string CandiesNames[N+1];

    for (int i = 1;i<=N;i++)
    {
        int k = 1;

        while (k<i && not(data[i].Candy == data[k].Candy))
        {
           k++;
        }

        if (k==i)
        {

            types_candies++;
            CandiesNames[types_candies] = data[i].Candy;

        }

    }

    cout << types_candies << endl;

    for (int i = 1; i<=types_candies; i++)
    {

        cout << CandiesNames[i] << endl;

    }

    //Task 4

    cout << "#" << endl;

    string factoryApearedMost;
    int MaxCount = 0;

    for (int i = 1; i<= N;i++)
    {

        int CandyCount = 1;
        int k = 1;

        while (k<i && not(data[i].Factory == data[k].Factory))
        {

            k++;

        }

        if(i==k)
        {
            
            for (int j = i; j<=N; j++ )
            {

                if (data[i].Factory == data[j].Factory)

                {

                   CandyCount++;

                }
            }
        }
        if (MaxCount < CandyCount)
        {

            MaxCount = CandyCount;
            factoryApearedMost = data[i].Factory;

        }
    }

    cout << factoryApearedMost << endl;
    
    //Task 5
    
    cout << "#" << endl;
    int countt=0;
    string akhri="NONE";
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {

            if(data[i].Candy==data[j].Candy && i!=j)
            {
                
                if (data[i].Price <data[j].Price)
                {
                    akhri=data[i].Factory;
                }
                else
                {
                    akhri=data[j].Factory;
                }
            }
            break;
        }
    }
   
   cout<<akhri;

    return 0;
}

/*
5
Bonbonetti
caramel
1000
Szamos
chocolate
1200
Bonbonetti
marzipan
1500
Stuhmer
jelly
700
Szamos
caramel
800
*/
