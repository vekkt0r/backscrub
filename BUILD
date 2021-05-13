cc_binary(
  name = "deepseg",
  srcs = [
    "deepseg.cc",
    "loopback.h",
    "transpose_conv_bias.cc",
    "transpose_conv_bias.h",
  ] + select({
    "@platforms//os:osx": ["loopback_stub.cc"],
    "@platforms//os:linux": ["loopback.cc"]
  }),
  deps =
    select({
      "@platforms//os:osx": ["@org_tensorflow//tensorflow/lite:libtensorflowlite.dylib"],
      "@platforms//os:linux": ["@org_tensorflow//tensorflow/lite:libtensorflowlite.so"]}) + [
    "@org_tensorflow//tensorflow/lite/kernels:builtin_ops",
    "@brew_opencv//:opencv",
  ],
  copts = [
    "-std=c++14",
    "-Ofast", "-march=native", "-fno-trapping-math -fassociative-math -funsafe-math-optimizations -Wall"
  ],
)
