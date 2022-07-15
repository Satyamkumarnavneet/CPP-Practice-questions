#include <iostream>
using namespace std;
void re_Ar(int ar[], int n)
{
	int i, j, temp;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (ar[j] == i) {
				temp = ar[j];
				ar[j] = ar[i];
				ar[i] = temp;
				break;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		if (ar[i] != i)
		{
			ar[i] = -1;
		}
	}
	
	cout << "Array after Rearranging" << endl;
	for (i = 0; i < n; i++) {
		cout << ar[i] << " ";
	}
}

int main()
{
	int n, ar[] = {9,8,7,6,5,4,3,2,1,0};
	n = sizeof(ar) / sizeof(ar[0]);

	re_Ar(ar, n);
}


