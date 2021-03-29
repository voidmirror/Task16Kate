#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	ifstream file;
	//file.open(argv[1], 'r');
	file.open("matrix.txt", ios_base::in);

	if (file.is_open()) {
		cout << "KOOOOO" << endl;
	}
	string str;
	
	//file >> str;
	while (file >> str) {
		cout << str << " ";
	}
	/*getline(file, str);
	cout << str;*/

	//string str = "kjnseg skmef 2 434 jksrgf 45";
	//string str;
	/*vector<vector<string>> vec;
	int counter = 0;
	getline(file, str);
	cout << str;*/
	//while (getline(file, str)) {
	//	cout << str << endl;
	//	stringstream ss(str);
	//	string token;
	//	//vector <string> vec;

	//	//string* misc = (string*)malloc(sizeof(string));
	//	vector<string> local;
	//	while (getline(ss, token, ' ')) {
	//		local.push_back(token);
	//		cout << token << endl;
	//	}
	//	vec.push_back(local);
	//	for (int i = 0; i < vec.size(); i++) {
	//		cout << vec[counter][i] << endl;
	//	}
	//	counter++;
	//}

	//for (int i = 0; i < vec.size(); i++) {
	//	for (int j = 0; j < vec[i].size(); j++) {
	//		cout << vec[i][j] << " ";
	//	}
	//	cout << endl;
	//}
}