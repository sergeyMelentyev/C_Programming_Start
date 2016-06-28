auto int									 					// in block auto memory manager, local scope, init with random val
register int													// in block cpu regester memory, no pointers allow, local scope, init with randome val
static int 														// in block memory manager, local scope, init with 0, save value while program runs
static int 														// global scope for one module, init with 0, save value while program runs
int 															// global static variable, can be seen from any file with extern modifier

volatile int 													// value could be changed while program runs, do not optimize (compiler)
restrict int * 													// pointer could be optimized (compiler), if the pointer is unique

static void fancName(void);										// global scope for one module, cannot be seen from another file

double * pointer;												// pointer to the single value of type double (first element of the block)
pointer = (double *)malloc(30 * sizeof(double));				// ask for memory size for 30 values of type double
free(pointer);													// release memory

long * name;
name = (long *)calloc(100, sizeof(long));						// ask for memory for 100 values of type long and init all with zero
free(name);

int n = 5;
int m = 6;
int ar[n][m];													// two dimantion array of dynamic length
ptr = (int (*)[m])malloc(n * m * sizeof(int));					// array m * n
free(ptr);
