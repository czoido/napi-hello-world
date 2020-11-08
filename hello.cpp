// hello.cpp
#include <node.h>

namespace demo {

    using v8::FunctionCallbackInfo;
    using v8::Isolate;
    using v8::Local;
    using v8::Object;
    using v8::String;
    using v8::Value;

    void HelloWorld(const FunctionCallbackInfo<Value>& args) {
        Isolate* isolate = args.GetIsolate();
        args.GetReturnValue().Set(String::NewFromUtf8(isolate, "hello world from a native addon").ToLocalChecked());
    }

    void Initialize(Local<Object> exports) {
        NODE_SET_METHOD(exports, "hello_world", HelloWorld);
    }

    NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize)

}  // namespace demo