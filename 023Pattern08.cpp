#include<iostream>
using namespace std;

int main() {

	// int n;
	// cin >> n;

	// for (int i = 1; i <= n; i++) {

	// 	// for the ith row, print n-i+1 characters in inc. order starting with 'A'
	// 	char ch = 'A';

	// 	for (int j = 1; j <= n - i + 1; j++) {
	// 		cout << ch;
	// 		ch++;
	// 	}

	// 	// then print n-i+1 characters in dec. order

	// 	ch--;

	// 	for (int j = 1; j <= n - i + 1; j++) {
	// 		cout << ch;
	// 		ch--;
	// 	}

	// 	cout << endl;

	// }
    
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		char character='A';
		for(int j=1;j<=n-i+1;j++){
			cout<<character;
			character++;
		}
		for(int j=1;j<=n-i+1;j++){
			cout<<char(character-1);
			character--;
		}
		cout<<endl;
	}

	return 0;
}