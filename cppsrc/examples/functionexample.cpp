#include "functionexample.h"

std::string functionexample::hello(std::string phrase) {
    return "hello javascript from c++" + phrase;
}

Napi::String functionexample::HelloWrapped(const Napi::CallbackInfo& info)
{
    auto env = info.Env();
    if(info.Length() < 1) {
        Napi::TypeError::New(env, "message expected").ThrowAsJavaScriptException();
    }
    auto returnValue = Napi::String::New(env, functionexample::hello(info[0].ToString()));
    return returnValue;
}

Napi::Object functionexample::Init(Napi::Env env, Napi::Object exports)
{
    exports.Set("hello", Napi::Function::New(env, HelloWrapped));
    return exports;
}