#ifndef _TEST_ANNOTATION_ARGUMENTS_H_
#define _TEST_ANNOTATION_ARGUMENTS_H_ 1

#define TEST_ANNOTATION_EIGHT_ARGS(a, b, c, d, e, f, g, h) \
    test_annotation_eight_args(a, b, c, d, e, f, g, h)

#define TEST_ANNOTATION_NINE_ARGS(a, b, c, d, e, f, g, h, i) \
    test_annotation_nine_args(a, b, c, d, e, f, g, h, i)

#define TEST_ANNOTATION_TEN_ARGS(a, b, c, d, e, f, g, h, i, j) \
    test_annotation_ten_args(a, b, c, d, e, f, g, h, i, j)

#ifdef DR_ANNOTATION_EXPORT
# undef DR_ANNOTATION_EXPORT
#endif

#ifdef _MSC_VER
#else
# ifdef __LP64__
#  define DR_ANNOTATION_EXPORT __attribute__((visibility("default")))
# else
#  define DR_ANNOTATION_EXPORT __attribute__((fastcall, visibility("default")))
# endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _MSC_VER
__declspec(dllexport) void __fastcall
test_annotation_eight_args(unsigned int a, unsigned int b,
    unsigned int c, unsigned int d, unsigned int e, unsigned int f,
    unsigned int g, unsigned int h);

__declspec(dllexport) void __fastcall
test_annotation_nine_args(unsigned int a, unsigned int b,
    unsigned int c, unsigned int d, unsigned int e, unsigned int f,
    unsigned int g, unsigned int h, unsigned int i);

__declspec(dllexport) void __fastcall
test_annotation_ten_args(unsigned int a, unsigned int b,
    unsigned int c, unsigned int d, unsigned int e, unsigned int f,
    unsigned int g, unsigned int h, unsigned int i, unsigned int j);
#else
DR_ANNOTATION_EXPORT
void
test_annotation_eight_args(unsigned int a, unsigned int b,
    unsigned int c, unsigned int d, unsigned int e, unsigned int f,
    unsigned int g, unsigned int h)
    __attribute__ ((weak));

DR_ANNOTATION_EXPORT
void
test_annotation_nine_args(unsigned int a, unsigned int b,
    unsigned int c, unsigned int d, unsigned int e, unsigned int f,
    unsigned int g, unsigned int h, unsigned int i)
    __attribute__ ((weak));

DR_ANNOTATION_EXPORT
void
test_annotation_ten_args(unsigned int a, unsigned int b,
    unsigned int c, unsigned int d, unsigned int e, unsigned int f,
    unsigned int g, unsigned int h, unsigned int i, unsigned int j)
    __attribute__ ((weak));
# endif

#ifdef __cplusplus
}
#endif

#undef DR_ANNOTATION_EXPORT

#endif

