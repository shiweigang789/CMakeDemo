

#include <jni.h>
#include "ahello.h"

#define LIBPATH(name)Java_com_hiwallet_cmakedemo_jni_##name

extern "C" JNIEXPORT
jint JNICALL
LIBPATH(NativeHelloALib_intFromHelloA)(JNIEnv *env, jclass type,
                                         jint i) {
    return ahello(i);
}