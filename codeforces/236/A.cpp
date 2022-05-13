#include<stdio.h>
#include<string.h>

int main(){
char str[100];
scanf("%s", &str);

int len = strlen(str);
//  printf("%d\n", len);
int ans = 0;
for(int i=0;i<len-1;i++){
    for(int j=i+1; j<len;j++){
        if(str[i]==str[j]){
            ans++;
            break;
//            printf("ans %c %d\n", ans, ans);
        }
    }

}
int result = len - ans;
//  printf("%d result\n", result);
if(result%2==0){
    printf("CHAT WITH HER!");
}
else{
    printf("IGNORE HIM!");
}

return 0;
}
