#include<bits/stdc++.h>
using namespace std;

void print_output(int M, int N, int a[100][100]){
	int sum;
	for(int j = 0;j < N; j++){
		sum = 0;
		for(int i = 0; i < M ; i++){
			sum = sum + a[i][j];
		}
		cout << sum <<" ";
	}
	cout << endl;
}

void read_input(int &M, int &N, int a[100][100])
{
	cin>>M>>N;
	for(int i = 0; i < M; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin>>a[i][j];
		}
	}
}

int main()
{
    int a[100][100], M, N;

	read_input(M, N, a);
    print_output(M, N, a);

	return 0;
}
