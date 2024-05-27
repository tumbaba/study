#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
	//csv 파일 경로
	string filename = "data2.csv";


	// 파일열기
	ifstream file(filename);
	if (!file.is_open()) {
		cerr << "Failed to open the file: " << filename << endl;
		return 1;
	}

	// 파일에서 줄단위로 데이터 읽기
	string line;
	while (getline(file, line)) {
		// 줄을 쉼표로 분할하기 위해 stringstream 사용
		stringstream ss(line);
		string field;
		vector<string> fields;
	
		// 쉼표로 분할된 각 필드 읽기
		while (getline(ss, field, ',')) {
			fields.push_back(field);
		}
	
		// 각 필드 출력
		for (const auto& f : fields) {
			cout << f << " ";
		}
		cout << endl;
		
	}
	// 파일 닫기
	file.close();

	return 0;
}