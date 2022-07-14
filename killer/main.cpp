#include <bits/stdc++.h>
using namespace std;
int main() {
	bool a;
	a=system("taskkill /f /im StudentMain.exe");
	while(a==true) {
		system("taskkill /f /im StudentMain.exe 2>nul");
	}

}
