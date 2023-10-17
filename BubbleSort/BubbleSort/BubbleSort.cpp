#include<iostream>
using namespace std;
int item;
int i,n;

void bubblesort(int num[], int n)
{
	int i, j, temp;
	int flag=0;
	for (i = 0; i < n - 1; i++)
	{
		flag = 1;
		for (j = 0; j < n - 1-i; j++)
		{
			flag = 1;
			if (num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}if (flag == 0)
			break;
	}
}

int main()
{
	int a[20];
	cout << "Enter how much element do you want in arrary :" << endl;
	cin >> n;
	cout << "Enter the elements :"<<endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
bubblesort(a,n);
cout << "After shorting :" << endl;
for (i = 0; i < n; i++)
{
	cout << a[i] << endl;
}
}