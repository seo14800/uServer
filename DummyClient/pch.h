#pragma once

#define WIN32_LEAN_AND_MEAN // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.

#include "Protocol.pb.h"
#include "Enum.pb.h"
#include "Struct.pb.h"

#ifdef _DEBUG
#pragma comment(lib, "ServerCore\\Debug\\ServerCore.lib")
#pragma comment(lib, "ProtoBuf\\Debug\\libprotobufd.lib")
#pragma comment(lib, "ProtoBuf\\Debug\\abseil_dll.lib")
#else
#pragma comment(lib, "ServerCore\\Release\\ServerCore.lib")
#pragma comment(lib, "ProtoBuf\\Release\\libprotobuf.lib")
#pragma comment(lib, "ProtoBuf\\Release\\abseil_dll.lib")
#endif

#include "CorePch.h"