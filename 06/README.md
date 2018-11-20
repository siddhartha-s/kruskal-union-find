# IPD Homework 6
# Team members:
  - /jide /siddhartha
  
# Union Find
- Test case "Test: union find of size 0" (file uf_test.cpp, line 6) is a trivial case and is used to confirm that the union find generated a union find with the inputted number of disjoint sets. Checks for initialisation of the union-find. 

- Test case "Test: union find of size 5" (file uf_test.cpp, line 12) is a case used to confirm that the union find initialises the disjoint sets to each have themselves as a representative and a a rank 0. 

- Test case "Size 7 Union Find with union and find operations" (file uf_test.cpp, line 26) initialises a union find of 7 disjoint sets, performs 6 unions and then find operations on each set to confirm whether the union by rank occurs. Additionally, friend function get_rank (file union_find.cpp, line 47) is used to confirm that path compression is taking place. 

# MST - Kruskal's algorithm
-  Test case "Finding an MST: Ensuring right weights are chosen" (file mst_test.cpp, line 7) initialises a cyclic graph of 3 edges and ensures that the MST chooses the edges with the lightest weights/

- Test case "Finding an MST: Test to check avoiding cycles" (file mst_test.cpp, 22) initiliases a cyclic graph of 4 edges and ensures that the MST contains no cycles. 

- Test case "Finding an MST: 2 disconnected nodes" (file mst_test.cpp, line 40) tests the trivial case of 2 disconnected nodes. 

- Test case "Finding an MST: Empty graph" (file mst_test.cpp, line 49) tests trivial case of an empty graph. 

- Test case "Finding an MST: 2 disconnected graphs" (file mst_test.cpp, line 58) tests whether the algorithm works for a graph made 2 sub-graphs. 
