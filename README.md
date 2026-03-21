# Compiler Lab LeetCode Solutions

![Language](https://img.shields.io/badge/language-C%2B%2B-blue)
![Problems](https://img.shields.io/badge/problems-58-orange)
![Course](https://img.shields.io/badge/course-Compiler%20Lab-green)

This repository contains solutions to **LeetCode problems mapped to compiler design concepts** as part of the **CSE 712: Compilers Lab** course.

The goal of this repository is to practice algorithmic problems related to different stages of a compiler such as lexical analysis, parsing, semantic analysis, runtime environments, intermediate code generation, and code optimization.

---

## Course Information

Course: **CSE 712 – Compilers Lab**  
Department of Computer Science and Engineering  
University of Chittagong  

Student: Md. Nazmul Hasan  
Student ID: 22701030  
Semester: 7th Semester  
Session: 2021–2022  

---

# Problem List

## Compiler Structure & Phases

| Problem | Link | Solution |
|--------|------|----------|
| Min Stack | https://leetcode.com/problems/min-stack | [Code](./stack/min_stack.cpp) |
| Implement Queue using Stacks | https://leetcode.com/problems/implement-queue-using-stacks | [Code](./stack/queue_using_stacks.cpp) |

---

## Lexical Analysis – Tokens, Regex, DFA

| Problem | Link | Solution |
|--------|------|----------|
| Valid Palindrome | https://leetcode.com/problems/valid-palindrome | [Code](./lexical/valid_palindrome.cpp) |
| Ransom Note | https://leetcode.com/problems/ransom-note | [Code](./lexical/ransom_note.cpp) |
| Word Pattern | https://leetcode.com/problems/word-pattern | [Code](./lexical/word_pattern.cpp) |
| Find and Replace Pattern | https://leetcode.com/problems/find-and-replace-pattern | [Code](./lexical/find_replace_pattern.cpp) |

---

## Finite Automata

| Problem | Link | Solution |
|--------|------|----------|
| Regular Expression Matching | https://leetcode.com/problems/regular-expression-matching | [Code](./automata/regex_matching.cpp) |
| Find First Occurrence in String | https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string | [Code](./automata/first_occurrence.cpp) |
| Wildcard Matching | https://leetcode.com/problems/wildcard-matching | [Code](./automata/wildcard_matching.cpp) |
| Valid Number | https://leetcode.com/problems/valid-number | [Code](./automata/valid_number.cpp) |
| Valid Parenthesis String | https://leetcode.com/problems/valid-parenthesis-string | [Code](./automata/valid_parenthesis_string.cpp) |

---

## Syntax Definition & Parsing

| Problem | Link | Solution |
|--------|------|----------|
| Valid Parentheses | https://leetcode.com/problems/valid-parentheses | [Code](./parsing/valid_parentheses.cpp) |
| Maximum Nesting Depth of Parentheses | https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses | [Code](./parsing/max_nesting_depth.cpp) |
| Decode String | https://leetcode.com/problems/decode-string | [Code](./parsing/decode_string.cpp) |

---

## Top-Down Parsing – LL(1)

| Problem | Link | Solution |
|--------|------|----------|
| Basic Calculator | https://leetcode.com/problems/basic-calculator | [Code](./ll1/basic_calculator.cpp) |
| Basic Calculator II | https://leetcode.com/problems/basic-calculator-ii | [Code](./ll1/basic_calculator_2.cpp) |
| Parsing a Boolean Expression | https://leetcode.com/problems/parsing-a-boolean-expression | [Code](./ll1/boolean_expression.cpp) |

---

## Bottom-Up Parsing – LR

| Problem | Link | Solution |
|--------|------|----------|
| Evaluate Reverse Polish Notation | https://leetcode.com/problems/evaluate-reverse-polish-notation | [Code](./lr/rpn_evaluation.cpp) |
| Exclusive Time of Functions | https://leetcode.com/problems/exclusive-time-of-functions | [Code](./lr/exclusive_time.cpp) |
| Validate Stack Sequences | https://leetcode.com/problems/validate-stack-sequences | [Code](./lr/validate_stack_sequences.cpp) |

---

## Syntax-Directed Translation

| Problem | Link | Solution |
|--------|------|----------|
| Mini Parser | https://leetcode.com/problems/mini-parser | [Code](./translation/mini_parser.cpp) |

---

## Semantic Analysis

| Problem | Link | Solution |
|--------|------|----------|
| Fraction to Recurring Decimal | https://leetcode.com/problems/fraction-to-recurring-decimal | [Code](./semantic/fraction_to_decimal.cpp) |
| Brace Expansion II | https://leetcode.com/problems/brace-expansion-ii | [Code](./semantic/brace_expansion.cpp) |

---

## Run-Time Environments

| Problem | Link | Solution |
|--------|------|----------|
| Remove Outermost Parentheses | https://leetcode.com/problems/remove-outermost-parentheses | [Code](./runtime/remove_outer_parentheses.cpp) |
| Flatten Nested List Iterator | https://leetcode.com/problems/flatten-nested-list-iterator | [Code](./runtime/flatten_iterator.cpp) |

---

## Intermediate Code Generation

| Problem | Link | Solution |
|--------|------|----------|
| Different Ways to Add Parentheses | https://leetcode.com/problems/different-ways-to-add-parentheses | [Code](./icg/different_ways_parentheses.cpp) |
| Serialize and Deserialize Binary Tree | https://leetcode.com/problems/serialize-and-deserialize-binary-tree | [Code](./icg/serialize_deserialize_tree.cpp) |

---

## Control Flow Graphs

| Problem | Link | Solution |
|--------|------|----------|
| Course Schedule | https://leetcode.com/problems/course-schedule | [Code](./cfg/course_schedule.cpp) |
| Course Schedule II | https://leetcode.com/problems/course-schedule-ii | [Code](./cfg/course_schedule_2.cpp) |
| Course Schedule IV | https://leetcode.com/problems/course-schedule-iv | [Code](./cfg/course_schedule_4.cpp) |
| All Paths From Source to Target | https://leetcode.com/problems/all-paths-from-source-to-target | [Code](./cfg/all_paths.cpp) |

---

## Code Optimization

| Problem | Link | Solution |
|--------|------|----------|
| Maximum Subarray | https://leetcode.com/problems/maximum-subarray | [Code](./optimization/max_subarray.cpp) |
| Best Time to Buy and Sell Stock | https://leetcode.com/problems/best-time-to-buy-and-sell-stock | [Code](./optimization/buy_sell_stock.cpp) |
| House Robber | https://leetcode.com/problems/house-robber | [Code](./optimization/house_robber.cpp) |
| Delete and Earn | https://leetcode.com/problems/delete-and-earn | [Code](./optimization/delete_earn.cpp) |
| Longest Increasing Path in a Matrix | https://leetcode.com/problems/longest-increasing-path-in-a-matrix | [Code](./optimization/longest_increasing_path.cpp) |
| Evaluate Division | https://leetcode.com/problems/evaluate-division | [Code](./optimization/evaluate_division.cpp) |
| LRU Cache | https://leetcode.com/problems/lru-cache | [Code](./optimization/lru_cache.cpp) |
| Remove K Digits | https://leetcode.com/problems/remove-k-digits | [Code](./optimization/remove_k_digits.cpp) |

---

# License

MIT License  
Copyright (c) 2026 Md. Nazmul Hasan
