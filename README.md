# rk3399_tf_lite
soc: rk3399 A72 + A53

Ubuntu18.04 compile tensorflow lite

tensorflow >= r1.95
(option) bazel >=0.15

reference: https://www.tensorflow.org/lite/rpi


git clone --branch r1.95 https://github.com/tensorflow/tensorflow.git

git clone https://github.com/wangshankun/rk3399_tf_lite.git

cp -rf rk3399_tf_lite/tensorflow/* tensorflow

cd tensorflow

sudo apt-get install build-essential

./tensorflow/lite/tools/make/download_dependencies.sh

./tensorflow/lite/tools/make/build_rk3399_lib.sh

This should compile a static library in: tensorflow/lite/tools/make/gen/lib/rk3399_armv8/libtensorflow-lite.a
