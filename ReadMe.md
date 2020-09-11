#### 直接生成类库

        # CMake最低版本
        cmake_minimum_required(VERSION 3.6.0)
        # 将需要打包的资源添加进来
        add_library(
        		# 库名字
                native_hello
                # 库类型
                SHARED
                # 包含的cpp
                native_hello.cpp
        )
        # 链接到项目中
        target_link_libraries(
                native_hello
                android
                log
        )




 #### 参考文章
 [关于在Android中使用CMake你所需要了解的一切](https://mp.weixin.qq.com/s/jIaNpMi-D-e13vQCbiJyNA)
 [UseCmakeBuildLib](https://github.com/lilinxiong/UseCmakeBuildLib)

