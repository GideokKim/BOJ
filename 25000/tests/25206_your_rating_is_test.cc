#include "25000/src/25206_your_rating_is.h"

#include "test_headers/test_helper.h"

class YourRatingIsTest : public IOTestFixture<YourRatingIs> {};

TEST_F(YourRatingIsTest, SampleCase) {
  RunTest(
      "ObjectOrientedProgramming1 3.0 A+\n"
      "IntroductiontoComputerEngineering 3.0 A+\n"
      "ObjectOrientedProgramming2 3.0 A0\n"
      "CreativeComputerEngineeringDesign 3.0 A+\n"
      "AssemblyLanguage 3.0 A+\n"
      "InternetProgramming 3.0 B0\n"
      "ApplicationProgramminginJava 3.0 A0\n"
      "SystemProgramming 3.0 B0\n"
      "OperatingSystem 3.0 B0\n"
      "WirelessCommunicationsandNetworking 3.0 C+\n"
      "LogicCircuits 3.0 B0\n"
      "DataStructure 4.0 A+\n"
      "MicroprocessorApplication 3.0 B+\n"
      "EmbeddedSoftware 3.0 C0\n"
      "ComputerSecurity 3.0 D+\n"
      "Database 3.0 C+\n"
      "Algorithm 3.0 B0\n"
      "CapstoneDesigninCSE 3.0 B+\n"
      "CompilerDesign 3.0 D0\n"
      "ProblemSolving 4.0 P\n",
      "3.284483");
}

TEST_F(YourRatingIsTest, AllFCase) {
  RunTest(
      "BruteForce 3.0 F\n"
      "Greedy 1.0 F\n"
      "DivideandConquer 2.0 F\n"
      "DynamicProgramming 3.0 F\n"
      "DepthFirstSearch 4.0 F\n"
      "BreadthFirstSearch 3.0 F\n"
      "ShortestPath 4.0 F\n"
      "DisjointSet 2.0 F\n"
      "MinimumSpanningTree 2.0 F\n"
      "TopologicalSorting 1.0 F\n"
      "LeastCommonAncestor 2.0 F\n"
      "SegmentTree 4.0 F\n"
      "EulerTourTechnique 3.0 F\n"
      "StronglyConnectedComponent 2.0 F\n"
      "BipartiteMatching 2.0 F\n"
      "MaximumFlowProblem 3.0 F\n"
      "SuffixArray 1.0 F\n"
      "HeavyLightDecomposition 4.0 F\n"
      "CentroidDecomposition 3.0 F\n"
      "SplayTree 1.0 F\n",
      "0.000000");
}
