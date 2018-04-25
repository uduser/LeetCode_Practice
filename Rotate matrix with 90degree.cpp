#include <iostream>
#include <iomanip>

using namespace std;

void swap(int &a,int &b)
{
	int t = a;
	a = b;
	b = t;
}

void MatrixRotate90Degree(int a[][5], int n)
{
	for(int i=0;i<n;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			swap(a[i][j],a[j][i]);
		}
	}
	for(int i=0;i<n/2;i++)
	{
		for(int j=0;j<n;++j)
		{
			swap(a[i][j],a[n-1-i][j]);
		}
	}
 } 
 
 int main()
 {
 	int a[5][5] = 
	{
        { 1, 2, 3, 4, 5},
        { 6, 7, 8, 9, 10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    for(int i=0; i<5; ++i){
        for(int j=0; j<5; ++j)
            cout<<setw(2)<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    MatrixRotate90Degree(a, 5);
    for(int i=0; i<5; ++i){
        for(int j=0; j<5; ++j)
            cout<<setw(2)<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
 }
