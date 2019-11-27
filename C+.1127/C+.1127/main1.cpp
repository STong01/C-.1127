#include <iostream>
using namespace std;
	
int main()
{
	int n;
	while (cin >> n)
	{
		int first = 1;
		int second = 1;
		int sum;
		if (n <= 0)
		{
			cout << "输入有误，请重新输入！！！" << endl;
			continue;
		}
		else if (n <3 && n > 0)
		{
			sum = 1;
		}
		else
		{
			for (int i = 3; i <= n; i++)
			{
				sum = first + second;
				first = second;
				second = sum;
			}
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}