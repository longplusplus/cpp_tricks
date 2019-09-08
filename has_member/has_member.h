/**
 * @file has_member.h
 * @brief 
 * @author longplusplus@google.com
 * @date 2019-09-08 17:45:18
 */

#define DEFINE_MEMBER_CHECKER(member_name) \
    template <typename T> \
    struct has_member_##member_name{ \
 \
        template<typename C> \
            static int test(decltype(&C::member_name)); \
 \
        template<typename C> \
            static double test(...); \
 \
        enum {value = sizeof(test<T>(0)) == sizeof(int)}; \
    };
