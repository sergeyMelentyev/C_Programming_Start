#include <stdio.h>
#include "recursionCall.h"												// gcc plainOld.c recursionCall.c -o a.out
#include "array.h"														// gcc plainOld.c array.c -o a.out
#include "curl_data.h"													// gcc plainOld.c curl_data.c $(pkg-config --libs --cflags libcurl) -o a.out
#include "pointers.h"													// gcc plainOld.c pointers.c -o a.out
#include "pointer_array.h"												// gcc plainOld.c pointer_array.c -o a.out
#include "read_ext.h"													// gcc plainOld.c read_ext.c -o a.out
#include "struct.h"														// gcc plainOld.c struct.c -o a.out

int main(int argc, char const *argv[]) {
//	recursionCall(5);
//	recursionTailCall(5);
//	arraySample();
//	curl_test();
//	pointerSample();
//	pointerMatrix();
//	read_from_file();
//	struct_first();
	struct_second();

	return 0;
}
