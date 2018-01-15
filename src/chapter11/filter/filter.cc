/*
 * This file contains code from "C++ Primer, Fifth Edition", by Stanley B.
 * Lippman, Josee Lajoie, and Barbara E. Moo, and is covered under the
 * copyright and warranty notices given in that book:
 *
 * "Copyright (c) 2013 by Objectwrite, Inc., Josee Lajoie, and Barbara E. Moo."
 *
 *
 * "The authors and publisher have taken care in the preparation of this book,
 * but make no expressed or implied warranty of any kind and assume no
 * responsibility for errors or omissions. No liability is assumed for
 * incidental or consequential damages in connection with or arising out of the
 * use of the information or programs contained herein."
 *
 * Permission is granted for this code to be used for educational purposes in
 * association with the book, given proper citation if and when posted or
 * reproduced.Any commercial use of this code requires the explicit written
 * permission of the publisher, Addison-Wesley Professional, a division of
 * Pearson Education, Inc. Send your request for permission, stating clearly
 * what code you would like to use, and in what specific way, to the following
 * address:
 *
 * 	Pearson Education, Inc.
 * 	Rights and Permissions Department
 * 	One Lake Street
 * 	Upper Saddle River, NJ  07458
 * 	Fax: (201) 236-3290
*/

#include <map>

using std::map;

#include <set>

using std::set;

#include <string>

using std::string;

#include <iostream>

using std::cin; using std::cout; using std::endl;

#include <algorithm>
#include <cctype>

// truncate punctuation
string truncate(const string &word) {
    auto it = std::find_if(word.cbegin(), word.cend(),
                           [](const char c) {
                               return std::ispunct(c);
                           });
    auto count = it - word.cbegin();
    return word.substr(0, count);
}

void to_lower(string &word) {
    for (auto &c :word) {
        if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }
}

int main() {
    // count the number of times each word occurs in the input
    map<string, size_t> word_count; // empty map from string to size_t
    set<string> exclude = {"The", "But", "And", "Or", "An", "A",
                           "the", "but", "and", "or", "an", "a"};
    string word;
    while (cin >> word) {
        // ignore case and punctuation
        word = truncate(word);
        to_lower(word);

        // count only words that are not in exclude
        if (exclude.find(word) == exclude.end())
            ++word_count[word];   // fetch and increment the counter for word
    }

    // for each element in the map
    for (const auto &w : word_count) {
        // print the results
        cout << "\"" << w.first << "\"" << " occurs " << w.second
             << ((w.second > 1) ? " times" : " time") << endl;
    }
    return 0;
}