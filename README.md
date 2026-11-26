# My Competitive Programming Solutions

C++ solutions to 600+ competitive programming problems (2008–2022), plus the ICPC team notebooks I used in contests.

## At a glance

| Source | Folder | Solutions |
|--------|--------|----------:|
| [Codeforces](https://codeforces.com/) | [`Competitions/Codeforces`](Competitions/Codeforces) | 314 (102 contests) |
| [USACO](http://usaco.org/) | [`Competitions/USACO`](Competitions/USACO) | 200 |
| [CSAcademy](https://csacademy.com/) | [`Competitions/CSAcademy`](Competitions/CSAcademy) | 47 (15 rounds) |
| Cuban Informatics Olympiad | [`Competitions/Cuba-Olympiad`](Competitions/Cuba-Olympiad) | 33 |
| Google Kick Start & Hash Code | [`Competitions/Google_competitions`](Competitions/Google_competitions) | 7 |

## Team notebooks (ICPC)

Algorithm references compiled for team contests. Each folder holds the LaTeX source, the code it includes, and the generated PDF.

| Team | Year | PDF | Highlights |
|------|------|-----|------------|
| KFP | 2014 | [reference.pdf](team-references/kfp-2014/reference.pdf) | Data structures, graphs & flow, geometry & math, strings, DP |
| 3n1_m4 | 2018 | [Team_Reference_ENIGMA_2018.pdf](team-references/3n1-m4-2018/Team_Reference_ENIGMA_2018.pdf) | Treaps, k-d trees, HLD, XOR/AND transforms, Möbius, geometry |

## Repository layout

```text
Competitions/
├── Codeforces/contest_<id>/<index>-<problem-name>.cpp
├── CSAcademy/round-<n>/
├── USACO/
├── Cuba-Olympiad/{PSN,Nacional,Provincial,OCI}/
└── Google_competitions/{Kick_start,hash_code}/
team-references/
├── kfp-2014/
└── 3n1-m4-2018/
```

## Build and run

Solutions are single-file C++ programs reading from standard input:

```bash
g++ -std=c++17 -O2 -o solution "Competitions/Codeforces/contest_009/a-die-roll.cpp"
./solution < input.txt
```

> Older USACO and olympiad solutions use `freopen("<name>.in", ...)` and read from files named after the problem.

To rebuild a team notebook (requires a LaTeX distribution):

```bash
cd team-references/kfp-2014
pdflatex reference.tex
```

## Conventions

- File and folder names use kebab-case (`a-die-roll.cpp`).
- Codeforces files are prefixed with the problem index (`a-`, `b-`, ...).
- Files ending in `-2` are alternative solutions to the same problem.
