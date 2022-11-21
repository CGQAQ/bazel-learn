cc_library(
    name = "hello-world-lib",
    srcs = ["lib.cc"],
    hdrs = ["lib.h"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "hello-world-test",
    srcs = [
        "hello-world-test.cc",
    ],
    includes = ["."],
    deps = [
        "hello-world-lib",
        "@gtest",
        "@gtest//:gtest_main",  # Only if hello_test.cc has no main()
    ],
)
