#include<iostream>
using namespace std;
int main()
{
	int n,a[10],sum=0;
	cout << "enter the n";cin >> n;
	cout << "enter " << n << " numbers";
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
		sum = sum + a[i];
	}
	cout <<endl<<" sum= "<< sum;
	

}