// ifstream: ���Ϸκ��� �Է� �ޱ����� Ŭ���� std::ifstream file("�����̸�.txt")
// ofstream: ���Ϸκ��� ��� �ϱ����� Ŭ���� std::ofstream file("�����̸�.txt")
// fstream: ������ �Է� or Ǯ���ϱ� ���� Ŭ���� std::fstream file("�����̸�.txt")
// open: ���Ͽ��� file.open("�����̸�.txt")
// close: ���ϴݱ� file.close("�����̸�.txt")
// << ��� ������
// >> �Է� ������
// getline: ���پ� ���Ͽ��� ���ڿ� �б� std::getline(file.str);
#include <iostream>
#include <fstream> // ���� �����
#include <string>

using namespace std;

int main() {
	
	//���Ͽ� ����� ���ڿ�
	/*
	string textToWrite = "���� ���������� ����Ǵ� �ð��̾����� ���ڴ�..\n���޷��� ��ƴ��� ��ȣ�ۿ�� �ǻ������ �Ǿ����� ���ڴ�..";
	
	//���Ͽ� ���ڿ� ����
	ofstream outputFile("��������_0508.txt");
	if (outputFile.is_open()) {
		
		outputFile << textToWrite;

		outputFile.close();
		cout << "example.txt�� ���������� ����Ǿ����ϴ�.\n";
	}
	else {
		cout << "������ ���������� �������� ���߽��ϴ�. exampl.txt �ִ��� Ȯ�����ּ���\n";
		return 1;
	}
	
	// ���Ͽ��� ���ڿ� �б�
	string readText;
	ifstream inputFile("��������_0508.txt");
	if (inputFile.is_open()) {
		
		int i = 1;
		while (getline(inputFile, readText))
		{
			cout << "ǥ��Ƚ�� : " << i << "\t" << readText << endl;
			i++;
		}

		inputFile.close();
		
	}
	else {
		cout << "Unable to open the file for reading\n" << endl;
		return 1;
	}
	*/

	fstream file("��������_0508.txt", ios::in | ios::out | ios::app); // �б�, ����, ���ϳ� �߰� �Է��ϱ�
	if (file.is_open()) {
		file << "ȣȣȣȣ" << endl;
		file.seekg(0); // ������ ������ġ�� �̵�
		
		string line;

		int i = 1;
		while (getline(file, line))
		{
			cout << "ǥ��Ƚ�� : " << i << "\t" << line << endl;
			i++;
		}
		file.close();
	}
	else {
		cout << "Unable to open the file for reading\n" << endl;
		return 1;
	}




	return 0;
}