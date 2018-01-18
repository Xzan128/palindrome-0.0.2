#include <iostream>
#include <cstring>

using namespace std;

int main() {

	bool res;
	char str[30];
	int  j;
	
	cin.getline(str,30);

	j = strlen(str) - 1;
	
	for (int i = 0;( j >= 0 ) && (i <= strlen(str)); i++, j--)
	{
	
		while ((32 <= str[i] && str[i] <= 47) ||
			(58 <= str[i] && str[i] <= 64) ||
			(91 <= str[i] && str[i] <= 96) ||
			(123 <= str[i] && str[i] <= 126)) i++;
		while ((32 <= str[j] && str[j] <= 47) ||
			(58 <= str[j] && str[j] <= 64) ||
			(91 <= str[j] && str[j] <= 96) ||
			(123 <= str[j] && str[j] <= 126)) j--;

		if (isupper(str[i])) str[i] = tolower(str[i]);
		if (isupper(str[j])) str[j] = tolower(str[j]);

		if (str[i] == str[j]) res = true;
		else 
			{
				res = false;
				break;
			}
	}

		if (res) cout << '1'<<endl;
			else cout << '0'<<endl;

	return 0;
}
