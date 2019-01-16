#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_jiangboh_bti_jniapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    //String hello = "Hello from C++";
    return env->NewStringUTF("Hello from C");
}
