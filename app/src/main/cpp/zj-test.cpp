#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_zj_ndk_NativeHelper_stringFromZJ(JNIEnv *env,jobject thiz) {
//    const char* hello = "ZJ";

    std::string hello = "ZJ";

    jstring hello1 = (jstring) "ZJ";

    const char* hello2 = env->GetStringUTFChars(hello1,JNI_FALSE);


    return env->NewStringUTF(hello.c_str());
//    return hello1;
//    return env->NewStringUTF(hello2);

}

