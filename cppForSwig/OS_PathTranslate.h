//Defines path translation for unicode support. Currently only active in Windows

#ifndef _MSC_VER
	#define OS_TranslatePath(X) X
#else
	//dont care about this shit just yet
	#define OS_TranslatePath(X) X
#endif