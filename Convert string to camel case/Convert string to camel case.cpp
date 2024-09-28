#include <string>

std::string BEST_to_camel_case(std::string text)
{
    for (int i = 0; i < text.size(); ++i)
    {
        if (text[i] == '-' || text[i] == '_')
        {
            text.erase(i, 1);
            text[i] = toupper(text[i]);
        }
    }
    return text;
}


std::string MINE_to_camel_case(std::string text) {
    int i;
    std::string CamelText = "";
    for (i = 0; i < text.length(); i++)
    {
        if ((text[i] == 95) || (text[i] == 45))
        {
            CamelText += toupper(text[i + 1]);
            i++;
        }
        else
        {
            CamelText += text[i];
        }
    }
    return CamelText;
}