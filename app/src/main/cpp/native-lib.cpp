#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_deeshant_ndkapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

//Adding function
extern "C" JNIEXPORT jint JNICALL
Java_com_deeshant_ndkapplication_MainActivity_add(JNIEnv* env,jobject, jint x, jint y){
    return x+y;
}

//Subtract function
extern "C" JNIEXPORT jint JNICALL
Java_com_deeshant_ndkapplication_MainActivity_sub(JNIEnv* env,jobject, jint x, jint y){
    return x-y;
}

//Multiply function
extern "C" JNIEXPORT jint JNICALL
Java_com_deeshant_ndkapplication_MainActivity_mult(JNIEnv* env,jobject, jint x, jint y){
    return x*y;
}

//Division function
extern "C" JNIEXPORT jint JNICALL
Java_com_deeshant_ndkapplication_MainActivity_div(JNIEnv* env,jobject, jint x, jint y){
    return x/y;
}


