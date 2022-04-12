# About plurality :classical_building:

This program runs election through plurality vote. Basically, every voter gets to vote for one candidate. At the end of the election, whichever candidate has the greatest number of votes is declared the winner of the election.

*Most of the code was already done for this exercise, therefore, the functions I've implemented are commented*

## Implemented functions :construction_worker_woman::bookmark_tabs:

I coded two functions for this code to work:

- **vote(name):** Checks if the candidate chosen is a valid candidate.
- **print_winner():** Checks if one or more candidates had most votes than everyone else.

## Main variables :abc:

- **candidate_count:** Counts how many candidates are eligible.
- **candidates[].votes:** Array that holds each candidate's vote. Index indicates candidate number.
- **most_votes:** Holds the higher votes number of the election.