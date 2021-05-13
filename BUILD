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
    # TF does not expose one single platform independent target?
    select({
      "@platforms//os:osx": [
        "@org_tensorflow//tensorflow/lite:libtensorflowlite.dylib",
        "@macos_opencv//:opencv",
      ],
      "@platforms//os:linux": [
        "@org_tensorflow//tensorflow/lite:libtensorflowlite.so",
        "@linux_opencv//:opencv",
      ]}) + [
    "@org_tensorflow//tensorflow/lite/kernels:builtin_ops",
  ],
  copts = [
    "-std=c++14",
    "-Ofast", "-march=native", "-fno-trapping-math -fassociative-math -funsafe-math-optimizations -Wall"
  ],
)
