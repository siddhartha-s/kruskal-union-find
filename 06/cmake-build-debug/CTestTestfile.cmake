# CMake generated Testfile for 
# Source directory: /Users/sid/my git/ipd/hw/06
# Build directory: /Users/sid/my git/ipd/hw/06/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(Test_graph_test "graph_test")
add_test(Test_uf_test "uf_test")
add_test(Test_mst_test "mst_test")
subdirs(".ipd/lib/catch")
subdirs(".ipd/lib/ge211")
