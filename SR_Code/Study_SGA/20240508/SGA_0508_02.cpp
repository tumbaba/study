// ifstream: 파일로부터 입력 받기위한 클래스 std::ifstream file("파일이름.txt")
// ofstream: 파일로부터 출력 하기위한 클래스 std::ofstream file("파일이름.txt")
// fstream: 파일을 입력 or 풀력하기 위한 클래스 std::fstream file("파일이름.txt")
// open: 파일열기 file.open("파일이름.txt")
// close: 파일닫기 file.close("파일이름.txt")
// << 출력 연산자
// >> 입력 연산자
// getline: 한줄씩 파일에서 문자열 읽기 std::getline(file.str);
#include <iostream>
#include <fstream> // 파일 입출력
#include <string>

using namespace std;

int main() {
	
	//파일에 사용할 문자열
	/*
	string textToWrite = "제발 수업진행이 도움되는 시간이었으면 좋겠다..\n전달력이 어렵더라도 상호작용과 의사소통이 되었으면 좋겠다..";
	
	//파일에 문자열 쓰기
	ofstream outputFile("수업진행_0508.txt");
	if (outputFile.is_open()) {
		
		outputFile << textToWrite;

		outputFile.close();
		cout << "example.txt에 정상적으로 저장되었습니다.\n";
	}
	else {
		cout << "파일을 정상적으로 저장하지 못했습니다. exampl.txt 있는지 확인해주세요\n";
		return 1;
	}
	
	// 파일에서 문자열 읽기
	string readText;
	ifstream inputFile("수업진행_0508.txt");
	if (inputFile.is_open()) {
		
		int i = 1;
		while (getline(inputFile, readText))
		{
			cout << "표시횟수 : " << i << "\t" << readText << endl;
			i++;
		}

		inputFile.close();
		
	}
	else {
		cout << "Unable to open the file for reading\n" << endl;
		return 1;
	}
	*/

	fstream file("수업진행_0508.txt", ios::in | ios::out | ios::app); // 읽기, 쓰기, 파일끝 추가 입력하기
	if (file.is_open()) {
		file << "호호호호" << endl;
		file.seekg(0); // 파일의 시작위치로 이동
		
		string line;

		int i = 1;
		while (getline(file, line))
		{
			cout << "표시횟수 : " << i << "\t" << line << endl;
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