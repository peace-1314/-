
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(){
	string name;
	string pwd;

	while(1){
		system("cls");
	cout<<"�������˺ţ�"<<endl;
	cin>>name;
	cout<<"����������:"<<endl;
	cin>>pwd;

	if(name == "rock" && pwd == "123456"){
		break;
	}else {
		system("pause");
		cout<<"�������"<<endl;
		system("pause");
	}
	}
	system("cls");
	std::cout << "1.��վ404����" << std::endl;
	std::cout << "2.��վ�۸Ĺ���" << std::endl;
	std::cout << "3.��վ������¼" << std::endl;
	std::cout << "4.DNS����" << std::endl;
	std::cout << "5.��������������" << std::endl;
	
	system("pause");
	return 0;
}