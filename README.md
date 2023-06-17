# aid2: 总览
Authorize ios device 实现功能和爱思助手一样安装app，使用aid2 授权之后 ，安装的IPA文件不需要输入appid和密码，aid第二版本，可以支持windows和mac系统，目前mac系统还没有调通。

# 目录

- [aid2: 总览](#aid2-总览)
- [目录](#目录)
- [入门](#入门)
  - [快速开始: Windows](#快速开始-windows)
  - [快速开始: Unix](#快速开始-unix)
  - [安装 macOS Developer Tools](#安装-macos-developer-tools)
- [编译](#编译)
  - [下载源码](#下载源码)
  - [使用Visual Studio 2019编译](#使用visual-studio-2019编译)
# 入门

首先，请阅读以下任一快速入门指南：
[Windows](#快速开始-windows) 或 [macOS ](#快速开始-unix)，
这取决于您使用的是什么平台。

windows 平台支持windows 10之后版本，itunes 安装最新版本或者说安装 itunes 最新版本里的AppleMobileDeviceSupport包，只做过x64平台做过大量测试，编写代码的时候也考虑到x86平台，但没有大量测试，请使用者自行测试或者拉起pull

编译环境需要用到 Vcpkg，grpc,protobuf,openssl

以下配置环境都需要用到科学上网，否则会失败。

## 快速开始: Windows

前置条件:
- Windows 7 或更新的版本
- [Git][getting-started:git]
- [Visual Studio][getting-started:visual-studio] 2019  或更新的版本（**包含英文语言包**）

首先，**请使用 `git clone vcpkg`** 并执行 bootstrap.bat 脚本。
您可以将 vcpkg 安装在任何地方，但是通常我们建议您使用 vcpkg 作为 CMake 项目的子模块，并将其全局安装到 Visual Studio 项目中。
我们建议您使用例如 `C:\src\vcpkg` 或 `C:\dev\vcpkg` 的安装目录，否则您可能遇到某些库构建系统的路径问题。

```cmd
> git clone https://github.com/microsoft/vcpkg
> .\vcpkg\bootstrap-vcpkg.bat
> .\vcpkg\vcpkg install grpc:x64-windows protobuf:x64-windows openssl:x64-windows abseil:x64-windows
> .\vcpkg\vcpkg integrate install
```

安装itunes版本，windows 10下载连接
* [下载 Windows 10（64 位）版 iTunes 12.10.11](https://secure-appldnld.apple.com/itunes12/001-97787-20210421-F0E5A3C2-A2C9-11EB-A40B-A128318AD179/iTunes64Setup.exe)
* [下载 Windows 10（32 位）版 iTunes 12.10.11](https://secure-appldnld.apple.com/itunes12/001-97791-20210421-F0E1AA9C-A2C9-11EB-8059-A028318AD179/iTunesSetup.exe)

## 快速开始: Unix

macOS 平台前置条件:
- [Apple Developer Tools][getting-started:macos-dev-tools]

首先，请下载 vcpkg 并执行 bootstrap.sh 脚本。
您可以将 vcpkg 安装在任何地方，但是通常我们建议您使用 vcpkg 作为 CMake 项目的子模块。

```sh
$ git clone https://github.com/microsoft/vcpkg
$ ./vcpkg/bootstrap-vcpkg.sh
$ ./vcpkg/vcpkg install grpc protobuf 
$ ./vcpkg/vcpkg integrate install
```

## 安装 macOS Developer Tools

在 macOS 中，您唯一需要做的是在终端中运行以下命令:

```sh
$ xcode-select --install
```

# 编译

## 下载源码

```cmd
> git clone --recursive https://github.com/aidserv/aid.git

```

## 使用Visual Studio 2019编译
使用 Visual Studio 2019 打开 aid2.sln 文件，平台选择x64,然后编译整个解决方案
