#include<stdio.h>
#include<string.h>
#include <malloc.h>
void prefixSuffixArray(char* pat, int M, int* pps) {
   int length = 0;
   pps[0] = 0;
   int i = 1;
   while (i < M) {
      if (pat[i] == pat[length]) {
         length++;
         pps[i] = length;
         i++;
      } else {
         if (length != 0)
         length = pps[length - 1];
         else {
            pps[i] = 0;
            i++;
         }
      }
   }
}
int KMPAlgorithm(char* text, char* pattern) {
   int M = strlen(pattern);
   int N = strlen(text);
   int pps[M];
   int count = 0;
   prefixSuffixArray(pattern, M, pps);
   int i = 0;
   int j = 0;
   while (i < N) {
      if (pattern[j] == text[i]) {
         j++;
         i++;
      }
      if (j == M) {
         count++;
         j = pps[j - 1];
      }
      else if (i < N && pattern[j] != text[i]) {
         if (j != 0)
         j = pps[j - 1];
         else
         i = i + 1;
      }
   }
   return count;
}
int main() {
   char text[100001], pattern[100001];
   scanf("%s",text);
   scanf("%s",pattern);
   printf("%d", KMPAlgorithm(text, pattern));
   return 0;
}