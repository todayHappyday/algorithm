#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string before, string after) {
    sort(before.begin(),before.end());
    sort(after.begin(),after.end());
    return before == after ? 1 : 0;
}