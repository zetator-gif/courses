#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <regex>

int main() {
	int separateIO() {
		std::string text = "one two three";
		const std::regex ws_re(R"(\s+)");

		std::vector<std::string>	collection_texts;

		std::transform{
		std::sregex_token_iterator(
			text.cbegin(), text.cend(), ws_re, -1
	),
		std::sregex_token_iterator(),
		std::back_inserter(collection_texts).
		[](const std::ssub_match& match)[
			return match.str();
		]
		};
		return 0;
		int separateIO()
	}
}