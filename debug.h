
#define RYAN_DEBUG 1
#ifdef RYAN_DEBUG
#define dbg_printf(x, args...) printf("%s,%s,%d:" x, __FILE__, __FUNCTION__, __LINE__, ##args)
#define PRINT(str) printf(str);  
#define PRINT1(str, arg); printf(str, arg);  
#else
#define dbg_printf(x, args...)
#define PRINT(str) ;  
#define PRINT1(str, arg); ;
#endif
