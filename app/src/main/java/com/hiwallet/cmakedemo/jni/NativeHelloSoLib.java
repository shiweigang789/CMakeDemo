package com.hiwallet.cmakedemo.jni;

/**
 * @author : Owen
 * @FileName : NativeHelloSoLib
 * @date : 2020/9/11 15:17
 * @description :
 */
public class NativeHelloSoLib {

    static {
        System.loadLibrary("native_test");
    }
    public static native int intFromHelloSo(int i);

}
