# My Competitive Programming Solutions

C++ solutions to 600+ competitive programming problems, plus the ICPC team notebooks I used in contests.

## At a glance

| Source | Folder | Solutions |
|--------|--------|----------:|
| [Codeforces](https://codeforces.com/) | [`competitions/codeforces`](competitions/codeforces) | 318 (103 contests) |
| [USACO](http://usaco.org/) | [`competitions/usaco`](competitions/usaco) | 200 |
| [CSAcademy](https://csacademy.com/) | [`competitions/csacademy`](competitions/csacademy) | 47 (15 rounds) |
| Cuban Informatics Olympiad | [`competitions/cuba-olympiad`](competitions/cuba-olympiad) | 33 |
| Google Kick Start & Hash Code | [`competitions/google-competitions`](competitions/google-competitions) | 7 |

## Team notebooks (ICPC)

Algorithm references compiled for team contests. Each folder holds the LaTeX source, the code it includes, and the generated PDF.

| Team | Year | PDF | Highlights |
|------|------|-----|------------|
| KFP | 2014 | [reference.pdf](team-references/kfp-2014/reference.pdf) | Data structures, graphs & flow, geometry & math, strings, DP |
| 3n1_m4 | 2018 | [team-reference-enigma-2018.pdf](team-references/3n1-m4-2018/team-reference-enigma-2018.pdf) | Treaps, k-d trees, HLD, XOR/AND transforms, Möbius, geometry |

## Repository layout

```text
competitions/
├── codeforces/contest-<id>/<index>-<problem-name>.cpp
├── csacademy/round-<n>/
├── usaco/
├── cuba-olympiad/{psn,nacional,provincial,oci}/
└── google-competitions/{kick-start,hash-code}/
team-references/
├── kfp-2014/
└── 3n1-m4-2018/
```

## Build and run

Solutions are single-file C++ programs reading from standard input:

```bash
g++ -std=c++17 -O2 -o solution "competitions/codeforces/contest-009/a-die-roll.cpp"
./solution < input.txt
```

> Older USACO and olympiad solutions use `freopen("<name>.in", ...)` and read from files named after the problem.

To rebuild a team notebook (requires a LaTeX distribution):

```bash
cd team-references/kfp-2014
pdflatex reference.tex
```

## Conventions

- File and folder names use lowercase kebab-case (`a-die-roll.cpp`), except Java files, which must match their class name.
- Codeforces files are prefixed with the problem index (`a-`, `b-`, ...).
- Files ending in `-2` are alternative solutions to the same problem.
