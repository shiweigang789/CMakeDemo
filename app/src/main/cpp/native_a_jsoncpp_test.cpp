
#include <jni.h>
#include "json/json.h"

#define LIBPATH(name)Java_com_hiwallet_cmakedemo_jni_##name

extern "C" JNIEXPORT
        jstring JNICALL
LIBPATH(NativeJsonALib_outputJsonA)(JNIEnv *env, jclass thiz,
                                     jstring jname, jstring jage, jstring jsex, jstring jtype)
{
    Json::Value root;
    const char *name = env->GetStringUTFChars(jname, NULL);
    const char *age = env->GetStringUTFChars(jage, NULL);
    const char *sex = env->GetStringUTFChars(jsex, NULL);
    const char *type = env->GetStringUTFChars(jtype, NULL);

    root["name"] = name;
    root["age"] = age;
    root["sex"] = sex;
    root["type"] = type;

    env->ReleaseStringUTFChars(jname, name);
    env->ReleaseStringUTFChars(jage, age);
    env->ReleaseStringUTFChars(jsex, sex);
    env->ReleaseStringUTFChars(jtype, type);

    return env->NewStringUTF(root.toStyledString().c_str());
}

extern "C" JNIEXPORT
        jstring JNICALL
LIBPATH(NativeJsonALib_parseJsonA)(JNIEnv *env, jclass thiz,
                                    jstring jjson)
{
    const char *json_str = env->GetStringUTFChars(jjson, NULL);
    std::string out_str;

    Json::CharReaderBuilder b;
    Json::CharReader *reader(b.newCharReader());
    Json::Value root;
    JSONCPP_STRING errs;
    bool ok = reader->parse(json_str, json_str + std::strlen(json_str), &root, &errs);
    if (ok && errs.size() == 0) {
        std::string name = root["name"].asString();
        std::string age = root["age"].asString();
        std::string sex = root["sex"].asString();
        std::string type = root["type"].asString();
        out_str = "name: " + name + "\nage: " + age + "\nsex:" + sex + "\ntype: " + type + "\n";
    }

    env->ReleaseStringUTFChars(jjson, json_str);

    return env->NewStringUTF(out_str.c_str());
}