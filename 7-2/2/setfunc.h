#include <istream>
#include <set>

std::set<int> parseSet(const std::string& str);
void printSet(const std::set<int>&);
std::set<int> GetIntersection(const std::set<int>& set0, const std::set<int>& set1);
std::set<int> GetUnion(const std::set<int>& set0, const std::set<int>& set1);
std::set<int> GetDifference(const std::set<int>& set0, const std::set<int>& set1);