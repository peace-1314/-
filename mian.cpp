
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(){
	string name;
	string pwd;

	while(1){
		system("cls");
	cout<<"ÇëÊäÈëÕËºÅ£º"<<endl;
	cin>>name;
	cout<<"ÇëÊäÈëÃÜÂë:"<<endl;
	cin>>pwd;

	if(name == "rock" && pwd == "123456"){
		break;
	}else {
		system("pause");
		cout<<"ÊäÈë´íÎó"<<endl;
		system("pause");
	}
	}
	system("cls");
	std::cout << "1.ÍøÕ¾404¹¥»÷" << std::endl;
	std::cout << "2.ÍøÕ¾´Û¸Ä¹¥»÷" << std::endl;
	std::cout << "3.ÍøÕ¾¹¥»÷¼ÇÂ¼" << std::endl;
	std::cout << "4.DNS¹¥»÷" << std::endl;
	std::cout << "5.·þÎñÆ÷ÖØÆô¹¥»÷" << std::endl;
	
	system("pause");
	return 0;
}