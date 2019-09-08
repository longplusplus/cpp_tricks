# cpp_tricks
记录一些日常开发中遇到的c++ tricks，方便后续参考
##1. has_member
检查类或者结构体是否具有某个成员
###1.1 has_memer.h
宏定义
###1.2 has_memger_test.h
测试代码.
step1. 先定义HAS_MEMBER_(方法名)
step2. has_member_方法名<类or结构>::value
