#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v1, *v2, *ans;
    int n;
    
    scanf("%d", &n);
    
    v1 = (int*)malloc(n * sizeof(int));
    v2 = (int*)malloc(n * sizeof(int));
    ans = (int*)malloc(n * sizeof(int));
    
    for(int i=0; i<n; i++){
        int x;
        scanf("%d", &x);
        v1[i] = x;
        v2[i] = x;
    }
    
    qsort(v1, n, sizeof(int), compare);
    
    int ans_index = 0;
    for(int i=0; i<n; i++){
        if(v1[i] != v2[i]){
            ans[ans_index] = v1[i];
            ans_index++;
        }
    }
    
    printf("%d\n", ans_index);
    for(int i=0; i<ans_index; i++){
        printf("%d ", ans[i]);
    }
    printf("\n");
    
    free(v1);
    free(v2);
    free(ans);
    
    return 0;
}

