#include <stdio.h>
#include <string.h>

void Combination(char str[], int n, int index, char used[]) {
  if (index == n) {
    str[index] = '\0'; 
    printf("%s\n", str);
    return;
  }

  

  for (char ch = 'a'; ch <= 'z'; ch++) {
    if(used[ch - 'a'] == 0) {
        used[ch - 'a'] = 1;
        str[index] = ch;
        Combination(str, n, index + 1, used);
        used[ch - 'a'] = 0;
    }
  }
}

int main() {
    char str[5]; 
    char used[26];

    memset(used, '\0', sizeof(used));


  Combination(str, 4, 0, used);

  return 0;
}
