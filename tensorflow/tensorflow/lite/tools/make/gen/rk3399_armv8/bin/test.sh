#!/bin/sh

./label_image -v 4 -m ./mobilenet_quant_v1_224.tflite  -i ./grace_hopper.bmp -l ./labels.txt
