// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#include "NativeCppInterface.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeCppInterface::NativeCppInterface() : ::djinni::JniInterface<::testapp::CppInterface, NativeCppInterface>("com/dropbox/testapp/CppInterface$CppProxy") {}

NativeCppInterface::~NativeCppInterface() = default;


CJNIEXPORT void JNICALL Java_com_dropbox_testapp_CppInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::testapp::CppInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jint JNICALL Java_com_dropbox_testapp_CppInterface_00024CppProxy_native_1getCppVersion(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_version)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::testapp::CppInterface>(nativeRef);
        auto r = ref->getCppVersion(::djinni::String::toCpp(jniEnv, j_version));
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
