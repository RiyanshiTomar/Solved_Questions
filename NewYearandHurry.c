/*Limak is going to participate in a contest on the last day of the 2016. The contest will start at 20:00 and will last four hours, exactly until midnight. There will be n problems, sorted by difficulty, i.e. problem 1 is the easiest and problem n is the hardest. Limak knows it will take him 5·i minutes to solve the i-th problem.

Limak's friends organize a New Year's Eve party and Limak wants to be there at midnight or earlier. He needs k minutes to get there from his house, where he will participate in the contest first.

How many problems can Limak solve if he wants to make it to the party?

Input
The only line of the input contains two integers n and k (1 ≤ n ≤ 10, 1 ≤ k ≤ 240) — the number of the problems in the contest and the number of minutes Limak needs to get to the party from his house.

Output
Print one integer, denoting the maximum possible number of problems Limak can solve so that he could get to the party at midnight or earlier.

Examples
InputCopy
3 222
OutputCopy
2*/

#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d", &n, &k);
    int total = 240;
    int rest = total - k; //240-222 = 18
    int time_question = 0;  
    int count = 0; 
    for(int i = 1; i <= n; ++i){
        time_question += i*5;    //1*5 + 2*5+3*5 = 30
        if(time_question > rest) {
            
            break;
        }
        count++;
    }
    printf("%d", count);
    
    return 0;
    
}