set_project("app")

add_requires("openssl")

includes("testlib1","testlib2")

target("app")
  set_kind("binary")
  add_files("main.c")
  add_deps("testlib1","testlib2")
