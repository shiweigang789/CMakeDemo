package com.hiwallet.cmakedemo

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import com.hiwallet.cmakedemo.jni.NativeLib

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val jniMsg = NativeLib.stringFromNativeLib()
        Log.e("NativeLib",jniMsg)
    }
}
