#include <napi.h>

namespace functionexample {
    std::string hello(std::string phrase);
    Napi::String HelloWrapped(const Napi::CallbackInfo& info);
    Napi::Object Init(Napi::Env env, Napi::Object exports);
}