# rk3399_tf_lite
soc: rk3399 A72 + A53

Ubuntu18.04 on board native compile tensorflow lite

tensorflow >= r1.95
(option) bazel >=0.15



git clone --branch r1.95 https://github.com/tensorflow/tensorflow.git

git clone https://github.com/wangshankun/rk3399_tf_lite.git

cp -rf rk3399_tf_lite/tensorflow/* tensorflow

cd tensorflow

sudo apt-get install build-essential

./tensorflow/lite/tools/make/download_dependencies.sh

./tensorflow/lite/tools/make/build_rk3399_lib.sh

This should compile a static library in: tensorflow/lite/tools/make/gen/lib/rk3399_armv8/libtensorflow-lite.a

测试weight下载:https://tensorflow.google.cn/lite/models

参考链接:
https://codertw.com/%E7%A8%8B%E5%BC%8F%E8%AA%9E%E8%A8%80/512712/#outline__7

https://www.tensorflow.org/lite/rpi

label_image执行结果(比树莓派快两倍多):

![image](https://github.com/wangshankun/rk3399_tf_lite/blob/master/readme.jpg)
