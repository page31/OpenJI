// Interpreter.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Interpreter.h"


// This is an example of an exported variable
INTERPRETER_API int nInterpreter=0;

// This is an example of an exported function.
INTERPRETER_API int fnInterpreter(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see Interpreter.h for the class definition
CInterpreter::CInterpreter()
{
	return;
}
