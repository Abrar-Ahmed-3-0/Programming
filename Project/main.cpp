„Programming”
Big Project
Made by: Abrar Ahmed
Neptun code: OC7IP4
E-mail:abrarahmedpei@gmail.com
Course code: IP-18fPROGEG
Teacher’s name: Nikhazy Laszlo
2022. May 12.
Content
User documentation ........................................................................................................................ 4
Task ............................................................................................................................................ 4
Runtime environment.................................................................................................................. 4
Usage .......................................................................................................................................... 4
Starting the program................................................................................................................ 4
Program input.......................................................................................................................... 4
Program output........................................................................................................................ 4
Sample input and output.......................................................................................................... 5
Possible errors......................................................................................................................... 5
Developer documentation................................................................................................................ 6
Task ............................................................................................................................................ 6
Specification ............................................................................................................................... 6
Developer environment ............................................................................................................... 7
Source code................................................................................................................................. 7
Solution....................................................................................................................................... 7
Program parameters................................................................................................................. 7
The structure of the program ................................................................................................... 7
Structure of functions.............................................................................................................. 7
The algorithm of the program.................................................................................................. 8
The code ................................................................................................................................. 8
Testing ...................................................................................................................................... 10
Valid test cases...................................................................................................................... 10
Invalid test cases ................................................................................................................... 11
Further development options..................................................................................................... 11
3/9
User documentation
Task
We have the result of a fishing competition in a matrix: M (i, j) means that fisher i caught M (i, j) 
pieces of fish type j.
Create a program that calculates how much the fishers caught of each type of fish.
Runtime environment
A Huawei PC that can run exe files, 64-bit operating system (e.g., Windows 11). No mouse needed.
Usage
Starting the program
The program can be found in the archived file by the name B3\bin\Release\a.exe. You can start the 
program by clicking the B3.exe file.
Program input
The program reads the input data from the keyboard in the following order:
# Data Explanation
1. M The count of fishers (1≤M≤100).
2. N The count of fish types (1≤N≤100).
3. ai, j
The number of fish a fisher caught of each fish type
(1 ai, j 1000).
Program output
The program writes out how many fish were caught in total of each type in the input order of fish 
types.
Sample input and output
Possible errors
The input should be given according to the sample. If the number of measurements is not a whole 
number, it gives error. If the count of fishers is not in the range 1...100 for M or the count of fish 
types not in the range 1...100 for the N, it will cause a problem. If one of the measurements is not a 
number, or it is not in the range 1...1000 for number of fish a fisher caught of each fish type, it also 
will cause a problem. In the case of an error, the program displays an error message.
4/9
Sample of running in the case of invalid data:
5/9
Developer documentation
Task
We have the result of a fishing competition in a matrix: M (i, j) means that fisher i caught M (i, j) 
pieces of fish type j.
Create a program that calculates how much the fishers caught of each type of fish.
Specification
Input: MN, NN, a1...M, 1...N NMXN
Output: sum1...N NN
Precondition: 1<=M<=100 ∧ 1<=N<=100
i (1<=i<=M) ∧ j (1<=i<=N) ∧ 1<=ai, j<=1000
Postcondition: i (1<=i<=M) ∧ j (1<=i<=N)
 sum j = ∑ 𝑎
𝑁
j=1 i, j
Developer environment
Huawei PC, an operating system capable of running exe files (e.g., Windows 11). mingw32-
g++.exe C++compiler (v5.1), Code: Blocks (v17.12) developer tool.
Source code
All the sources can be found in the B3 folder (after extraction). The folder structure used for 
development:
File Explanation
B3\bin\Release\main.exe Executable code
B3\obj\Release\main.o Semi-compiled code
B3\main.cpp C++ source code
B3\test1.txt input test file1
B3\test2.txt input test file2
B3\test3.txt input test file3
B3\test4.txt input test file4
B3\test5.txt input test file5
B3\Documentation.docx documentation (this file)
Solution
Program parameters
Variables
M: Integer
N: Integer
a: 2D Array (1...M, 1...N: Integer)
sum: Array (1...N: Integer)
6/9
The structure of the program
The modules used by the program, and their locations:
main.cpp– the program, in the source folder
bits/stdc++.h – – keyboard, console management etc., part of the C++ system
Structure of functions
7/9
The code
The content of the main.cpp file:
 /*Created by: Abrar Ahmed
 Neptun: OC7IP4
 E-mail: abrarahmedpei@gmail.com
 Task: „Big Project” ==Fishing Competition==*/
#include<bits/stdc++.h>
using namespace std;
void print_output(int M, int N, int a[100][100]){
int sum;
cout<<"The amount of fish caught in total of each type fish are: ";
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
cout<<"==Fishing Competition=="<<endl;
do{
cout<<"The count of fisher and fish types: ";
cin>>M>>N;
}while(M<= 1 || M>=100 && N<=1 || N>=100);
for(int i = 0; i < M; i++)
{
cout<<"The amount of fish, fisher "<<i+1<<" caught of each type fish: ";
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
8/9
Testing
Valid test cases
1. test case: test1.txt
2. test case: test2.txt
3. test case: test3.txt
4. test case: test4.txt
5. test case: test5.txt
9/9
Invalid test cases
6. test case
7. test case
Further development options
1. Reading from a file 
2. Detection of wrong input file 
3. Writing out the Location and ID of the errored file 
4. Capability of running multiple times one after another
