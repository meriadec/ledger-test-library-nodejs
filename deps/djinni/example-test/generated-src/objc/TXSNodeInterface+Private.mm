// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#import "TXSNodeInterface+Private.h"
#import "TXSNodeInterface.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

auto NodeInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    DJINNI_UNIMPLEMENTED(@"Interface not implementable in any language.");
}

auto NodeInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    DJINNI_UNIMPLEMENTED(@"Interface not implementable in any language.");
}

}  // namespace djinni_generated
