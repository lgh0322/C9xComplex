#include <jni.h>
#include <string>

extern "C" {
#include "c9x-complex/complex.h"
}


using namespace std;










extern "C"
JNIEXPORT jstring JNICALL
Java_com_vaca_c9xcomplex_MainActivity_stringFromJNI(JNIEnv *env, jobject thiz) {
    // TODO: implement stringFromJNI()
    double complex w, z;
    z = 0.1 + 0.5 * I;
    w = ctan(z);
    double a = creal(w);
    double b = cimag(w);


    std::string hello = "Hello from C++";
    hello += to_string(a);
    hello += "sdklf";
    hello += to_string(b);
    return env->NewStringUTF(hello.c_str());
}