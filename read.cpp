#include <iostream>
#include <fstream>

using namespace std;

int main() {
	 ifstream inFile;
	 inFile.open("mwis.txt");
	 if (!inFile) {
		  cerr << "Unabel to open file";
		  exit(1);
	 }
	 int x;
	 while (inFile >> x) {
		  cout << x << endl;
	 }
	 inFile.close();

	 return 0;
}
