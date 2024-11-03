#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int cumulative_score_player1 = 0;
    int cumulative_score_player2 = 0;
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < N; i++) {
        int Si, Ti;
        scanf("%d %d", &Si, &Ti);

        cumulative_score_player1 += Si;
        cumulative_score_player2 += Ti;

        int lead;
        int current_winner;

        if (cumulative_score_player1 > cumulative_score_player2) {
            lead = cumulative_score_player1 - cumulative_score_player2;
            current_winner = 1;
        } else {
            lead = cumulative_score_player2 - cumulative_score_player1;
            current_winner = 2;
        }

        if (lead > max_lead) {
            max_lead = lead;
            winner = current_winner;
        }
    }

    printf("%d %d\n", winner, max_lead);
    
    return 0;
}
