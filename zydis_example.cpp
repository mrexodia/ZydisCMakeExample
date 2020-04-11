#include <Zydis/Zydis.h>
#include <cstdio>
#include <cinttypes>

int main()
{
	printf("Zydis version: 0x%" PRIx64 "\n", ZydisGetVersion());
}