
#include <jni.h>
#include "sohello.h"

#define LIBPATH(name)Java_com_hiwallet_cmakedemo_jni_##name

extern "C" JNIEXPORT
jint JNICALL
LIBPATH(NativeHelloSoLib_intFromHelloSo)(JNIEnv *env, jclass type,
                                         jint i) {
    return sohello(i);
}