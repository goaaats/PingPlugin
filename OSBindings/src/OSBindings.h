#pragma once

#include <array>
#include <vector>

#define DllExport __declspec( dllexport )

DllExport unsigned long GetProcessFirstIngressConnection(unsigned long pid);
DllExport const unsigned char* GetProcessFirstIngressConnectionIPv6(unsigned long pid);