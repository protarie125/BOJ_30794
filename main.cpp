#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> s;
  if ("miss" == s) {
    cout << 0;
  } else if ("bad" == s) {
    cout << 200 * n;
  } else if ("cool" == s) {
    cout << 400 * n;
  } else if ("great" == s) {
    cout << 600 * n;
  } else if ("perfect" == s) {
    cout << 1000 * n;
  }

  return 0;
}