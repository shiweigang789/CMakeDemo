
#include<jni.h>
#include<string>
#define LIBPATH(name)Java_com_hiwallet_cmakedemo_jni_##name

extern "C" JNIEXPORT
jstring JNICALL
//Java_com_hiwallet_cmakedemo_jni_NativeLib_stringFromNativeLib(JNIEnv *env, jclass thiz){
LIBPATH(NativeLib_stringFromNativeLib)(JNIEnv *env, jclass thiz){
    std::string hello = "Hello,I from C++";
//    return env->NewStringUTF(hello.c_str());
    return env->NewStringUTF("Hello,I from C++123");
}