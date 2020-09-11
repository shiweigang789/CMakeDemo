package com.hiwallet.cmakedemo

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import com.hiwallet.cmakedemo.jni.*

/**
 * https://github.com/lilinxiong/UseCmakeBuildLib
 */
class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val jniMsg = NativeLib.stringFromNativeLib()
        Log.e("NativeLib", jniMsg)
        val intFromHelloSo = NativeHelloSoLib.intFromHelloSo(5)
        Log.e("NativeLib", intFromHelloSo.toString())
        val intFromHelloA = NativeHelloALib.intFromHelloA(3)
        Log.e("NativeLib", intFromHelloA.toString())

//        调用jsoncpp.so生成json
        val outputJsonSo = NativeJsonSoLib.outputJsonSo("xong", "21", "man", "so");
        Log.e("NativeLib", outputJsonSo)
//        调用jsoncpp.so解析json
        val parseJsonSo = NativeJsonSoLib.parseJsonSo(outputJsonSo);
        Log.e("NativeLib", parseJsonSo)

//        调用jsoncpp.a生成json
        val outputJsonA = NativeJsonALib.outputJsonA("xong", "21", "man", "a");
        Log.e("NativeLib", outputJsonA)
//      调用jsoncpp.a解析json
        val parseJsonA = NativeJsonALib.parseJsonA(outputJsonA);
        Log.e("NativeLib", parseJsonA)

    }
}
