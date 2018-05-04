//
// Created by dell on 2018/5/3.
//
#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jint JNICALL
Java_com_zj_ndk_NativeHelper_getAppKey(JNIEnv *env, jobject thiz){
//    char* app_key = "123123";
    int m = 1,n = 3;
    m +=n;
    return m;
}
