#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_bsuir_myapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT void JNICALL
Java_net_openwatch_ffmpegwrapper_FFmpegWrapper_setAVOptions(JNIEnv *env, jobject instance,
                                                            jobject jOpts) {

    // TODO

}