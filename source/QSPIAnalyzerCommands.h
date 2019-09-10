#include <LogicPublicTypes.h>
#include <string>

struct CommandAttr {
	bool AcceptsAddr;
	bool UsesDummyCycles;
	bool HasData;
	bool isWrite;
	int AddressLineMask;
	int DataLineMask;
	//char CommandName[128];
	std::string CommandName;
};

const CommandAttr& GetQSPICommandAttr(U64 id);
bool IsCommandValid(U64 id);
U64 GetQSPICommand(U64 index);
