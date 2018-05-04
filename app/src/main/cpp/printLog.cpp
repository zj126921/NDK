//
// Created by dell on 2018/5/4.
//

#include <jni.h>
#include <android/log.h>

extern "C"
JNIEXPORT void JNICALL
Java_com_zj_ndk_NativeHelper_printLog(JNIEnv* env, jobject thizs,jstring tag_,jstring str_){

    const char *str = env->GetStringUTFChars(str_, JNI_FALSE);
    const char *tag = env->GetStringUTFChars(tag_,JNI_FALSE);
    __android_log_write(ANDROID_LOG_DEBUG,tag,str);
    env->ReleaseStringUTFChars(str_,str);
    env->ReleaseStringUTFChars(tag_,tag);
}
