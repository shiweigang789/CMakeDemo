package com.hiwallet.cmakedemo.jni;

/**
 * @author : Owen
 * @FileName : NativeLib
 * @date : 2020/9/11 10:26
 * @description :
 */
public class NativeLib {

    static {
        System.loadLibrary("native_test");
    }

    public static native String stringFromNativeLib();

}
