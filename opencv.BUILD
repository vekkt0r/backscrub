cc_library(
  name = "opencv",
  srcs = glob(["lib/*.so*", "lib/*.dylib"]),
  hdrs = glob(["include/**/*.hpp", "include/**/*.h"]),
  includes = ["include/opencv4"],
  visibility = ["//visibility:public"],
  linkstatic = 1,
)
