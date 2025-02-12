/****************************************************************************
 Copyright (c) 2022 Xiamen Yaji Software Co., Ltd.
 http://www.cocos.com
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated engine source code (the "Software"), a limited,
 worldwide, royalty-free, non-assignable, revocable and non-exclusive license
 to use Cocos Creator solely to develop games on your target platforms. You shall
 not use Cocos Creator software for developing other software or tools that's
 used for developing games. You are not granted to publish, distribute,
 sublicense, and/or sell copies of Cocos Creator.
 The software or tools in this License Agreement are licensed, not sold.
 Xiamen Yaji Software Co., Ltd. reserves all rights not expressly granted to you.
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
****************************************************************************/

// deprecated conversion functions

// native value -> se value
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool int8_to_seval(int8_t v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool uint8_to_seval(uint8_t v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool int32_to_seval(int32_t v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool uint32_to_seval(uint32_t v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool int16_to_seval(uint16_t v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool uint16_to_seval(uint16_t v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool boolean_to_seval(bool v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool float_to_seval(float v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool double_to_seval(double v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool long_to_seval(long v, se::Value *ret) { // NOLINT(readability-identifier-naming, google-runtime-int)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool ulong_to_seval(unsigned long v, se::Value *ret) { // NOLINT(readability-identifier-naming, google-runtime-int)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool longlong_to_seval(long long v, se::Value *ret) { // NOLINT(readability-identifier-naming, google-runtime-int)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool uintptr_t_to_seval(uintptr_t v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool size_to_seval(size_t v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool std_string_to_seval(const std::string &v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}

CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool std_vector_string_to_seval(const std::vector<std::string> &v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool std_vector_int_to_seval(const std::vector<int> &v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool std_vector_uint16_to_seval(const std::vector<uint16_t> &v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool std_vector_float_to_seval(const std::vector<float> &v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
CC_DEPRECATED(3.6, "use nativevalue_to_se instead")
inline bool std_map_string_string_to_seval(const std::map<std::string, std::string> &v, se::Value *ret) { // NOLINT(readability-identifier-naming)
    return nativevalue_to_se(v, *ret, nullptr);
}
