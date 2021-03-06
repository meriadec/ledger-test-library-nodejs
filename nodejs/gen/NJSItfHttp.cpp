// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http.djinni

#include "NJSItfHttp.hpp"

using namespace v8;
using namespace node;
using namespace std;


void NJSItfHttp::get(const std::string & url, const std::experimental::optional<std::vector<HttpHeader>> & header, const std::shared_ptr<HttpCallback> & callback)
{
    //Wrap parameters
    auto arg_0 = Nan::New<String>(url).ToLocalChecked();
    Local<Array> arg_1 = Nan::New<Array>();
    for(size_t i = 0; i < (*header).size(); i++)
    {
        auto arg_1_1 = Nan::New<Object>();
        auto arg_1_1_1 = Nan::New<String>((*header)[i].field).ToLocalChecked();
        Nan::DefineOwnProperty(arg_1_1, Nan::New<String>("field").ToLocalChecked(), arg_1_1_1);
        auto arg_1_1_2 = Nan::New<String>((*header)[i].value).ToLocalChecked();
        Nan::DefineOwnProperty(arg_1_1, Nan::New<String>("value").ToLocalChecked(), arg_1_1_2);

        arg_1->Set((int)i,arg_1_1);
    }

    auto arg_2 = NJSItfHttpCallback::wrap(callback);


    Handle<Value> args[3] = {arg_0, arg_1, arg_2};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSItfHttp::get fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("get").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_get = Nan::CallAsFunction(calling_funtion->ToObject(),handle,3,args);
    if(result_get.IsEmpty())
    {
        Nan::ThrowError("NJSItfHttp::get call failed");
    }
}
NAN_METHOD(NJSItfHttp::addRef) {

    NJSItfHttp *obj = Nan::ObjectWrap::Unwrap<NJSItfHttp>(info.This());
    obj->Ref();
}

NAN_METHOD(NJSItfHttp::removeRef) {

    NJSItfHttp *obj = Nan::ObjectWrap::Unwrap<NJSItfHttp>(info.This());
    obj->Unref();
}

NAN_METHOD(NJSItfHttp::New) {

    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSItfHttp function can only be called as constructor (use New)");
    }

    NJSItfHttp *node_instance = nullptr;
    if(info[0]->IsObject())
    {
        node_instance = new NJSItfHttp(info[0]->ToObject());
    }
    else
    {
        return Nan::ThrowError("NJSItfHttp::New requires an implementation from node");
    }

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}

void NJSItfHttp::Initialize(Local<Object> target) {

    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSItfHttp::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSItfHttp").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"addRef", addRef);
    Nan::SetPrototypeMethod(func_template,"removeRef", removeRef);

    //Add template to target
    target->Set(Nan::New<String>("NJSItfHttp").ToLocalChecked(), func_template->GetFunction());
}
