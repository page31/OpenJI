// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the COMPILER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// COMPILER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef COMPILER_EXPORTS
#define COMPILER_API __declspec(dllexport)
#else
#define COMPILER_API __declspec(dllimport)
#endif

// This class is exported from the Compiler.dll
class COMPILER_API CCompiler {
public:
	CCompiler(void);
	// TODO: add your methods here.
};

extern COMPILER_API int nCompiler;

COMPILER_API int fnCompiler(void);
