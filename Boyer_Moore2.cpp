#include <bits/stdc++.h>
using namespace std;
#define no_of_char 256

void badMatch_table(string s, int n,int badMatch[no_of_char]) {
   for (int i = 0; i < no_of_char; i++)
      badMatch[i] = -1;

   for (int i = 0; i < n; i++)
      badMatch[(int)s[i]] = i;
}

void BoyerMooreAlgorithm(string text, string pattern) {
   int m = pattern.size();
   int n = text.size();
   int badMatch[no_of_char];
   badMatch_table(pattern, m, badMatch);


   int s= 0;
   while (s <= (n - m)) {
      int j = m - 1;
      while (j >= 0 && pattern[j] == text[s + j])
         j--;
      if (j < 0) {
         cout << "Pattern Found ";
         s+= (s+ m < n) ? m - badMatch[text[s + m]] : 1;
      }
      else
         s += j - badMatch[text[s + j]];
   }
}

int main() {
   string text = "TRUSTHARDTOOTHBRUSHES";
   string pattern = "TOOTH";

   BoyerMooreAlgorithm(text, pattern);

   return 0;
}

