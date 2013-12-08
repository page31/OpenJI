// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the INTERPRETER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// INTERPRETER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef INTERPRETER_EXPORTS
#define INTERPRETER_API __declspec(dllexport)
#else
#define INTERPRETER_API __declspec(dllimport)
#endif

// This class is exported from the Interpreter.dll
class INTERPRETER_API CInterpreter {
public:
	CInterpreter(void);
	// TODO: add your methods here.
};

extern INTERPRETER_API int nInterpreter;

INTERPRETER_API int fnInterpreter(void);
