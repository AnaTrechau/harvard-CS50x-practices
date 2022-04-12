# About runoff:classical_building::herb:

This program runs election through runoff vote. Basically, in this ranked-choice system, voters can vote for more than one candidate. Instead of just voting for their top choice, they can rank the candidates in order of preference.

If candidates are tied, the program runs a runoff, eliminating the least voted and checks for voters second options.

* Half the code was already done for this exercise, therefore, the functions I've implemented are commented*

## Implemented functions :construction_worker_woman::bookmark_tabs:

I made six functions to finish this code:

- **vote(voter, rank, name):** If the candidate is a valid preference, records it in preference order.
- **tabulate():** Checks if a candidate is eliminated. Computes votes to non eliminated candidates.
- **print_winner():** Checks if one or more candidates had more than half the votes.
- **find_min():** Returns the minimum number of votes a non eliminated candidate has.
- **is_tie(min):** If all remaining candidates have the same number of votes, declares a tie.
- **eliminate(min):** If a candidate has the least votes for that round, they´re eliminated.

## Main variables :abc:

- **candidate_count:** Counts how many candidates are eligible.
- **candidates[].votes:** Array that holds each candidate's vote. Index indicates candidate number.
- **most_votes:** Holds the higher votes number of the election.
- **remaining:** Counts how many candidates are valid for the next runoff and also to calculate ties.