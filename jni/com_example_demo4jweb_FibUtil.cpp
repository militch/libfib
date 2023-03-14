#include <jni.h>

#include <string>

#include "../src/fib.h"


extern "C" JNIEXPORT jint JNICALL
/* Java_<package_name>_<class>_<method> */
Java_com_example_demo4jweb_FibUtil_calcFib(
        JNIEnv* env,
        jclass/* class */,
        jint n) {
    int m = calc_fib(n);
    return m;
}
