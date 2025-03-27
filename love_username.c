/*Vasya adores sport programming. He can't write programs but he loves to watch the contests' progress. Vasya even has a favorite coder and Vasya pays special attention to him.

One day Vasya decided to collect the results of all contests where his favorite coder participated and track the progress of his coolness. For each contest where this coder participated, he wrote out a single non-negative number — the number of points his favorite coder earned in the contest. Vasya wrote out the points for the contest in the order, in which the contests run (naturally, no two contests ran simultaneously).

Vasya considers a coder's performance in a contest amazing in two situations: he can break either his best or his worst performance record. First, it is amazing if during the contest the coder earns strictly more points that he earned on each past contest. Second, it is amazing if during the contest the coder earns strictly less points that he earned on each past contest. A coder's first contest isn't considered amazing. Now he wants to count the number of amazing performances the coder had throughout his whole history of participating in contests. But the list of earned points turned out long and Vasya can't code... That's why he asks you to help him.

Input
The first line contains the single integer n (1 ≤ n ≤ 1000) — the number of contests where the coder participated.

The next line contains n space-separated non-negative integer numbers — they are the points which the coder has earned. The points are given in the chronological order. All points do not exceed 10000.

Output
Print the single number — the number of amazing performances the coder has had during his whole history of participating in the contests.

Examples
InputCopy
5
100 50 200 150 200
OutputCopy
2*/

#include <stdio.h>
int main(){
    int n;
    scanf("%d\n", &n);
    int a[n];
    for(int i = 0; i <= n-1; ++i){
        scanf("%d ", &a[i]);
    }
    int count = 0;
    int max = a[0], min = a[0];
    for(int i = 0; i <= n-1; ++i){
        if(a[i] > max){
            max = a[i];
            count++;
        }
        else if(a[i] < min){
            min = a[i];
            count++;

    }
}
    printf("%d", count);
    return 0;

}