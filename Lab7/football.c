#include<stdio.h>
#include "football.h"

int count_combinations(int score){
  int td2pt, td_fg, td, fg, safety;
  int count = 0;


  for (td2pt = 0; td2pt * 8 <= score; td2pt++) {
        for (td_fg = 0; td_fg * 7 + td2pt * 8 <= score; td_fg++) {
            for (td = 0; td * 6 + td_fg * 7 + td2pt * 8 <= score; td++) {
                for (fg = 0; fg * 3 + td * 6 + td_fg * 7 + td2pt * 8 <= score; fg++) {
                    for (safety = 0; safety * 2 + fg * 3 + td * 6 + td_fg * 7 + td2pt * 8 <= score; safety++) {
                        int total = safety * 2 + fg * 3 + td * 6 + td_fg * 7 + td2pt * 8;
                        if (total == score) {
                            count++;
                        }
                    }
                }
            }
        }
    }

    return count;
}


void print_combinations(int score) {
    int td2pt, td_fg, td, fg, safety;

    for (td2pt = 0; td2pt * 8 <= score; td2pt++) {
        for (td_fg = 0; td_fg * 7 + td2pt * 8 <= score; td_fg++) {
            for (td = 0; td * 6 + td_fg * 7 + td2pt * 8 <= score; td++) {
                for (fg = 0; fg * 3 + td * 6 + td_fg * 7 + td2pt * 8 <= score; fg++) {
                    for (safety = 0; safety * 2 + fg * 3 + td * 6 + td_fg * 7 + td2pt * 8 <= score; safety++) {
                        int total = safety * 2 + fg * 3 + td * 6 + td_fg * 7 + td2pt * 8;
                        if (total == score) {
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",
                                   td2pt, td_fg, td, fg, safety);
                        }
                    }
                }
            }
        }
    }
}