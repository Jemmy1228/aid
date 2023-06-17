#ifndef AID2_H
#define AID2_H

#ifdef AID2_EXPORTS
#define AID2_API __declspec(dllexport)
#else
#define AID2_API __declspec(dllimport)
#endif

//授权返回状态信息
enum AuthorizeReturnStatus
{
	AuthorizeSuccess = 0,   //授权成功
	AuthorizeDopairingLocking = 1,  //执行配对中锁屏，执行动作请解开锁屏
	AuthorizeFailed = 2,  //授权失败
	AuthorizeDopairingTrust = 3,  //执行配对中需要按信任，执行动作请按信任
	AuthorizeDopairingNotTrust = 4  //执行配对中使用者按下不信任
};
//授权回调函数参数结构体
struct DeviceParameter {
	const char * udid;
	const char * DeviceName;
	const char* ProductType;
	AuthorizeReturnStatus ReturnFlag;
} ;
typedef void (*AuthorizeDeviceCallbackFunc)(DeviceParameter r1);//授权回调函数定义

/*******************************************************
以线程方式开户监听，不阻塞主线程
参数：autoAuthorize 是否自动授权，true 默认值，为自动授权，flase 为不自动
返回值：成功为true
**************************************************/
extern "C" AID2_API bool StartListen(bool autoAuthorize=true);
/*******************************************************
停止监听，关闭监听线程
返回值：成功为true
**************************************************/
extern "C" AID2_API bool StopListen();
/*******************************************************
根据udid授权
参数：udid
返回值：成功为true
**************************************************/
extern "C" AID2_API bool AuthorizeDevice(const char * udid);

/*******************************************************
注册回调函数，授权过程中需要配对信息和授权结果通过回调函数通知
参数：callback 回调函数指针
**************************************************/
extern "C" AID2_API void RegisterCallback(AuthorizeDeviceCallbackFunc callback);

#endif