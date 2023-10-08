#include<iostream>;
#include<cstring>;

using namespace std;
int main(){
char txt[] = "Laboratory";
char pattern[]="rat";
int txtlength= strlen(txt);
int patternlen =strlen(pattern);
int i,j;
  for (i=0;i<=txtlength-patternlen;i++){
    for (j=0;j<patternlen;j++)
        if(txt[i+j]!=pattern[j])
           break;

        if(j==patternlen)
           cout<<"Pattern found at index " << i << endl;
           }

}
