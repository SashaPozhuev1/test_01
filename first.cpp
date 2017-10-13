#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int i = 0, l = 0;
	char stroka[80];
	char stroka1[240];
	gets_s(stroka);
	
	while(stroka[i]) {
		if (stroka[i] == ' ') {
			stroka1[l] = '%';
			l++;
			stroka1[l] = '2';
			l++;
			stroka1[l] = '0';
			l++;
		}
		else {
			stroka1[l] = stroka[i];
			l++;
		}
		i++;
	}

	for (int j = 0; j < l; j++) {
		cout << stroka1[j];
	}

	cin.get();
    return 0;
}
