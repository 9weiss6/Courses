
/*


��������� ������

�� ���� ������ ����������� ����� N. �������� ��������� �� ��� ������ �����

������ ������� ������

�� ���� ������ ����� ������������� ����� N, �� ����������� 10000.

������ �������� ������

�������� ���� ����� ����� - ����� �� ������.

Sample Input 1:

7

Sample Output 1:

8

Sample Input 2:

8

Sample Output 2:

10

*/

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a;
	b = (a + 2) - (a % 2);
	cout << b;
	return 0;
}