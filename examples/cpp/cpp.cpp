#include <iostream>
#include "aid2/aid2.h"

// 设置成自动授权 事件通知函数
void ReadAuthorizeInfo(DeviceParameter r1)
{
	std::cout << "iOS设备，udid:" << r1.udid << " 设备名:" << r1.DeviceName;
	switch (r1.ReturnFlag)
	{	
	case AuthorizeReturnStatus::AuthorizeDopairingLocking:
		std::cout << "，请打开密码锁定，进入ios主界面。" << std::endl;
		break;
	case AuthorizeReturnStatus::AuthorizeDopairingTrust:
		std::cout << "，请在设备端按下“信任”按钮。" << std::endl;
		break;
	case AuthorizeReturnStatus::AuthorizeDopairingNotTrust:
		std::cout << "，使用者按下了“不信任”按钮。" << std::endl;
		break;
	default:
		std::cout << (r1.ReturnFlag == AuthorizeReturnStatus::AuthorizeSuccess ? " 授权成功" : " 授权失败") << std::endl;
		break;
	}
}

//自动授权代码示例
void autoDo()
{
	RegisterCallback(ReadAuthorizeInfo); //注册信任,结果通知事件回调函数
	StartListen(true);
	std::cout << "按回车键停止..." << std::endl;
	std::cin.get();  // 阻止主线程退出
	StopListen();
}
//下面代码是不自动授权
void Do(char * udid)
{

		RegisterCallback(ReadAuthorizeInfo); //注册信任通知事件回调函数
		StartListen(false);
		auto ret = AuthorizeDevice(udid);
		std::cout << "iOS设备，udid:" << udid << (ret ? " 授权成功" : " 授权失败") << std::endl;
		StopListen();
}


int main(int argc, char* argv[], char* envp[])
{
	//Do(argv[1]);
	autoDo();
}