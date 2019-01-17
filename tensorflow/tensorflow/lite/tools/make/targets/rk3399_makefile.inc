# Settings for RK3399

#TARGET_ARCH := arm64
#TARGET_ARCH := armv7l
#TARGET_TOOLCHAIN_PREFIX := arm-linux-gnueabihf-

CXXFLAGS += \
    -march=armv8-a+fp+simd+crc+crypto \
    -mtune=cortex-a72.cortex-a53 \
    -ftree-vectorize \
    -funsafe-math-optimizations \
    -fomit-frame-pointer \
    -DRASPBERRY_PI \
    -D_GLIBCXX_USE_CXX11_ABI=0 \
    -fPIC

CCFLAGS += \
    -march=armv8-a+fp+simd+crc+crypto \
    -mtune=cortex-a72.cortex-a53 \
    -ftree-vectorize \
    -funsafe-math-optimizations \
    -fomit-frame-pointer \
    -DRASPBERRY_PI \
    -D_GLIBCXX_USE_CXX11_ABI=0 \
    -fPIC

LDFLAGS := \
  -Wl,--no-export-dynamic \
  -Wl,--exclude-libs,ALL \
  -Wl,--gc-sections \
  -Wl,--as-needed \
  -ldl -lm


