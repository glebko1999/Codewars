#include <string>

bool BEST_solution(const std::string& str, const std::string& ending) {
	return str.size() >= ending.size() && str.compare(str.size() - ending.size(), std::string::npos, ending) == 0;
}

bool MINE_solution(std::string const& str, std::string const& ending) {
    if ((str.rfind(ending) == (str.length() - ending.length())) && (ending.length() <= str.length()))
    {
        return true;

    }
    else
    {
        return false;
    }

}