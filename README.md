# Dubitare Project

A project for my spring 2024 Introduction to Green Computing course at TXST that solved the following problem using two different programs. The first program aims for correctness (i.e. producing the correct output for the given input). The second program aims for better energy efficiency (i.e. achieving noticeable energy savings compared to the first solution). 

## Description 

The word “dubitare” is “to doubt” in Latin.  The Latin alphabet is a subset of English alphabet, so we can easily type Latin on a modern computer.  Your friend, Eve, recently has been very interested in Latin.  However, she does not have any Latin-English dictionary.  Therefore, she collected many articles in English or in Latin about some specific topic. Her plan is to compute the frequency of each word appearing in the articles, and use the statistics to help her to map Latin words into English words. 
The first line of input contains an integer T (T ≤ 40) indicating the number of test cases. For each test case, it starts with a line containing three integers L, a, b (L ≤ 300, 1 ≤ a ≤ b ≤ 100). Each of the following L lines contains several words separated by spaces.  You may assume:  
1. There are at most 1200 characters including spaces. 
2. All words consist of English alphabets. 
3. All alphabets are in lower cases.

For the ith test case, output “Testcase #i:” first. Then output the ath, (a+1)th, …, bth most frequent words and their frequency, respectively.  For example, if “cat” appears 15 times, then you should output “cat:15” in a line. If two words have the same frequency, then the word is considered as more frequent if it comes before another in the dictionary. Output a blank line between two test cases.

## Getting Started

### Dependencies

* GreenCode-PowerMeasurement
* test.in file
* test.out file

### Installing

* Download zip file on GitHub
* Clone repository
* Fork repository

### Executing program

Execute the project file in Visual Studio Code using the run button. Then use the GreenCode extension by right-clicking the mouse/pad and entering the code file path into the search bar.

## Author

Aide Cuevas (LinkedIn in profile)

## Version History

* 0.2
    * Not much change from the first version
    * Used begin and end functions on the map to speed up sorting and cut out unnecessary logic on line 62
    * Runtime: 0.687 seconds
    * Total Power Usage: ~122. 5 Watts
* 0.1
    * Took advantage of 2-D vector, vectors, unordered maps, and sort function
    * Runtime: 0.656 seconds
    * Total Power usage: ~138.8 Watts

## License

This project is licensed under the MIT License - see the LICENSE.md file for details

## Acknowledgments 

Inspiration, code snippets, etc.
* Visual Studio Code Extension GreenCode-PowerMeasurement1, hzm7
