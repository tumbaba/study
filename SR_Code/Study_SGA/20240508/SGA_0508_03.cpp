#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
	//csv ���� ���
	string filename = "data2.csv";


	// ���Ͽ���
	ifstream file(filename);
	if (!file.is_open()) {
		cerr << "Failed to open the file: " << filename << endl;
		return 1;
	}

	// ���Ͽ��� �ٴ����� ������ �б�
	string line;
	while (getline(file, line)) {
		// ���� ��ǥ�� �����ϱ� ���� stringstream ���
		stringstream ss(line);
		string field;
		vector<string> fields;
	
		// ��ǥ�� ���ҵ� �� �ʵ� �б�
		while (getline(ss, field, ',')) {
			fields.push_back(field);
		}
	
		// �� �ʵ� ���
		for (const auto& f : fields) {
			cout << f << " ";
		}
		cout << endl;
		
	}
	// ���� �ݱ�
	file.close();

	return 0;
}