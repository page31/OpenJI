// Compiler.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Compiler.h"


// This is an example of an exported variable
COMPILER_API int nCompiler=0;

// This is an example of an exported function.
COMPILER_API int fnCompiler(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see Compiler.h for the class definition
CCompiler::CCompiler()
{
	return;
}
